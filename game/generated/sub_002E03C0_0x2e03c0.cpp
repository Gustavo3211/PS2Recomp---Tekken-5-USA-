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

// Function: sub_002E03C0
// Address: 0x2e03c0 - 0x2e0440
void sub_002E03C0_0x2e03c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E03C0_0x2e03c0");
#endif

    ctx->pc = 0x2e03c0u;

    // 0x2e03c0: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x2e03c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2e03c4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2e03c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2e03c8: 0x8c89004c  lw          $t1, 0x4C($a0)
    ctx->pc = 0x2e03c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2e03cc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2e03ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e03d0: 0x90480149  lbu         $t0, 0x149($v0)
    ctx->pc = 0x2e03d0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 329)));
    // 0x2e03d4: 0x24e70118  addiu       $a3, $a3, 0x118
    ctx->pc = 0x2e03d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 280));
    // 0x2e03d8: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x2e03d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2e03dc: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2e03dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2e03e0: 0x128001a  div         $zero, $t1, $t0
    ctx->pc = 0x2e03e0u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2e03e4: 0x9086017a  lbu         $a2, 0x17A($a0)
    ctx->pc = 0x2e03e4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 378)));
    // 0x2e03e8: 0x1010  mfhi        $v0
    ctx->pc = 0x2e03e8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2e03ec: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2e03ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e03f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e03f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e03f4: 0x66302a  slt         $a2, $v1, $a2
    ctx->pc = 0x2e03f4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2e03f8: 0x6180a  movz        $v1, $zero, $a2
    ctx->pc = 0x2e03f8u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x2e03fc: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x2e03fcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e0400: 0x8ca60054  lw          $a2, 0x54($a1)
    ctx->pc = 0x2e0400u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x2e0404: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x2e0404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2e0408: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2e0408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e040c: 0x94820016  lhu         $v0, 0x16($a0)
    ctx->pc = 0x2e040cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x2e0410: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2e0410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x2e0414: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E0414u;
    {
        const bool branch_taken_0x2e0414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0414u;
        // 0x2e0418: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0414) {
            ctx->pc = 0x2E0434u;
            goto label_2e0434;
        }
    }
    ctx->pc = 0x2E041Cu;
    // 0x2e041c: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x2e041cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x2e0420: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x2e0420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2e0424: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0424u;
    {
        const bool branch_taken_0x2e0424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e0424) {
            ctx->pc = 0x2E0434u;
            goto label_2e0434;
        }
    }
    ctx->pc = 0x2E042Cu;
    // 0x2e042c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2e042cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2e0430: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2e0430u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_2e0434:
    // 0x2e0434: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E043Cu;
    // 0x2e043c: 0x0  nop
    ctx->pc = 0x2e043cu;
    // NOP
    ctx->pc = 0x2e0440u;
}
