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

// Function: sub_0049DD30
// Address: 0x49dd30 - 0x49de08
void sub_0049DD30_0x49dd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049DD30_0x49dd30");
#endif

    switch (ctx->pc) {
        case 0x49dd44u: goto label_49dd44;
        case 0x49ddd8u: goto label_49ddd8;
        case 0x49dde8u: goto label_49dde8;
        case 0x49ddf8u: goto label_49ddf8;
        default: break;
    }

    ctx->pc = 0x49dd30u;

    // 0x49dd30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49dd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49dd34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x49dd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x49dd38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x49dd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x49dd3c: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x49DD3Cu;
    SET_GPR_U32(ctx, 31, 0x49DD44u);
    ctx->pc = 0x49DD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49DD3Cu;
    // 0x49dd40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x49DD3Cu, 0x49DD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49DD44u;
label_49dd44:
    // 0x49dd44: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x49dd44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x49dd48: 0x8445000a  lh          $a1, 0xA($v0)
    ctx->pc = 0x49dd48u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x49dd4c: 0x24840b84  addiu       $a0, $a0, 0xB84
    ctx->pc = 0x49dd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2948));
    // 0x49dd50: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x49dd50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x49dd54: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x49dd54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0B84u));
    // 0x49dd58: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x49dd58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x49dd5c: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x49dd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x49dd60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49dd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49dd64: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49dd64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49dd68: 0xa4c2d738  sh          $v0, -0x28C8($a2)
    ctx->pc = 0x49dd68u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72D738u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D738u, _value); } while (0);
    // 0x49dd6c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x49dd6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x49dd70: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x49dd70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x49dd74: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x49dd74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49dd78: 0x2442d600  addiu       $v0, $v0, -0x2A00
    ctx->pc = 0x49dd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956544));
    // 0x49dd7c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x49DD7Cu;
    {
        const bool branch_taken_0x49dd7c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x49DD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DD7Cu;
        // 0x49dd80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dd7c) {
            ctx->pc = 0x49DD98u;
            goto label_49dd98;
        }
    }
    ctx->pc = 0x49DD84u;
    // 0x49dd84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49dd84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49dd88: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x49dd88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49dd8c: 0x8123392  j           func_48CE48
    ctx->pc = 0x49DD8Cu;
    ctx->pc = 0x49DD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49DD8Cu;
    // 0x49dd90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CE48u;
    sub_0048CE48_0x48ce48(rdram, ctx, runtime); return;
    ctx->pc = 0x49DD94u;
    // 0x49dd94: 0x0  nop
    ctx->pc = 0x49dd94u;
    // NOP
label_49dd98:
    // 0x49dd98: 0x8603000e  lh          $v1, 0xE($s0)
    ctx->pc = 0x49dd98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x49dd9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49dd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49dda0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x49DDA0u;
    {
        const bool branch_taken_0x49dda0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x49DDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DDA0u;
        // 0x49dda4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dda0) {
            ctx->pc = 0x49DDE0u;
            goto label_49dde0;
        }
    }
    ctx->pc = 0x49DDA8u;
    // 0x49dda8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x49DDA8u;
    {
        const bool branch_taken_0x49dda8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49dda8) {
            ctx->pc = 0x49DDACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49DDA8u;
            // 0x49ddac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49DDC0u;
            goto label_49ddc0;
        }
    }
    ctx->pc = 0x49DDB0u;
    // 0x49ddb0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x49DDB0u;
    {
        const bool branch_taken_0x49ddb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x49ddb0) {
            ctx->pc = 0x49DDD0u;
            goto label_49ddd0;
        }
    }
    ctx->pc = 0x49DDB8u;
    // 0x49ddb8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x49DDB8u;
    {
        const bool branch_taken_0x49ddb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DDB8u;
        // 0x49ddbc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ddb8) {
            ctx->pc = 0x49DDFCu;
            goto label_49ddfc;
        }
    }
    ctx->pc = 0x49DDC0u;
label_49ddc0:
    // 0x49ddc0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x49DDC0u;
    {
        const bool branch_taken_0x49ddc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x49ddc0) {
            ctx->pc = 0x49DDF0u;
            goto label_49ddf0;
        }
    }
    ctx->pc = 0x49DDC8u;
    // 0x49ddc8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x49DDC8u;
    {
        const bool branch_taken_0x49ddc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DDC8u;
        // 0x49ddcc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ddc8) {
            ctx->pc = 0x49DDFCu;
            goto label_49ddfc;
        }
    }
    ctx->pc = 0x49DDD0u;
label_49ddd0:
    // 0x49ddd0: 0xc1273a8  jal         func_49CEA0
    ctx->pc = 0x49DDD0u;
    SET_GPR_U32(ctx, 31, 0x49DDD8u);
    ctx->pc = 0x49DDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49DDD0u;
    // 0x49ddd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49CEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49CEA0u, 0x49DDD0u, 0x49DDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49DDD8u;
label_49ddd8:
    // 0x49ddd8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x49DDD8u;
    {
        const bool branch_taken_0x49ddd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DDD8u;
        // 0x49dddc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ddd8) {
            ctx->pc = 0x49DDFCu;
            goto label_49ddfc;
        }
    }
    ctx->pc = 0x49DDE0u;
label_49dde0:
    // 0x49dde0: 0xc12752c  jal         func_49D4B0
    ctx->pc = 0x49DDE0u;
    SET_GPR_U32(ctx, 31, 0x49DDE8u);
    ctx->pc = 0x49DDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49DDE0u;
    // 0x49dde4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49D4B0u, 0x49DDE0u, 0x49DDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49DDE8u;
label_49dde8:
    // 0x49dde8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x49DDE8u;
    {
        const bool branch_taken_0x49dde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DDE8u;
        // 0x49ddec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dde8) {
            ctx->pc = 0x49DDFCu;
            goto label_49ddfc;
        }
    }
    ctx->pc = 0x49DDF0u;
label_49ddf0:
    // 0x49ddf0: 0xc1273c6  jal         func_49CF18
    ctx->pc = 0x49DDF0u;
    SET_GPR_U32(ctx, 31, 0x49DDF8u);
    ctx->pc = 0x49DDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49DDF0u;
    // 0x49ddf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49CF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49CF18u, 0x49DDF0u, 0x49DDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49DDF8u;
label_49ddf8:
    // 0x49ddf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49ddf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49ddfc:
    // 0x49ddfc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x49ddfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49de00: 0x3e00008  jr          $ra
    ctx->pc = 0x49DE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49DE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DE00u;
        // 0x49de04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49DE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49DE08u;
}
