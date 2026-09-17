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

// Function: sub_0049B6D0
// Address: 0x49b6d0 - 0x49b718
void sub_0049B6D0_0x49b6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049B6D0_0x49b6d0");
#endif

    switch (ctx->pc) {
        case 0x49b6fcu: goto label_49b6fc;
        case 0x49b704u: goto label_49b704;
        default: break;
    }

    ctx->pc = 0x49b6d0u;

    // 0x49b6d0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x49b6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x49b6d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49b6d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49b6d8: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x49b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x49b6dc: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x49b6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x49b6e0: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x49b6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x49b6e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x49b6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x49b6e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x49b6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x49b6ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49b6ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49b6f0: 0xa443232c  sh          $v1, 0x232C($v0)
    ctx->pc = 0x49b6f0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F9ACu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9ACu, _value); } while (0);
    // 0x49b6f4: 0xc13d788  jal         func_4F5E20
    ctx->pc = 0x49B6F4u;
    SET_GPR_U32(ctx, 31, 0x49B6FCu);
    ctx->pc = 0x49B6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B6F4u;
    // 0x49b6f8: 0xa44523c4  sh          $a1, 0x23C4($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 9156), (uint16_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5E20u, 0x49B6F4u, 0x49B6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49B6FCu;
label_49b6fc:
    // 0x49b6fc: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x49B6FCu;
    SET_GPR_U32(ctx, 31, 0x49B704u);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x49B6FCu, 0x49B704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49B704u;
label_49b704:
    // 0x49b704: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x49b704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49b708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49b708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49b70c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49b70cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49b710: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x49B710u;
    ctx->pc = 0x49B714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B710u;
    // 0x49b714: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x49B718u;
}
