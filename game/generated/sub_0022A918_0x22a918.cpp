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

// Function: sub_0022A918
// Address: 0x22a918 - 0x22a9b8
void sub_0022A918_0x22a918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A918_0x22a918");
#endif

    switch (ctx->pc) {
        case 0x22a93cu: goto label_22a93c;
        case 0x22a944u: goto label_22a944;
        case 0x22a954u: goto label_22a954;
        case 0x22a964u: goto label_22a964;
        case 0x22a998u: goto label_22a998;
        case 0x22a9a0u: goto label_22a9a0;
        default: break;
    }

    ctx->pc = 0x22a918u;

    // 0x22a918: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22a918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22a91c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22a91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22a920: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22a920u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a924: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22a924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22a928: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22a928u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a92c: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x22A92Cu;
    {
        const bool branch_taken_0x22a92c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A92Cu;
        // 0x22a930: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a92c) {
            ctx->pc = 0x22A944u;
            goto label_22a944;
        }
    }
    ctx->pc = 0x22A934u;
    // 0x22a934: 0xc089c7c  jal         func_2271F0
    ctx->pc = 0x22A934u;
    SET_GPR_U32(ctx, 31, 0x22A93Cu);
    ctx->pc = 0x22A938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A934u;
    // 0x22a938: 0x82040008  lb          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2271F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2271F0u, 0x22A934u, 0x22A93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A93Cu;
label_22a93c:
    // 0x22a93c: 0xc0897c8  jal         func_225F20
    ctx->pc = 0x22A93Cu;
    SET_GPR_U32(ctx, 31, 0x22A944u);
    ctx->pc = 0x22A940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A93Cu;
    // 0x22a940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F20u, 0x22A93Cu, 0x22A944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A944u;
label_22a944:
    // 0x22a944: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x22a944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x22a948: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22a948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a94c: 0xc08eab4  jal         func_23AAD0
    ctx->pc = 0x22A94Cu;
    SET_GPR_U32(ctx, 31, 0x22A954u);
    ctx->pc = 0x22A950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A94Cu;
    // 0x22a950: 0x8c448880  lw          $a0, -0x7780($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AAD0u, 0x22A94Cu, 0x22A954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A954u;
label_22a954:
    // 0x22a954: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x22a954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x22a958: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x22a958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    // 0x22a95c: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x22A95Cu;
    SET_GPR_U32(ctx, 31, 0x22A964u);
    ctx->pc = 0x22A960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A95Cu;
    // 0x22a960: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x22A95Cu, 0x22A964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A964u;
label_22a964:
    // 0x22a964: 0x24450068  addiu       $a1, $v0, 0x68
    ctx->pc = 0x22a964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x22a968: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x22a968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22a96c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x22A96Cu;
    {
        const bool branch_taken_0x22a96c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a96c) {
            ctx->pc = 0x22A970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A96Cu;
            // 0x22a970: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A988u;
            goto label_22a988;
        }
    }
    ctx->pc = 0x22A974u;
    // 0x22a974: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x22a974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x22a978: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x22a978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x22a97c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22A97Cu;
    {
        const bool branch_taken_0x22a97c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22a97c) {
            ctx->pc = 0x22A990u;
            goto label_22a990;
        }
    }
    ctx->pc = 0x22A984u;
    // 0x22a984: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x22a984u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_22a988:
    // 0x22a988: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22a988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a98c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x22a98cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_22a990:
    // 0x22a990: 0xc0b83d4  jal         func_2E0F50
    ctx->pc = 0x22A990u;
    SET_GPR_U32(ctx, 31, 0x22A998u);
    ctx->pc = 0x2E0F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0F50u, 0x22A990u, 0x22A998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A998u;
label_22a998:
    // 0x22a998: 0xc0919d4  jal         func_246750
    ctx->pc = 0x22A998u;
    SET_GPR_U32(ctx, 31, 0x22A9A0u);
    ctx->pc = 0x22A99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A998u;
    // 0x22a99c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246750u, 0x22A998u, 0x22A9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A9A0u;
label_22a9a0:
    // 0x22a9a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22a9a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a9a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22a9a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22a9a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22a9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a9ac: 0x3e00008  jr          $ra
    ctx->pc = 0x22A9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A9ACu;
        // 0x22a9b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A9ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A9B4u;
    // 0x22a9b4: 0x0  nop
    ctx->pc = 0x22a9b4u;
    // NOP
    ctx->pc = 0x22a9b8u;
}
