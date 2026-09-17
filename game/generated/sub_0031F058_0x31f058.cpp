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

// Function: sub_0031F058
// Address: 0x31f058 - 0x31f0c0
void sub_0031F058_0x31f058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031F058_0x31f058");
#endif

    switch (ctx->pc) {
        case 0x31f06cu: goto label_31f06c;
        default: break;
    }

    ctx->pc = 0x31f058u;

    // 0x31f058: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31f058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31f05c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31f05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31f060: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x31f060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x31f064: 0xc0c7d6c  jal         func_31F5B0
    ctx->pc = 0x31F064u;
    SET_GPR_U32(ctx, 31, 0x31F06Cu);
    ctx->pc = 0x31F068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F064u;
    // 0x31f068: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F5B0u, 0x31F064u, 0x31F06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F06Cu;
label_31f06c:
    // 0x31f06c: 0x96020406  lhu         $v0, 0x406($s0)
    ctx->pc = 0x31f06cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1030)));
    // 0x31f070: 0x96050410  lhu         $a1, 0x410($s0)
    ctx->pc = 0x31f070u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1040)));
    // 0x31f074: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x31f074u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x31f078: 0x96030416  lhu         $v1, 0x416($s0)
    ctx->pc = 0x31f078u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1046)));
    // 0x31f07c: 0xa6020406  sh          $v0, 0x406($s0)
    ctx->pc = 0x31f07cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1030), (uint16_t)GPR_U32(ctx, 2));
    // 0x31f080: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x31f080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31f084: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x31f084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x31f088: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31f088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31f08c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x31f08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x31f090: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x31f090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31f094: 0x94440412  lhu         $a0, 0x412($v0)
    ctx->pc = 0x31f094u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 1042)));
    // 0x31f098: 0xa6030416  sh          $v1, 0x416($s0)
    ctx->pc = 0x31f098u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1046), (uint16_t)GPR_U32(ctx, 3));
    // 0x31f09c: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x31f09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x31f0a0: 0xa6050408  sh          $a1, 0x408($s0)
    ctx->pc = 0x31f0a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1032), (uint16_t)GPR_U32(ctx, 5));
    // 0x31f0a4: 0xa6020404  sh          $v0, 0x404($s0)
    ctx->pc = 0x31f0a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1028), (uint16_t)GPR_U32(ctx, 2));
    // 0x31f0a8: 0xa6040402  sh          $a0, 0x402($s0)
    ctx->pc = 0x31f0a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1026), (uint16_t)GPR_U32(ctx, 4));
    // 0x31f0ac: 0xa6000400  sh          $zero, 0x400($s0)
    ctx->pc = 0x31f0acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1024), (uint16_t)GPR_U32(ctx, 0));
    // 0x31f0b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31f0b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f0b4: 0x3e00008  jr          $ra
    ctx->pc = 0x31F0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F0B4u;
        // 0x31f0b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F0B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F0BCu;
    // 0x31f0bc: 0x0  nop
    ctx->pc = 0x31f0bcu;
    // NOP
    ctx->pc = 0x31f0c0u;
}
