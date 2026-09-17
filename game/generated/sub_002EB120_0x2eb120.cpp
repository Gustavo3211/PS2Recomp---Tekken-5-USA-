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

// Function: sub_002EB120
// Address: 0x2eb120 - 0x2eb1c0
void sub_002EB120_0x2eb120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EB120_0x2eb120");
#endif

    switch (ctx->pc) {
        case 0x2eb140u: goto label_2eb140;
        case 0x2eb158u: goto label_2eb158;
        case 0x2eb16cu: goto label_2eb16c;
        case 0x2eb1a8u: goto label_2eb1a8;
        default: break;
    }

    ctx->pc = 0x2eb120u;

    // 0x2eb120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2eb120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2eb124: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2eb124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2eb128: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2eb128u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb12c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2eb12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2eb130: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2eb130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2eb134: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2eb134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2eb138: 0xc0bb93e  jal         func_2EE4F8
    ctx->pc = 0x2EB138u;
    SET_GPR_U32(ctx, 31, 0x2EB140u);
    ctx->pc = 0x2EB13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB138u;
    // 0x2eb13c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F8u, 0x2EB138u, 0x2EB140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB140u;
label_2eb140:
    // 0x2eb140: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2eb140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2eb144: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eb144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb148: 0x2463f770  addiu       $v1, $v1, -0x890
    ctx->pc = 0x2eb148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965104));
    // 0x2eb14c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eb14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb150: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2EB150u;
    SET_GPR_U32(ctx, 31, 0x2EB158u);
    ctx->pc = 0x2EB154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB150u;
    // 0x2eb154: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2EB150u, 0x2EB158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB158u;
label_2eb158:
    // 0x2eb158: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2eb158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb15c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2eb15cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eb160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb164: 0xc0bab3a  jal         func_2EACE8
    ctx->pc = 0x2EB164u;
    SET_GPR_U32(ctx, 31, 0x2EB16Cu);
    ctx->pc = 0x2EB168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB164u;
    // 0x2eb168: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EACE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EACE8u, 0x2EB164u, 0x2EB16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB16Cu;
label_2eb16c:
    // 0x2eb16c: 0x262400f0  addiu       $a0, $s1, 0xF0
    ctx->pc = 0x2eb16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x2eb170: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2eb170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2eb174: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x2eb174u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x2eb178: 0x246306f8  addiu       $v1, $v1, 0x6F8
    ctx->pc = 0x2eb178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1784));
    // 0x2eb17c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2eb17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2eb180: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2eb180u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2eb184: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EB184u;
    {
        const bool branch_taken_0x2eb184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB184u;
        // 0x2eb188: 0xae230038  sw          $v1, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb184) {
            ctx->pc = 0x2EB1A8u;
            goto label_2eb1a8;
        }
    }
    ctx->pc = 0x2EB18Cu;
    // 0x2eb18c: 0x0  nop
    ctx->pc = 0x2eb18cu;
    // NOP
    // 0x2eb190: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2eb190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2eb194: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2eb194u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2eb198: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2eb198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2eb19c: 0x248405cc  addiu       $a0, $a0, 0x5CC
    ctx->pc = 0x2eb19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1484));
    // 0x2eb1a0: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2EB1A0u;
    SET_GPR_U32(ctx, 31, 0x2EB1A8u);
    ctx->pc = 0x2EB1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB1A0u;
    // 0x2eb1a4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2EB1A0u, 0x2EB1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB1A8u;
label_2eb1a8:
    // 0x2eb1a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2eb1a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eb1ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2eb1acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2eb1b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2eb1b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eb1b4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2eb1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2eb1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2EB1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EB1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB1B8u;
        // 0x2eb1bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EB1C0u;
}
