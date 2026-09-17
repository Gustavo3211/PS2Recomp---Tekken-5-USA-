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

// Function: sub_004B4570
// Address: 0x4b4570 - 0x4b4600
void sub_004B4570_0x4b4570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B4570_0x4b4570");
#endif

    ctx->pc = 0x4b4570u;

    // 0x4b4570: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b4570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b4574: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4b4574u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4b4578: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b4578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b457c: 0x25080d3c  addiu       $t0, $t0, 0xD3C
    ctx->pc = 0x4b457cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3388));
    // 0x4b4580: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x4b4580u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4584: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4b4584u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4b4588: 0x85420118  lh          $v0, 0x118($t2)
    ctx->pc = 0x4b4588u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 280)));
    // 0x4b458c: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4b458cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4b4590: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x4b4590u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0D3Cu));
    // 0x4b4594: 0x24e70d40  addiu       $a3, $a3, 0xD40
    ctx->pc = 0x4b4594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3392));
    // 0x4b4598: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4b4598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4b459c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4b459cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D40u));
    // 0x4b45a0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b45a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b45a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b45a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b45a8: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4b45a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4b45ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b45acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b45b0: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x4b45b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x4b45b4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b45b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b45b8: 0x8542011c  lh          $v0, 0x11C($t2)
    ctx->pc = 0x4b45b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 284)));
    // 0x4b45bc: 0x85050000  lh          $a1, 0x0($t0)
    ctx->pc = 0x4b45bcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b45c0: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4b45c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4b45c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b45c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b45c8: 0x52823  negu        $a1, $a1
    ctx->pc = 0x4b45c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x4b45cc: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4b45ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4b45d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b45d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b45d4: 0xa92825  or          $a1, $a1, $t1
    ctx->pc = 0x4b45d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x4b45d8: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4b45d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4b45dc: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x4b45dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x4b45e0: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x4b45e0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x4b45e4: 0x24428000  addiu       $v0, $v0, -0x8000
    ctx->pc = 0x4b45e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x4b45e8: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4b45e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4b45ec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b45ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b45f0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4b45f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4b45f4: 0x812d1b0  j           func_4B46C0
    ctx->pc = 0x4B45F4u;
    ctx->pc = 0x4B45F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B45F4u;
    // 0x4b45f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B46C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B46C0u, 0x4B45F4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4B45FCu;
    // 0x4b45fc: 0x0  nop
    ctx->pc = 0x4b45fcu;
    // NOP
    ctx->pc = 0x4b4600u;
}
