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

// Function: sub_0024AD18
// Address: 0x24ad18 - 0x24ad90
void sub_0024AD18_0x24ad18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024AD18_0x24ad18");
#endif

    switch (ctx->pc) {
        case 0x24ad64u: goto label_24ad64;
        case 0x24ad74u: goto label_24ad74;
        default: break;
    }

    ctx->pc = 0x24ad18u;

    // 0x24ad18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24ad18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24ad1c: 0x2787c9e0  addiu       $a3, $gp, -0x3620
    ctx->pc = 0x24ad1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953440));
    // 0x24ad20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24ad20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24ad24: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x24ad24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ad28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24ad28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24ad2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24ad2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ad30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24ad30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24ad34: 0x6902b  sltu        $s2, $zero, $a2
    ctx->pc = 0x24ad34u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x24ad38: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x24ad38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x24ad3c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x24ad3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ad40: 0x86230012  lh          $v1, 0x12($s1)
    ctx->pc = 0x24ad40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x24ad44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24ad44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24ad48: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x24ad48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x24ad4c: 0xae230890  sw          $v1, 0x890($s1)
    ctx->pc = 0x24ad4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2192), GPR_U32(ctx, 3));
    // 0x24ad50: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x24ad50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x24ad54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24ad54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24ad58: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x24ad58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x24ad5c: 0xc092b06  jal         func_24AC18
    ctx->pc = 0x24AD5Cu;
    SET_GPR_U32(ctx, 31, 0x24AD64u);
    ctx->pc = 0x24AD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AD5Cu;
    // 0x24ad60: 0xae020890  sw          $v0, 0x890($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AC18u, 0x24AD5Cu, 0x24AD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AD64u;
label_24ad64:
    // 0x24ad64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24ad64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ad68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24ad68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ad6c: 0xc092b06  jal         func_24AC18
    ctx->pc = 0x24AD6Cu;
    SET_GPR_U32(ctx, 31, 0x24AD74u);
    ctx->pc = 0x24AD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AD6Cu;
    // 0x24ad70: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AC18u, 0x24AD6Cu, 0x24AD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AD74u;
label_24ad74:
    // 0x24ad74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24ad74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ad78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24ad78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24ad7c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24ad7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24ad80: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x24ad80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24ad84: 0x3e00008  jr          $ra
    ctx->pc = 0x24AD84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24AD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AD84u;
        // 0x24ad88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AD84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24AD8Cu;
    // 0x24ad8c: 0x0  nop
    ctx->pc = 0x24ad8cu;
    // NOP
    ctx->pc = 0x24ad90u;
}
