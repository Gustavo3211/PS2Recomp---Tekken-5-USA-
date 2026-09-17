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

// Function: sub_004AE530
// Address: 0x4ae530 - 0x4ae570
void sub_004AE530_0x4ae530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AE530_0x4ae530");
#endif

    switch (ctx->pc) {
        case 0x4ae558u: goto label_4ae558;
        default: break;
    }

    ctx->pc = 0x4ae530u;

    // 0x4ae530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ae530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ae534: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ae534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ae538: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ae538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae53c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4ae53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4ae540: 0x960201b4  lhu         $v0, 0x1B4($s0)
    ctx->pc = 0x4ae540u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x4ae544: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4ae544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4ae548: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AE548u;
    {
        const bool branch_taken_0x4ae548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ae548) {
            ctx->pc = 0x4AE54Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AE548u;
            // 0x4ae54c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AE55Cu;
            goto label_4ae55c;
        }
    }
    ctx->pc = 0x4AE550u;
    // 0x4ae550: 0xc12b95c  jal         func_4AE570
    ctx->pc = 0x4AE550u;
    SET_GPR_U32(ctx, 31, 0x4AE558u);
    ctx->pc = 0x4AE570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE570u, 0x4AE550u, 0x4AE558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE558u;
label_4ae558:
    // 0x4ae558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ae558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ae55c:
    // 0x4ae55c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ae55cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ae560: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4ae560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ae564: 0x812b9d0  j           func_4AE740
    ctx->pc = 0x4AE564u;
    ctx->pc = 0x4AE568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE564u;
    // 0x4ae568: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE740u;
    sub_004AE740_0x4ae740(rdram, ctx, runtime); return;
    ctx->pc = 0x4AE56Cu;
    // 0x4ae56c: 0x0  nop
    ctx->pc = 0x4ae56cu;
    // NOP
    ctx->pc = 0x4ae570u;
}
