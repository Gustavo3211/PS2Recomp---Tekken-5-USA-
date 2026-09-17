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

// Function: sub_004B3910
// Address: 0x4b3910 - 0x4b3970
void sub_004B3910_0x4b3910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B3910_0x4b3910");
#endif

    ctx->pc = 0x4b3910u;

    // 0x4b3910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b3910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b3914: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b3914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b3918: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b3918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b391c: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4b391cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4b3920: 0x8c490d60  lw          $t1, 0xD60($v0)
    ctx->pc = 0x4b3920u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b3924: 0x24e70d3c  addiu       $a3, $a3, 0xD3C
    ctx->pc = 0x4b3924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3388));
    // 0x4b3928: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4b3928u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0D3Cu));
    // 0x4b392c: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4b392cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4b3930: 0x85250136  lh          $a1, 0x136($t1)
    ctx->pc = 0x4b3930u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 310)));
    // 0x4b3934: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4b3934u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4b3938: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b3938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b393c: 0x24c60d40  addiu       $a2, $a2, 0xD40
    ctx->pc = 0x4b393cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3392));
    // 0x4b3940: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x4b3940u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x4b3944: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4b3944u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D40u));
    // 0x4b3948: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4b3948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4b394c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b394cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b3950: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4b3950u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4b3954: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b3954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b3958: 0x85220138  lh          $v0, 0x138($t1)
    ctx->pc = 0x4b3958u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 312)));
    // 0x4b395c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4b395cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4b3960: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b3960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b3964: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4b3964u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4b3968: 0x812ce74  j           func_4B39D0
    ctx->pc = 0x4B3968u;
    ctx->pc = 0x4B396Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3968u;
    // 0x4b396c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B39D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B39D0u, 0x4B3968u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4B3970u;
}
