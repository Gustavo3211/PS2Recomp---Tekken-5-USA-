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

// Function: sub_002499C0
// Address: 0x2499c0 - 0x249a00
void sub_002499C0_0x2499c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002499C0_0x2499c0");
#endif

    switch (ctx->pc) {
        case 0x2499e4u: goto label_2499e4;
        default: break;
    }

    ctx->pc = 0x2499c0u;

    // 0x2499c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2499c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2499c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2499c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2499c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2499c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2499cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2499ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2499d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2499d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2499d4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2499d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2499d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2499d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2499dc: 0xc0921b2  jal         func_2486C8
    ctx->pc = 0x2499DCu;
    SET_GPR_U32(ctx, 31, 0x2499E4u);
    ctx->pc = 0x2499E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2499DCu;
    // 0x2499e0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2486C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2486C8u, 0x2499DCu, 0x2499E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2499E4u;
label_2499e4:
    // 0x2499e4: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x2499e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2499e8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2499e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2499ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2499ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2499f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2499f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2499f4: 0x809241e  j           func_249078
    ctx->pc = 0x2499F4u;
    ctx->pc = 0x2499F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2499F4u;
    // 0x2499f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249078u;
    sub_00249078_0x249078(rdram, ctx, runtime); return;
    ctx->pc = 0x2499FCu;
    // 0x2499fc: 0x0  nop
    ctx->pc = 0x2499fcu;
    // NOP
    ctx->pc = 0x249a00u;
}
