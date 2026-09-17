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

// Function: sub_002C9090
// Address: 0x2c9090 - 0x2c9118
void sub_002C9090_0x2c9090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9090_0x2c9090");
#endif

    switch (ctx->pc) {
        case 0x2c90b4u: goto label_2c90b4;
        case 0x2c90c0u: goto label_2c90c0;
        case 0x2c90ccu: goto label_2c90cc;
        case 0x2c9100u: goto label_2c9100;
        default: break;
    }

    ctx->pc = 0x2c9090u;

    // 0x2c9090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c9090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c9094: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c9094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c9098: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c9098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c909c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c909cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c90a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c90a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c90a4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C90A4u;
    {
        const bool branch_taken_0x2c90a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C90A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C90A4u;
        // 0x2c90a8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c90a4) {
            ctx->pc = 0x2C9100u;
            goto label_2c9100;
        }
    }
    ctx->pc = 0x2C90ACu;
    // 0x2c90ac: 0xc0b23a8  jal         func_2C8EA0
    ctx->pc = 0x2C90ACu;
    SET_GPR_U32(ctx, 31, 0x2C90B4u);
    ctx->pc = 0x2C8EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8EA0u, 0x2C90ACu, 0x2C90B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C90B4u;
label_2c90b4:
    // 0x2c90b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c90b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c90b8: 0xc0b240a  jal         func_2C9028
    ctx->pc = 0x2C90B8u;
    SET_GPR_U32(ctx, 31, 0x2C90C0u);
    ctx->pc = 0x2C90BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C90B8u;
    // 0x2c90bc: 0x26050028  addiu       $a1, $s0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9028u, 0x2C90B8u, 0x2C90C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C90C0u;
label_2c90c0:
    // 0x2c90c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c90c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c90c4: 0xc0b2378  jal         func_2C8DE0
    ctx->pc = 0x2C90C4u;
    SET_GPR_U32(ctx, 31, 0x2C90CCu);
    ctx->pc = 0x2C90C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C90C4u;
    // 0x2c90c8: 0x26050038  addiu       $a1, $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8DE0u, 0x2C90C4u, 0x2C90CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C90CCu;
label_2c90cc:
    // 0x2c90cc: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x2c90ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2c90d0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2c90d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2c90d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c90d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c90d8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2c90d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2c90dc: 0x512023  subu        $a0, $v0, $s1
    ctx->pc = 0x2c90dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2c90e0: 0x3c010018  lui         $at, 0x18
    ctx->pc = 0x2c90e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)24 << 16));
    // 0x2c90e4: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x2c90e4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x2c90e8: 0xac238dd8  sw          $v1, -0x7228($at)
    ctx->pc = 0x2c90e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938072), GPR_U32(ctx, 3));
    // 0x2c90ec: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2c90ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c90f0: 0x3c010018  lui         $at, 0x18
    ctx->pc = 0x2c90f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)24 << 16));
    // 0x2c90f4: 0x24218d10  addiu       $at, $at, -0x72F0
    ctx->pc = 0x2c90f4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294937872));
    // 0x2c90f8: 0xc0b244e  jal         func_2C9138
    ctx->pc = 0x2C90F8u;
    SET_GPR_U32(ctx, 31, 0x2C9100u);
    ctx->pc = 0x2C90FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C90F8u;
    // 0x2c90fc: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9138u, 0x2C90F8u, 0x2C9100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9100u;
label_2c9100:
    // 0x2c9100: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c9100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9104: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c9104u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c9108: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c9108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c910c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C910Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C910Cu;
        // 0x2c9110: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C910Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9114u;
    // 0x2c9114: 0x0  nop
    ctx->pc = 0x2c9114u;
    // NOP
    ctx->pc = 0x2c9118u;
}
