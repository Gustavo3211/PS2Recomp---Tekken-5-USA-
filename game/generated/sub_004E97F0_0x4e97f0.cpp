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

// Function: sub_004E97F0
// Address: 0x4e97f0 - 0x4e9888
void sub_004E97F0_0x4e97f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E97F0_0x4e97f0");
#endif

    switch (ctx->pc) {
        case 0x4e9840u: goto label_4e9840;
        case 0x4e985cu: goto label_4e985c;
        default: break;
    }

    ctx->pc = 0x4e97f0u;

    // 0x4e97f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e97f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4e97f4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4e97f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4e97f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e97f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e97fc: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4e97fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4e9800: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e9800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4e9804: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4e9804u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4e9808: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e9808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4e980c: 0x263111ec  addiu       $s1, $s1, 0x11EC
    ctx->pc = 0x4e980cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4588));
    // 0x4e9810: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x4e9810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x4e9814: 0x261011f4  addiu       $s0, $s0, 0x11F4
    ctx->pc = 0x4e9814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4596));
    // 0x4e9818: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4e9818u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F11ECu));
    // 0x4e981c: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x4e981cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x4e9820: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e9820u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7F11F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F11F4u, _value); } while (0);
    // 0x4e9824: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x4e9824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x4e9828: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e9828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e982c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4e982cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4e9830: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4e9830u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4e9834: 0x86060000  lh          $a2, 0x0($s0)
    ctx->pc = 0x4e9834u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e9838: 0xc123b78  jal         func_48EDE0
    ctx->pc = 0x4E9838u;
    SET_GPR_U32(ctx, 31, 0x4E9840u);
    ctx->pc = 0x4E983Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E9838u;
    // 0x4e983c: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48EDE0u, 0x4E9838u, 0x4E9840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E9840u;
label_4e9840:
    // 0x4e9840: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x4e9840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x4e9844: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4e9844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x4e9848: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x4e9848u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e984c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e984cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4e9850: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x4e9850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x4e9854: 0xc123b78  jal         func_48EDE0
    ctx->pc = 0x4E9854u;
    SET_GPR_U32(ctx, 31, 0x4E985Cu);
    ctx->pc = 0x4E9858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E9854u;
    // 0x4e9858: 0x86060000  lh          $a2, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48EDE0u, 0x4E9854u, 0x4E985Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E985Cu;
label_4e985c:
    // 0x4e985c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x4e985cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x4e9860: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4e9860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4e9864: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x4e9864u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e9868: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e9868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4e986c: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4e986cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4e9870: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e9870u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e9874: 0x86060000  lh          $a2, 0x0($s0)
    ctx->pc = 0x4e9874u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e9878: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e9878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e987c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e987cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e9880: 0x8123b78  j           func_48EDE0
    ctx->pc = 0x4E9880u;
    ctx->pc = 0x4E9884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E9880u;
    // 0x4e9884: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EDE0u;
    sub_0048EDE0_0x48ede0(rdram, ctx, runtime); return;
    ctx->pc = 0x4E9888u;
}
