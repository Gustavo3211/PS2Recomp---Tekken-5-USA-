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

// Function: sub_002A2688
// Address: 0x2a2688 - 0x2a2734
void sub_002A2688_0x2a2688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2688_0x2a2688");
#endif

    switch (ctx->pc) {
        case 0x2a26a0u: goto label_2a26a0;
        case 0x2a26fcu: goto label_2a26fc;
        default: break;
    }

    ctx->pc = 0x2a2688u;

    // 0x2a2688: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a2688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a268c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a268cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a2690: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a2690u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2694: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a2694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a2698: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a2698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a269c: 0x8c91016c  lw          $s1, 0x16C($a0)
    ctx->pc = 0x2a269cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 364)));
label_2a26a0:
    // 0x2a26a0: 0x82220020  lb          $v0, 0x20($s1)
    ctx->pc = 0x2a26a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2a26a4: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x2a26a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x2a26a8: 0x2c43000f  sltiu       $v1, $v0, 0xF
    ctx->pc = 0x2a26a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x2a26ac: 0x50600022  beql        $v1, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x2A26ACu;
    {
        const bool branch_taken_0x2a26ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a26ac) {
            ctx->pc = 0x2A26B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A26ACu;
            // 0x2a26b0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2738u;
            return;
        }
    }
    ctx->pc = 0x2A26B4u;
    // 0x2a26b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a26b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a26b8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2a26b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2a26bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a26bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a26c0: 0x8c63d0c0  lw          $v1, -0x2F40($v1)
    ctx->pc = 0x2a26c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955200)));
    // 0x2a26c4: 0x600008  jr          $v1
    ctx->pc = 0x2A26C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A26D0u: goto label_2a26d0;
            case 0x2A2708u: goto label_2a2708;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A26C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2A26CCu;
    // 0x2a26cc: 0x0  nop
    ctx->pc = 0x2a26ccu;
    // NOP
label_2a26d0:
    // 0x2a26d0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2a26d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2a26d4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2a26d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2a26d8: 0x3c09003c  lui         $t1, 0x3C
    ctx->pc = 0x2a26d8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)60 << 16));
    // 0x2a26dc: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x2a26dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2a26e0: 0x8d29cca0  lw          $t1, -0x3360($t1)
    ctx->pc = 0x2a26e0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294954144)));
    // 0x2a26e4: 0x2484d050  addiu       $a0, $a0, -0x2FB0
    ctx->pc = 0x2a26e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955088));
    // 0x2a26e8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a26e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a26ec: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2a26ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a26f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a26f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a26f4: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A26F4u;
    SET_GPR_U32(ctx, 31, 0x2A26FCu);
    ctx->pc = 0x2A26F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A26F4u;
    // 0x2a26f8: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A26F4u, 0x2A26FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A26FCu;
label_2a26fc:
    // 0x2a26fc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2A26FCu;
    {
        const bool branch_taken_0x2a26fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A26FCu;
        // 0x2a2700: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a26fc) {
            ctx->pc = 0x2A2738u;
            return;
        }
    }
    ctx->pc = 0x2A2704u;
    // 0x2a2704: 0x0  nop
    ctx->pc = 0x2a2704u;
    // NOP
label_2a2708:
    // 0x2a2708: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2a2708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2a270c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2a270cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2a2710: 0x3c09003c  lui         $t1, 0x3C
    ctx->pc = 0x2a2710u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)60 << 16));
    // 0x2a2714: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x2a2714u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2a2718: 0x8d29cc98  lw          $t1, -0x3368($t1)
    ctx->pc = 0x2a2718u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294954136)));
    // 0x2a271c: 0x2484d050  addiu       $a0, $a0, -0x2FB0
    ctx->pc = 0x2a271cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955088));
    // 0x2a2720: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a2720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a2724: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2a2724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a2728: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a2728u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a272c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A272Cu;
    SET_GPR_U32(ctx, 31, 0x2A2734u);
    ctx->pc = 0x2A2730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A272Cu;
    // 0x2a2730: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A272Cu, 0x2A2734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2734u;
}
