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

// Function: sub_0048BEF8
// Address: 0x48bef8 - 0x48bf78
void sub_0048BEF8_0x48bef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048BEF8_0x48bef8");
#endif

    switch (ctx->pc) {
        case 0x48bf0cu: goto label_48bf0c;
        case 0x48bf1cu: goto label_48bf1c;
        case 0x48bf28u: goto label_48bf28;
        case 0x48bf38u: goto label_48bf38;
        case 0x48bf40u: goto label_48bf40;
        case 0x48bf48u: goto label_48bf48;
        case 0x48bf50u: goto label_48bf50;
        case 0x48bf5cu: goto label_48bf5c;
        default: break;
    }

    ctx->pc = 0x48bef8u;

    // 0x48bef8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48bef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48befc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x48befcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x48bf00: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x48bf00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x48bf04: 0xc1233c0  jal         func_48CF00
    ctx->pc = 0x48BF04u;
    SET_GPR_U32(ctx, 31, 0x48BF0Cu);
    ctx->pc = 0x48BF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48BF04u;
    // 0x48bf08: 0x3c100073  lui         $s0, 0x73 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF00u, 0x48BF04u, 0x48BF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BF0Cu;
label_48bf0c:
    // 0x48bf0c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x48bf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x48bf10: 0x2610d680  addiu       $s0, $s0, -0x2980
    ctx->pc = 0x48bf10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x48bf14: 0xc124910  jal         func_492440
    ctx->pc = 0x48BF14u;
    SET_GPR_U32(ctx, 31, 0x48BF1Cu);
    ctx->pc = 0x48BF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48BF14u;
    // 0x48bf18: 0x34840001  ori         $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x48BF14u, 0x48BF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BF1Cu;
label_48bf1c:
    // 0x48bf1c: 0x3c04001b  lui         $a0, 0x1B
    ctx->pc = 0x48bf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27 << 16));
    // 0x48bf20: 0xc124910  jal         func_492440
    ctx->pc = 0x48BF20u;
    SET_GPR_U32(ctx, 31, 0x48BF28u);
    ctx->pc = 0x48BF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48BF20u;
    // 0x48bf24: 0x34840001  ori         $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x48BF20u, 0x48BF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BF28u;
label_48bf28:
    // 0x48bf28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48bf2c: 0xa602220c  sh          $v0, 0x220C($s0)
    ctx->pc = 0x48bf2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8716), (uint16_t)GPR_U32(ctx, 2));
    // 0x48bf30: 0xc122d1c  jal         func_48B470
    ctx->pc = 0x48BF30u;
    SET_GPR_U32(ctx, 31, 0x48BF38u);
    ctx->pc = 0x48BF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48BF30u;
    // 0x48bf34: 0xa602220e  sh          $v0, 0x220E($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 8718), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B470u, 0x48BF30u, 0x48BF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BF38u;
label_48bf38:
    // 0x48bf38: 0xc124098  jal         func_490260
    ctx->pc = 0x48BF38u;
    SET_GPR_U32(ctx, 31, 0x48BF40u);
    ctx->pc = 0x48BF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48BF38u;
    // 0x48bf3c: 0xa6002268  sh          $zero, 0x2268($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 8808), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x490260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x490260u, 0x48BF38u, 0x48BF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BF40u;
label_48bf40:
    // 0x48bf40: 0xc127940  jal         func_49E500
    ctx->pc = 0x48BF40u;
    SET_GPR_U32(ctx, 31, 0x48BF48u);
    ctx->pc = 0x49E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49E500u, 0x48BF40u, 0x48BF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BF48u;
label_48bf48:
    // 0x48bf48: 0xc1232f6  jal         func_48CBD8
    ctx->pc = 0x48BF48u;
    SET_GPR_U32(ctx, 31, 0x48BF50u);
    ctx->pc = 0x48CBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBD8u, 0x48BF48u, 0x48BF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BF50u;
label_48bf50:
    // 0x48bf50: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x48bf50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x48bf54: 0xc12462c  jal         func_4918B0
    ctx->pc = 0x48BF54u;
    SET_GPR_U32(ctx, 31, 0x48BF5Cu);
    ctx->pc = 0x48BF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48BF54u;
    // 0x48bf58: 0xa443002c  sh          $v1, 0x2C($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 44), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4918B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4918B0u, 0x48BF54u, 0x48BF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BF5Cu;
label_48bf5c:
    // 0x48bf5c: 0x94430088  lhu         $v1, 0x88($v0)
    ctx->pc = 0x48bf5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x48bf60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x48bf60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48bf64: 0xa6002212  sh          $zero, 0x2212($s0)
    ctx->pc = 0x48bf64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8722), (uint16_t)GPR_U32(ctx, 0));
    // 0x48bf68: 0xa6032210  sh          $v1, 0x2210($s0)
    ctx->pc = 0x48bf68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8720), (uint16_t)GPR_U32(ctx, 3));
    // 0x48bf6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48bf6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48bf70: 0x812323c  j           func_48C8F0
    ctx->pc = 0x48BF70u;
    ctx->pc = 0x48BF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48BF70u;
    // 0x48bf74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48C8F0u;
    sub_0048C8F0_0x48c8f0(rdram, ctx, runtime); return;
    ctx->pc = 0x48BF78u;
}
