#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031FD60
// Address: 0x31fd60 - 0x31fff0
void sub_0031FD60_0x31fd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031FD60_0x31fd60");
#endif

    switch (ctx->pc) {
        case 0x31fd84u: goto label_31fd84;
        case 0x31feccu: goto label_31fecc;
        default: break;
    }

    ctx->pc = 0x31fd60u;

    // 0x31fd60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31fd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31fd64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31fd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31fd68: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x31fd68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fd6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31fd6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x31fd70: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x31fd70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fd74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x31fd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x31fd78: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x31fd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x31fd7c: 0xc0c7e66  jal         func_31F998
    ctx->pc = 0x31FD7Cu;
    SET_GPR_U32(ctx, 31, 0x31FD84u);
    ctx->pc = 0x31FD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FD7Cu;
    // 0x31fd80: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F998u, 0x31FD7Cu, 0x31FD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FD84u;
label_31fd84:
    // 0x31fd84: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x31fd84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x31fd88: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x31fd88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31fd8c: 0x24630400  addiu       $v1, $v1, 0x400
    ctx->pc = 0x31fd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x31fd90: 0x2042824  and         $a1, $s0, $a0
    ctx->pc = 0x31fd90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x31fd94: 0x8c670014  lw          $a3, 0x14($v1)
    ctx->pc = 0x31fd94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x31fd98: 0x24e20020  addiu       $v0, $a3, 0x20
    ctx->pc = 0x31fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x31fd9c: 0x14a40006  bne         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31FD9Cu;
    {
        const bool branch_taken_0x31fd9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x31FDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FD9Cu;
        // 0x31fda0: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fd9c) {
            ctx->pc = 0x31FDB8u;
            goto label_31fdb8;
        }
    }
    ctx->pc = 0x31FDA4u;
    // 0x31fda4: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x31fda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x31fda8: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x31fda8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x31fdac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31FDACu;
    {
        const bool branch_taken_0x31fdac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FDACu;
        // 0x31fdb0: 0x2021025  or          $v0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fdac) {
            ctx->pc = 0x31FDC8u;
            goto label_31fdc8;
        }
    }
    ctx->pc = 0x31FDB4u;
    // 0x31fdb4: 0x0  nop
    ctx->pc = 0x31fdb4u;
    // NOP
label_31fdb8:
    // 0x31fdb8: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x31fdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x31fdbc: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x31fdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x31fdc0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31fdc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31fdc4: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x31fdc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_31fdc8:
    // 0x31fdc8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31fdc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31fdcc: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x31fdccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31fdd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31fdd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fdd4: 0x70452b89  pcpyld      $a1, $v0, $a1
    ctx->pc = 0x31fdd4u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x31fdd8: 0x7ce50000  sq          $a1, 0x0($a3)
    ctx->pc = 0x31fdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 5));
    // 0x31fddc: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x31fddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x31fde0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x31fde0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31fde4: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x31fde4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x31fde8: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x31fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x31fdec: 0xe41824  and         $v1, $a3, $a0
    ctx->pc = 0x31fdecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x31fdf0: 0x24e80010  addiu       $t0, $a3, 0x10
    ctx->pc = 0x31fdf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x31fdf4: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31FDF4u;
    {
        const bool branch_taken_0x31fdf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x31FDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FDF4u;
        // 0x31fdf8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fdf4) {
            ctx->pc = 0x31FE10u;
            goto label_31fe10;
        }
    }
    ctx->pc = 0x31FDFCu;
    // 0x31fdfc: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x31fdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x31fe00: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31fe00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31fe04: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31FE04u;
    {
        const bool branch_taken_0x31fe04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE04u;
        // 0x31fe08: 0xe21025  or          $v0, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fe04) {
            ctx->pc = 0x31FE20u;
            goto label_31fe20;
        }
    }
    ctx->pc = 0x31FE0Cu;
    // 0x31fe0c: 0x0  nop
    ctx->pc = 0x31fe0cu;
    // NOP
label_31fe10:
    // 0x31fe10: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x31fe10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x31fe14: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31fe14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31fe18: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31fe18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31fe1c: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x31fe1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_31fe20:
    // 0x31fe20: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31fe20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31fe24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31fe24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31fe28: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x31fe28u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x31fe2c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x31fe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x31fe30: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x31fe30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x31fe34: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x31fe34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x31fe38: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31FE38u;
    {
        const bool branch_taken_0x31fe38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x31fe38) {
            ctx->pc = 0x31FE3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FE38u;
            // 0x31fe3c: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FE50u;
            goto label_31fe50;
        }
    }
    ctx->pc = 0x31FE40u;
    // 0x31fe40: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x31fe40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x31fe44: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31fe44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31fe48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31FE48u;
    {
        const bool branch_taken_0x31fe48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE48u;
        // 0x31fe4c: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fe48) {
            ctx->pc = 0x31FE5Cu;
            goto label_31fe5c;
        }
    }
    ctx->pc = 0x31FE50u;
label_31fe50:
    // 0x31fe50: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31fe50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31fe54: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31fe54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31fe58: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x31fe58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_31fe5c:
    // 0x31fe5c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31fe5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31fe60: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x31fe60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31fe64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31fe64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fe68: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x31fe68u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x31fe6c: 0x7d030000  sq          $v1, 0x0($t0)
    ctx->pc = 0x31fe6cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 3));
    // 0x31fe70: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31FE70u;
    {
        const bool branch_taken_0x31fe70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE70u;
        // 0x31fe74: 0xacc80000  sw          $t0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fe70) {
            ctx->pc = 0x31FE88u;
            goto label_31fe88;
        }
    }
    ctx->pc = 0x31FE78u;
    // 0x31fe78: 0xde430000  ld          $v1, 0x0($s2)
    ctx->pc = 0x31fe78u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x31fe7c: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x31fe7cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31fe80: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x31fe80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x31fe84: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x31fe84u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_31fe88:
    // 0x31fe88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31fe88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31fe8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31fe8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31fe90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x31fe90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31fe94: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x31fe94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31fe98: 0x3e00008  jr          $ra
    ctx->pc = 0x31FE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE98u;
        // 0x31fe9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FE98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FEA0u;
    // 0x31fea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31fea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31fea4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31fea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31fea8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x31fea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31feac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31feacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x31feb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31feb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31feb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x31feb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x31feb8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x31feb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31febc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x31febcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x31fec0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x31fec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x31fec4: 0xc0c7e66  jal         func_31F998
    ctx->pc = 0x31FEC4u;
    SET_GPR_U32(ctx, 31, 0x31FECCu);
    ctx->pc = 0x31FEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FEC4u;
    // 0x31fec8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F998u, 0x31FEC4u, 0x31FECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FECCu;
label_31fecc:
    // 0x31fecc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x31feccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x31fed0: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x31fed0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x31fed4: 0x24630400  addiu       $v1, $v1, 0x400
    ctx->pc = 0x31fed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x31fed8: 0x2052024  and         $a0, $s0, $a1
    ctx->pc = 0x31fed8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & GPR_U64(ctx, 5));
    // 0x31fedc: 0x8c670014  lw          $a3, 0x14($v1)
    ctx->pc = 0x31fedcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x31fee0: 0x24e20020  addiu       $v0, $a3, 0x20
    ctx->pc = 0x31fee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x31fee4: 0x14850006  bne         $a0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31FEE4u;
    {
        const bool branch_taken_0x31fee4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x31FEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FEE4u;
        // 0x31fee8: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fee4) {
            ctx->pc = 0x31FF00u;
            goto label_31ff00;
        }
    }
    ctx->pc = 0x31FEECu;
    // 0x31feec: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x31feecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x31fef0: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x31fef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x31fef4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31FEF4u;
    {
        const bool branch_taken_0x31fef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FEF4u;
        // 0x31fef8: 0x2021025  or          $v0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fef4) {
            ctx->pc = 0x31FF10u;
            goto label_31ff10;
        }
    }
    ctx->pc = 0x31FEFCu;
    // 0x31fefc: 0x0  nop
    ctx->pc = 0x31fefcu;
    // NOP
label_31ff00:
    // 0x31ff00: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x31ff00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x31ff04: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x31ff04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x31ff08: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31ff08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31ff0c: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x31ff0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_31ff10:
    // 0x31ff10: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31ff10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31ff14: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x31ff14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31ff18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31ff18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ff1c: 0x70442389  pcpyld      $a0, $v0, $a0
    ctx->pc = 0x31ff1cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x31ff20: 0x7ce40000  sq          $a0, 0x0($a3)
    ctx->pc = 0x31ff20u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 4));
    // 0x31ff24: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x31ff24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x31ff28: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x31ff28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31ff2c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x31ff2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x31ff30: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x31ff30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x31ff34: 0xe41824  and         $v1, $a3, $a0
    ctx->pc = 0x31ff34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x31ff38: 0x24e80010  addiu       $t0, $a3, 0x10
    ctx->pc = 0x31ff38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x31ff3c: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31FF3Cu;
    {
        const bool branch_taken_0x31ff3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x31FF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF3Cu;
        // 0x31ff40: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ff3c) {
            ctx->pc = 0x31FF58u;
            goto label_31ff58;
        }
    }
    ctx->pc = 0x31FF44u;
    // 0x31ff44: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x31ff44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x31ff48: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31ff48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31ff4c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31FF4Cu;
    {
        const bool branch_taken_0x31ff4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF4Cu;
        // 0x31ff50: 0xe21025  or          $v0, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ff4c) {
            ctx->pc = 0x31FF68u;
            goto label_31ff68;
        }
    }
    ctx->pc = 0x31FF54u;
    // 0x31ff54: 0x0  nop
    ctx->pc = 0x31ff54u;
    // NOP
label_31ff58:
    // 0x31ff58: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x31ff58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x31ff5c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31ff5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31ff60: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31ff60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31ff64: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x31ff64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_31ff68:
    // 0x31ff68: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31ff68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31ff6c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31ff6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31ff70: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x31ff70u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x31ff74: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x31ff74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x31ff78: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x31ff78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x31ff7c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x31ff7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x31ff80: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31FF80u;
    {
        const bool branch_taken_0x31ff80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x31ff80) {
            ctx->pc = 0x31FF84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FF80u;
            // 0x31ff84: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FF98u;
            goto label_31ff98;
        }
    }
    ctx->pc = 0x31FF88u;
    // 0x31ff88: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x31ff88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x31ff8c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31ff8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31ff90: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31FF90u;
    {
        const bool branch_taken_0x31ff90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF90u;
        // 0x31ff94: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ff90) {
            ctx->pc = 0x31FFA4u;
            goto label_31ffa4;
        }
    }
    ctx->pc = 0x31FF98u;
label_31ff98:
    // 0x31ff98: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31ff98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31ff9c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31ff9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31ffa0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x31ffa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_31ffa4:
    // 0x31ffa4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31ffa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31ffa8: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x31ffa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31ffac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31ffacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ffb0: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x31ffb0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x31ffb4: 0x7d030000  sq          $v1, 0x0($t0)
    ctx->pc = 0x31ffb4u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 3));
    // 0x31ffb8: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x31FFB8u;
    {
        const bool branch_taken_0x31ffb8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FFB8u;
        // 0x31ffbc: 0xacc80000  sw          $t0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ffb8) {
            ctx->pc = 0x31FFD0u;
            goto label_31ffd0;
        }
    }
    ctx->pc = 0x31FFC0u;
    // 0x31ffc0: 0xde620038  ld          $v0, 0x38($s3)
    ctx->pc = 0x31ffc0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x31ffc4: 0xde230000  ld          $v1, 0x0($s1)
    ctx->pc = 0x31ffc4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31ffc8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31ffc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31ffcc: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x31ffccu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
label_31ffd0:
    // 0x31ffd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31ffd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ffd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31ffd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31ffd8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x31ffd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31ffdc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x31ffdcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31ffe0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31ffe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31ffe4: 0x3e00008  jr          $ra
    ctx->pc = 0x31FFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FFE4u;
        // 0x31ffe8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FFE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FFECu;
    // 0x31ffec: 0x0  nop
    ctx->pc = 0x31ffecu;
    // NOP
    ctx->pc = 0x31fff0u;
}
