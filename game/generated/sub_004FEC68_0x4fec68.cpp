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

// Function: sub_004FEC68
// Address: 0x4fec68 - 0x4fed60
void sub_004FEC68_0x4fec68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FEC68_0x4fec68");
#endif

    switch (ctx->pc) {
        case 0x4fed38u: goto label_4fed38;
        case 0x4fed48u: goto label_4fed48;
        default: break;
    }

    ctx->pc = 0x4fec68u;

    // 0x4fec68: 0x24ab0002  addiu       $t3, $a1, 0x2
    ctx->pc = 0x4fec68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x4fec6c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4fec6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4fec70: 0x84870000  lh          $a3, 0x0($a0)
    ctx->pc = 0x4fec70u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4fec74: 0x24ac0004  addiu       $t4, $a1, 0x4
    ctx->pc = 0x4fec74u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x4fec78: 0x84890002  lh          $t1, 0x2($a0)
    ctx->pc = 0x4fec78u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x4fec7c: 0x856a0000  lh          $t2, 0x0($t3)
    ctx->pc = 0x4fec7cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4fec80: 0xe23818  mult        $a3, $a3, $v0
    ctx->pc = 0x4fec80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x4fec84: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x4fec84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4fec88: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x4fec88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fec8c: 0x85880000  lh          $t0, 0x0($t4)
    ctx->pc = 0x4fec8cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4fec90: 0x12a4818  mult        $t1, $t1, $t2
    ctx->pc = 0x4fec90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x4fec94: 0x70681818  mult1       $v1, $v1, $t0
    ctx->pc = 0x4fec94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4fec98: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x4fec98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x4fec9c: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x4fec9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x4feca0: 0x73b03  sra         $a3, $a3, 12
    ctx->pc = 0x4feca0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 12));
    // 0x4feca4: 0xa4c70000  sh          $a3, 0x0($a2)
    ctx->pc = 0x4feca4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x4feca8: 0x84a90000  lh          $t1, 0x0($a1)
    ctx->pc = 0x4feca8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4fecac: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x4fecacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x4fecb0: 0x84880008  lh          $t0, 0x8($a0)
    ctx->pc = 0x4fecb0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4fecb4: 0x856a0000  lh          $t2, 0x0($t3)
    ctx->pc = 0x4fecb4u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4fecb8: 0x691818  mult        $v1, $v1, $t1
    ctx->pc = 0x4fecb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4fecbc: 0x8487000a  lh          $a3, 0xA($a0)
    ctx->pc = 0x4fecbcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x4fecc0: 0x85890000  lh          $t1, 0x0($t4)
    ctx->pc = 0x4fecc0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4fecc4: 0x10a4018  mult        $t0, $t0, $t2
    ctx->pc = 0x4fecc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x4fecc8: 0x70e93818  mult1       $a3, $a3, $t1
    ctx->pc = 0x4fecc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x4feccc: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x4fecccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x4fecd0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x4fecd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4fecd4: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x4fecd4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x4fecd8: 0xa4c30002  sh          $v1, 0x2($a2)
    ctx->pc = 0x4fecd8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x4fecdc: 0x84a80000  lh          $t0, 0x0($a1)
    ctx->pc = 0x4fecdcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4fece0: 0x8483000c  lh          $v1, 0xC($a0)
    ctx->pc = 0x4fece0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x4fece4: 0x8485000e  lh          $a1, 0xE($a0)
    ctx->pc = 0x4fece4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x4fece8: 0x85690000  lh          $t1, 0x0($t3)
    ctx->pc = 0x4fece8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4fecec: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x4fececu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4fecf0: 0x84870010  lh          $a3, 0x10($a0)
    ctx->pc = 0x4fecf0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4fecf4: 0x85840000  lh          $a0, 0x0($t4)
    ctx->pc = 0x4fecf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4fecf8: 0xa92818  mult        $a1, $a1, $t1
    ctx->pc = 0x4fecf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4fecfc: 0x70e43818  mult1       $a3, $a3, $a0
    ctx->pc = 0x4fecfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x4fed00: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4fed00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4fed04: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x4fed04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4fed08: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x4fed08u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x4fed0c: 0x3e00008  jr          $ra
    ctx->pc = 0x4FED0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FED10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FED0Cu;
        // 0x4fed10: 0xa4c30004  sh          $v1, 0x4($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FED0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FED14u;
    // 0x4fed14: 0x0  nop
    ctx->pc = 0x4fed14u;
    // NOP
    // 0x4fed18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4fed18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4fed1c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x4fed1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x4fed20: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4fed20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fed24: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4fed24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fed28: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x4fed28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x4fed2c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4fed2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4fed30: 0xc13fe60  jal         func_4FF980
    ctx->pc = 0x4FED30u;
    SET_GPR_U32(ctx, 31, 0x4FED38u);
    ctx->pc = 0x4FED34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FED30u;
    // 0x4fed34: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FF980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FF980u, 0x4FED30u, 0x4FED38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FED38u;
label_4fed38:
    // 0x4fed38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4fed38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fed3c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4fed3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fed40: 0xc13faee  jal         func_4FEBB8
    ctx->pc = 0x4FED40u;
    SET_GPR_U32(ctx, 31, 0x4FED48u);
    ctx->pc = 0x4FED44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FED40u;
    // 0x4fed44: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FEBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FEBB8u, 0x4FED40u, 0x4FED48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FED48u;
label_4fed48:
    // 0x4fed48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4fed48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fed4c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x4fed4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4fed50: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4fed50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4fed54: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4fed54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4fed58: 0x3e00008  jr          $ra
    ctx->pc = 0x4FED58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FED58u;
        // 0x4fed5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FED58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FED60u;
}
