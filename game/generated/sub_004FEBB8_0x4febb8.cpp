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

// Function: sub_004FEBB8
// Address: 0x4febb8 - 0x4fec68
void sub_004FEBB8_0x4febb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FEBB8_0x4febb8");
#endif

    ctx->pc = 0x4febb8u;

    // 0x4febb8: 0x24ab0004  addiu       $t3, $a1, 0x4
    ctx->pc = 0x4febb8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x4febbc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4febbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4febc0: 0x84870000  lh          $a3, 0x0($a0)
    ctx->pc = 0x4febc0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4febc4: 0x24ac0008  addiu       $t4, $a1, 0x8
    ctx->pc = 0x4febc4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x4febc8: 0x84890002  lh          $t1, 0x2($a0)
    ctx->pc = 0x4febc8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x4febcc: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x4febccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4febd0: 0xe23818  mult        $a3, $a3, $v0
    ctx->pc = 0x4febd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x4febd4: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x4febd4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4febd8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x4febd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4febdc: 0x8d880000  lw          $t0, 0x0($t4)
    ctx->pc = 0x4febdcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4febe0: 0x12a4818  mult        $t1, $t1, $t2
    ctx->pc = 0x4febe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x4febe4: 0x70681818  mult1       $v1, $v1, $t0
    ctx->pc = 0x4febe4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4febe8: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x4febe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x4febec: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x4febecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x4febf0: 0x73b03  sra         $a3, $a3, 12
    ctx->pc = 0x4febf0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 12));
    // 0x4febf4: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x4febf4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x4febf8: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x4febf8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4febfc: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x4febfcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x4fec00: 0x84880008  lh          $t0, 0x8($a0)
    ctx->pc = 0x4fec00u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4fec04: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x4fec04u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4fec08: 0x691818  mult        $v1, $v1, $t1
    ctx->pc = 0x4fec08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4fec0c: 0x8487000a  lh          $a3, 0xA($a0)
    ctx->pc = 0x4fec0cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x4fec10: 0x8d890000  lw          $t1, 0x0($t4)
    ctx->pc = 0x4fec10u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4fec14: 0x10a4018  mult        $t0, $t0, $t2
    ctx->pc = 0x4fec14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x4fec18: 0x70e93818  mult1       $a3, $a3, $t1
    ctx->pc = 0x4fec18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x4fec1c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x4fec1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x4fec20: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x4fec20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4fec24: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x4fec24u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x4fec28: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x4fec28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x4fec2c: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x4fec2cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4fec30: 0x8483000c  lh          $v1, 0xC($a0)
    ctx->pc = 0x4fec30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x4fec34: 0x8485000e  lh          $a1, 0xE($a0)
    ctx->pc = 0x4fec34u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x4fec38: 0x8d690000  lw          $t1, 0x0($t3)
    ctx->pc = 0x4fec38u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4fec3c: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x4fec3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4fec40: 0x84870010  lh          $a3, 0x10($a0)
    ctx->pc = 0x4fec40u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4fec44: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x4fec44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4fec48: 0xa92818  mult        $a1, $a1, $t1
    ctx->pc = 0x4fec48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4fec4c: 0x70e43818  mult1       $a3, $a3, $a0
    ctx->pc = 0x4fec4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x4fec50: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4fec50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4fec54: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x4fec54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4fec58: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x4fec58u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x4fec5c: 0x3e00008  jr          $ra
    ctx->pc = 0x4FEC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FEC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FEC5Cu;
        // 0x4fec60: 0xacc30008  sw          $v1, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FEC5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FEC64u;
    // 0x4fec64: 0x0  nop
    ctx->pc = 0x4fec64u;
    // NOP
    ctx->pc = 0x4fec68u;
}
