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

// Function: sub_004B4600
// Address: 0x4b4600 - 0x4b4660
void sub_004B4600_0x4b4600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B4600_0x4b4600");
#endif

    ctx->pc = 0x4b4600u;

    // 0x4b4600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b4600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b4604: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b4604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b4608: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b4608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b460c: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4b460cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4b4610: 0x8c490d60  lw          $t1, 0xD60($v0)
    ctx->pc = 0x4b4610u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b4614: 0x24e70d3c  addiu       $a3, $a3, 0xD3C
    ctx->pc = 0x4b4614u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3388));
    // 0x4b4618: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4b4618u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0D3Cu));
    // 0x4b461c: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4b461cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4b4620: 0x85250136  lh          $a1, 0x136($t1)
    ctx->pc = 0x4b4620u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 310)));
    // 0x4b4624: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4b4624u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4b4628: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b4628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b462c: 0x24c60d40  addiu       $a2, $a2, 0xD40
    ctx->pc = 0x4b462cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3392));
    // 0x4b4630: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x4b4630u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x4b4634: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4b4634u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D40u));
    // 0x4b4638: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4b4638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4b463c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b463cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b4640: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4b4640u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4b4644: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b4644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b4648: 0x85220138  lh          $v0, 0x138($t1)
    ctx->pc = 0x4b4648u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 312)));
    // 0x4b464c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4b464cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4b4650: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b4650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b4654: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4b4654u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4b4658: 0x812d1b0  j           func_4B46C0
    ctx->pc = 0x4B4658u;
    ctx->pc = 0x4B465Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4658u;
    // 0x4b465c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B46C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B46C0u, 0x4B4658u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4B4660u;
}
