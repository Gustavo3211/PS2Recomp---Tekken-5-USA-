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

// Function: sub_0024AE40
// Address: 0x24ae40 - 0x24ae98
void sub_0024AE40_0x24ae40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024AE40_0x24ae40");
#endif

    switch (ctx->pc) {
        case 0x24ae54u: goto label_24ae54;
        case 0x24ae84u: goto label_24ae84;
        default: break;
    }

    ctx->pc = 0x24ae40u;

    // 0x24ae40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24ae40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24ae44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24ae44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24ae48: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24ae48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24ae4c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x24AE4Cu;
    SET_GPR_U32(ctx, 31, 0x24AE54u);
    ctx->pc = 0x24AE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AE4Cu;
    // 0x24ae50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x24AE4Cu, 0x24AE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AE54u;
label_24ae54:
    // 0x24ae54: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x24ae54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x24ae58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24ae58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ae5c: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x24ae5cu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x24ae60: 0x1810  mfhi        $v1
    ctx->pc = 0x24ae60u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x24ae64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24ae64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24ae68: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x24ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x24ae6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24ae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24ae70: 0x8c421820  lw          $v0, 0x1820($v0)
    ctx->pc = 0x24ae70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6176)));
    // 0x24ae74: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24AE74u;
    {
        const bool branch_taken_0x24ae74 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x24AE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AE74u;
        // 0x24ae78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ae74) {
            ctx->pc = 0x24AE84u;
            goto label_24ae84;
        }
    }
    ctx->pc = 0x24AE7Cu;
    // 0x24ae7c: 0xc092a16  jal         func_24A858
    ctx->pc = 0x24AE7Cu;
    SET_GPR_U32(ctx, 31, 0x24AE84u);
    ctx->pc = 0x24A858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A858u, 0x24AE7Cu, 0x24AE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AE84u;
label_24ae84:
    // 0x24ae84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24ae84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ae88: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24ae88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24ae8c: 0x3e00008  jr          $ra
    ctx->pc = 0x24AE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24AE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AE8Cu;
        // 0x24ae90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24AE94u;
    // 0x24ae94: 0x0  nop
    ctx->pc = 0x24ae94u;
    // NOP
    ctx->pc = 0x24ae98u;
}
