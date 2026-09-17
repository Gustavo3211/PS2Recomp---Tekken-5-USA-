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

// Function: sub_004FEA98
// Address: 0x4fea98 - 0x4febb8
void sub_004FEA98_0x4fea98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FEA98_0x4fea98");
#endif

    switch (ctx->pc) {
        case 0x4feb6cu: goto label_4feb6c;
        case 0x4feba4u: goto label_4feba4;
        default: break;
    }

    ctx->pc = 0x4fea98u;

label_4fea98:
    // 0x4fea98: 0x24ab0002  addiu       $t3, $a1, 0x2
    ctx->pc = 0x4fea98u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x4fea9c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4fea9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4feaa0: 0x84870000  lh          $a3, 0x0($a0)
    ctx->pc = 0x4feaa0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4feaa4: 0x24ac0004  addiu       $t4, $a1, 0x4
    ctx->pc = 0x4feaa4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x4feaa8: 0x84890002  lh          $t1, 0x2($a0)
    ctx->pc = 0x4feaa8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x4feaac: 0x856a0000  lh          $t2, 0x0($t3)
    ctx->pc = 0x4feaacu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4feab0: 0xe23818  mult        $a3, $a3, $v0
    ctx->pc = 0x4feab0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x4feab4: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x4feab4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4feab8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x4feab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4feabc: 0x85880000  lh          $t0, 0x0($t4)
    ctx->pc = 0x4feabcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4feac0: 0x12a4818  mult        $t1, $t1, $t2
    ctx->pc = 0x4feac0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x4feac4: 0x70681818  mult1       $v1, $v1, $t0
    ctx->pc = 0x4feac4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4feac8: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x4feac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x4feacc: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x4feaccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x4fead0: 0x73b03  sra         $a3, $a3, 12
    ctx->pc = 0x4fead0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 12));
    // 0x4fead4: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x4fead4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x4fead8: 0x84a90000  lh          $t1, 0x0($a1)
    ctx->pc = 0x4fead8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4feadc: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x4feadcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x4feae0: 0x84880008  lh          $t0, 0x8($a0)
    ctx->pc = 0x4feae0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4feae4: 0x856a0000  lh          $t2, 0x0($t3)
    ctx->pc = 0x4feae4u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4feae8: 0x691818  mult        $v1, $v1, $t1
    ctx->pc = 0x4feae8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4feaec: 0x8487000a  lh          $a3, 0xA($a0)
    ctx->pc = 0x4feaecu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x4feaf0: 0x85890000  lh          $t1, 0x0($t4)
    ctx->pc = 0x4feaf0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4feaf4: 0x10a4018  mult        $t0, $t0, $t2
    ctx->pc = 0x4feaf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x4feaf8: 0x70e93818  mult1       $a3, $a3, $t1
    ctx->pc = 0x4feaf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x4feafc: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x4feafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x4feb00: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x4feb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4feb04: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x4feb04u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x4feb08: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x4feb08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x4feb0c: 0x84a80000  lh          $t0, 0x0($a1)
    ctx->pc = 0x4feb0cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4feb10: 0x8483000c  lh          $v1, 0xC($a0)
    ctx->pc = 0x4feb10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x4feb14: 0x8485000e  lh          $a1, 0xE($a0)
    ctx->pc = 0x4feb14u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x4feb18: 0x85690000  lh          $t1, 0x0($t3)
    ctx->pc = 0x4feb18u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4feb1c: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x4feb1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4feb20: 0x84870010  lh          $a3, 0x10($a0)
    ctx->pc = 0x4feb20u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4feb24: 0x85840000  lh          $a0, 0x0($t4)
    ctx->pc = 0x4feb24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4feb28: 0xa92818  mult        $a1, $a1, $t1
    ctx->pc = 0x4feb28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4feb2c: 0x70e43818  mult1       $a3, $a3, $a0
    ctx->pc = 0x4feb2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x4feb30: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4feb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4feb34: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x4feb34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4feb38: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x4feb38u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x4feb3c: 0x3e00008  jr          $ra
    ctx->pc = 0x4FEB3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FEB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FEB3Cu;
        // 0x4feb40: 0xacc30008  sw          $v1, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FEB3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FEB44u;
    // 0x4feb44: 0x0  nop
    ctx->pc = 0x4feb44u;
    // NOP
    // 0x4feb48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4feb48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4feb4c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x4feb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x4feb50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4feb50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4feb54: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4feb54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4feb58: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4feb58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4feb5c: 0x8c44cfa0  lw          $a0, -0x3060($v0)
    ctx->pc = 0x4feb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x56CFA0u));
    // 0x4feb60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4feb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4feb64: 0xc13faa6  jal         func_4FEA98
    ctx->pc = 0x4FEB64u;
    SET_GPR_U32(ctx, 31, 0x4FEB6Cu);
    ctx->pc = 0x4FEB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FEB64u;
    // 0x4feb68: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FEA98u;
    goto label_4fea98;
    ctx->pc = 0x4FEB6Cu;
label_4feb6c:
    // 0x4feb6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4feb6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4feb70: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4feb70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4feb74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4feb74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4feb78: 0x3e00008  jr          $ra
    ctx->pc = 0x4FEB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FEB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FEB78u;
        // 0x4feb7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FEB78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FEB80u;
    // 0x4feb80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4feb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4feb84: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x4feb84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x4feb88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4feb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4feb8c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4feb8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4feb90: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4feb90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4feb94: 0x8c44cfa0  lw          $a0, -0x3060($v0)
    ctx->pc = 0x4feb94u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x56CFA0u));
    // 0x4feb98: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4feb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4feb9c: 0xc13faee  jal         func_4FEBB8
    ctx->pc = 0x4FEB9Cu;
    SET_GPR_U32(ctx, 31, 0x4FEBA4u);
    ctx->pc = 0x4FEBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FEB9Cu;
    // 0x4feba0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FEBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FEBB8u, 0x4FEB9Cu, 0x4FEBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FEBA4u;
label_4feba4:
    // 0x4feba4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4feba4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4feba8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4feba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4febac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4febacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4febb0: 0x3e00008  jr          $ra
    ctx->pc = 0x4FEBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FEBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FEBB0u;
        // 0x4febb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FEBB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FEBB8u;
}
