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

// Function: sub_0035F140
// Address: 0x35f140 - 0x35f1d0
void sub_0035F140_0x35f140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035F140_0x35f140");
#endif

    switch (ctx->pc) {
        case 0x35f174u: goto label_35f174;
        case 0x35f19cu: goto label_35f19c;
        default: break;
    }

    ctx->pc = 0x35f140u;

    // 0x35f140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35f140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35f144: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x35f144u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f148: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35f148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35f14c: 0x24030a01  addiu       $v1, $zero, 0xA01
    ctx->pc = 0x35f14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2561));
    // 0x35f150: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x35f150u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x35f154: 0x94e20004  lhu         $v0, 0x4($a3)
    ctx->pc = 0x35f154u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x35f158: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x35F158u;
    {
        const bool branch_taken_0x35f158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x35F15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F158u;
        // 0x35f15c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f158) {
            ctx->pc = 0x35F180u;
            goto label_35f180;
        }
    }
    ctx->pc = 0x35F160u;
    // 0x35f160: 0x90e60005  lbu         $a2, 0x5($a3)
    ctx->pc = 0x35f160u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x35f164: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35f164u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35f168: 0x90e50004  lbu         $a1, 0x4($a3)
    ctx->pc = 0x35f168u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x35f16c: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35F16Cu;
    SET_GPR_U32(ctx, 31, 0x35F174u);
    ctx->pc = 0x35F170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F16Cu;
    // 0x35f170: 0x24846808  addiu       $a0, $a0, 0x6808 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35F16Cu, 0x35F174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F174u;
label_35f174:
    // 0x35f174: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35f174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35f178: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x35F178u;
    {
        const bool branch_taken_0x35f178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F178u;
        // 0x35f17c: 0x3442001e  ori         $v0, $v0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f178) {
            ctx->pc = 0x35F1C0u;
            goto label_35f1c0;
        }
    }
    ctx->pc = 0x35F180u;
label_35f180:
    // 0x35f180: 0x94e20008  lhu         $v0, 0x8($a3)
    ctx->pc = 0x35f180u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x35f184: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x35f184u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35f188: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35F188u;
    {
        const bool branch_taken_0x35f188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35F18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F188u;
        // 0x35f18c: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f188) {
            ctx->pc = 0x35F1A8u;
            goto label_35f1a8;
        }
    }
    ctx->pc = 0x35F190u;
    // 0x35f190: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35f190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35f194: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35F194u;
    SET_GPR_U32(ctx, 31, 0x35F19Cu);
    ctx->pc = 0x35F198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F194u;
    // 0x35f198: 0x248467c8  addiu       $a0, $a0, 0x67C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35F194u, 0x35F19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F19Cu;
label_35f19c:
    // 0x35f19c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35f1a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x35F1A0u;
    {
        const bool branch_taken_0x35f1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F1A0u;
        // 0x35f1a4: 0x34420011  ori         $v0, $v0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f1a0) {
            ctx->pc = 0x35F1C0u;
            goto label_35f1c0;
        }
    }
    ctx->pc = 0x35F1A8u;
label_35f1a8:
    // 0x35f1a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35f1a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f1ac: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x35f1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x35f1b0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x35f1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x35f1b4: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x35f1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x35f1b8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x35f1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x35f1bc: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x35f1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_35f1c0:
    // 0x35f1c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35f1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f1c4: 0x3e00008  jr          $ra
    ctx->pc = 0x35F1C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F1C4u;
        // 0x35f1c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F1C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F1CCu;
    // 0x35f1cc: 0x0  nop
    ctx->pc = 0x35f1ccu;
    // NOP
    ctx->pc = 0x35f1d0u;
}
