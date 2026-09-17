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

// Function: sub_00247268
// Address: 0x247268 - 0x247358
void sub_00247268_0x247268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247268_0x247268");
#endif

    switch (ctx->pc) {
        case 0x2472c0u: goto label_2472c0;
        case 0x2472e8u: goto label_2472e8;
        case 0x247304u: goto label_247304;
        default: break;
    }

    ctx->pc = 0x247268u;

    // 0x247268: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x247268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24726c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24726cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x247270: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x247270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247274: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x247274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x247278: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x247278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x24727c: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x24727Cu;
    {
        const bool branch_taken_0x24727c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24727c) {
            ctx->pc = 0x247280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24727Cu;
            // 0x247280: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2472A8u;
            goto label_2472a8;
        }
    }
    ctx->pc = 0x247284u;
    // 0x247284: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x247284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x247288: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x247288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x24728c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x24728cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x247290: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x247290u;
    {
        const bool branch_taken_0x247290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x247290) {
            ctx->pc = 0x247294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247290u;
            // 0x247294: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2472A8u;
            goto label_2472a8;
        }
    }
    ctx->pc = 0x247298u;
    // 0x247298: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x247298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x24729c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24729cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2472a0: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x2472a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x2472a4: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2472a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_2472a8:
    // 0x2472a8: 0x10820017  beq         $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2472A8u;
    {
        const bool branch_taken_0x2472a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2472a8) {
            ctx->pc = 0x247308u;
            goto label_247308;
        }
    }
    ctx->pc = 0x2472B0u;
    // 0x2472b0: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2472B0u;
    {
        const bool branch_taken_0x2472b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2472b0) {
            ctx->pc = 0x2472E0u;
            goto label_2472e0;
        }
    }
    ctx->pc = 0x2472B8u;
    // 0x2472b8: 0xc091c76  jal         func_2471D8
    ctx->pc = 0x2472B8u;
    SET_GPR_U32(ctx, 31, 0x2472C0u);
    ctx->pc = 0x2472BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2472B8u;
    // 0x2472bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2471D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2471D8u, 0x2472B8u, 0x2472C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2472C0u;
label_2472c0:
    // 0x2472c0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2472c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2472c4: 0x86070002  lh          $a3, 0x2($s0)
    ctx->pc = 0x2472c4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2472c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2472c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2472cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2472ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2472d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2472d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2472d4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2472D4u;
    {
        const bool branch_taken_0x2472d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2472D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2472D4u;
        // 0x2472d8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2472d4) {
            ctx->pc = 0x2472FCu;
            goto label_2472fc;
        }
    }
    ctx->pc = 0x2472DCu;
    // 0x2472dc: 0x0  nop
    ctx->pc = 0x2472dcu;
    // NOP
label_2472e0:
    // 0x2472e0: 0xc091c8a  jal         func_247228
    ctx->pc = 0x2472E0u;
    SET_GPR_U32(ctx, 31, 0x2472E8u);
    ctx->pc = 0x2472E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2472E0u;
    // 0x2472e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247228u, 0x2472E0u, 0x2472E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2472E8u;
label_2472e8:
    // 0x2472e8: 0x86070002  lh          $a3, 0x2($s0)
    ctx->pc = 0x2472e8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2472ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2472ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2472f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2472f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2472f4: 0x24e70003  addiu       $a3, $a3, 0x3
    ctx->pc = 0x2472f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x2472f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2472f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2472fc:
    // 0x2472fc: 0xc09850e  jal         func_261438
    ctx->pc = 0x2472FCu;
    SET_GPR_U32(ctx, 31, 0x247304u);
    ctx->pc = 0x261438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261438u, 0x2472FCu, 0x247304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247304u;
label_247304:
    // 0x247304: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x247304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_247308:
    // 0x247308: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x247308u;
    {
        const bool branch_taken_0x247308 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247308u;
        // 0x24730c: 0xae040040  sw          $a0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247308) {
            ctx->pc = 0x247344u;
            goto label_247344;
        }
    }
    ctx->pc = 0x247310u;
    // 0x247310: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x247310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x247314: 0x8c6288ac  lw          $v0, -0x7754($v1)
    ctx->pc = 0x247314u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A88ACu));
    // 0x247318: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x247318u;
    {
        const bool branch_taken_0x247318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24731Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247318u;
        // 0x24731c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247318) {
            ctx->pc = 0x247330u;
            goto label_247330;
        }
    }
    ctx->pc = 0x247320u;
    // 0x247320: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x247320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x247324: 0x8c4323b4  lw          $v1, 0x23B4($v0)
    ctx->pc = 0x247324u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x247328: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x247328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x24732c: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x24732cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_247330:
    // 0x247330: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x247330u;
    {
        const bool branch_taken_0x247330 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x247330) {
            ctx->pc = 0x247334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247330u;
            // 0x247334: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247348u;
            goto label_247348;
        }
    }
    ctx->pc = 0x247338u;
    // 0x247338: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x247338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x24733c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24733cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x247340: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x247340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_247344:
    // 0x247344: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x247344u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_247348:
    // 0x247348: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x247348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24734c: 0x3e00008  jr          $ra
    ctx->pc = 0x24734Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24734Cu;
        // 0x247350: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24734Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247354u;
    // 0x247354: 0x0  nop
    ctx->pc = 0x247354u;
    // NOP
    ctx->pc = 0x247358u;
}
