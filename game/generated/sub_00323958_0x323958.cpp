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

// Function: sub_00323958
// Address: 0x323958 - 0x3239e0
void sub_00323958_0x323958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323958_0x323958");
#endif

    switch (ctx->pc) {
        case 0x323958u: goto label_323958;
        case 0x32395cu: goto label_32395c;
        case 0x323960u: goto label_323960;
        case 0x323964u: goto label_323964;
        case 0x323968u: goto label_323968;
        case 0x32396cu: goto label_32396c;
        case 0x323970u: goto label_323970;
        case 0x323974u: goto label_323974;
        case 0x323978u: goto label_323978;
        case 0x32397cu: goto label_32397c;
        case 0x323980u: goto label_323980;
        case 0x323984u: goto label_323984;
        case 0x323988u: goto label_323988;
        case 0x32398cu: goto label_32398c;
        case 0x323990u: goto label_323990;
        case 0x323994u: goto label_323994;
        case 0x323998u: goto label_323998;
        case 0x32399cu: goto label_32399c;
        case 0x3239a0u: goto label_3239a0;
        case 0x3239a4u: goto label_3239a4;
        case 0x3239a8u: goto label_3239a8;
        case 0x3239acu: goto label_3239ac;
        case 0x3239b0u: goto label_3239b0;
        case 0x3239b4u: goto label_3239b4;
        case 0x3239b8u: goto label_3239b8;
        case 0x3239bcu: goto label_3239bc;
        case 0x3239c0u: goto label_3239c0;
        case 0x3239c4u: goto label_3239c4;
        case 0x3239c8u: goto label_3239c8;
        case 0x3239ccu: goto label_3239cc;
        case 0x3239d0u: goto label_3239d0;
        case 0x3239d4u: goto label_3239d4;
        case 0x3239d8u: goto label_3239d8;
        case 0x3239dcu: goto label_3239dc;
        default: break;
    }

    ctx->pc = 0x323958u;

label_323958:
    // 0x323958: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x323958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_32395c:
    // 0x32395c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32395cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_323960:
    // 0x323960: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x323960u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_323964:
    // 0x323964: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x323964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_323968:
    // 0x323968: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x323968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32396c:
    // 0x32396c: 0x261008c0  addiu       $s0, $s0, 0x8C0
    ctx->pc = 0x32396cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2240));
label_323970:
    // 0x323970: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x323970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_323974:
    // 0x323974: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_323978:
    // 0x323978: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x323978u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_32397c:
    // 0x32397c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x32397cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_323980:
    // 0x323980: 0xc0cb224  jal         func_32C890
label_323984:
    if (ctx->pc == 0x323984u) {
        ctx->pc = 0x323984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323980u;
        // 0x323984: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323988u;
        goto label_323988;
    }
    ctx->pc = 0x323980u;
    SET_GPR_U32(ctx, 31, 0x323988u);
    ctx->pc = 0x323984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323980u;
    // 0x323984: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C890u, 0x323980u, 0x323988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323988u;
label_323988:
    // 0x323988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32398c:
    // 0x32398c: 0xc0cb224  jal         func_32C890
label_323990:
    if (ctx->pc == 0x323990u) {
        ctx->pc = 0x323990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32398Cu;
        // 0x323990: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323994u;
        goto label_323994;
    }
    ctx->pc = 0x32398Cu;
    SET_GPR_U32(ctx, 31, 0x323994u);
    ctx->pc = 0x323990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32398Cu;
    // 0x323990: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C890u, 0x32398Cu, 0x323994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323994u;
label_323994:
    // 0x323994: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x323994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_323998:
    // 0x323998: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x323998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32399c:
    // 0x32399c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_3239a0:
    if (ctx->pc == 0x3239A0u) {
        ctx->pc = 0x3239A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32399Cu;
        // 0x3239a0: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3239A4u;
        goto label_3239a4;
    }
    ctx->pc = 0x32399Cu;
    {
        const bool branch_taken_0x32399c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3239A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32399Cu;
        // 0x3239a0: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32399c) {
            ctx->pc = 0x3239C8u;
            goto label_3239c8;
        }
    }
    ctx->pc = 0x3239A4u;
label_3239a4:
    // 0x3239a4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x3239a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3239a8:
    // 0x3239a8: 0x34430100  ori         $v1, $v0, 0x100
    ctx->pc = 0x3239a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_3239ac:
    // 0x3239ac: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x3239acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
label_3239b0:
    // 0x3239b0: 0x50460001  beql        $v0, $a2, . + 4 + (0x1 << 2)
label_3239b4:
    if (ctx->pc == 0x3239B4u) {
        ctx->pc = 0x3239B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3239B0u;
        // 0x3239b4: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3239B8u;
        goto label_3239b8;
    }
    ctx->pc = 0x3239B0u;
    {
        const bool branch_taken_0x3239b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x3239b0) {
            ctx->pc = 0x3239B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3239B0u;
            // 0x3239b4: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3239B8u;
            goto label_3239b8;
        }
    }
    ctx->pc = 0x3239B8u;
label_3239b8:
    // 0x3239b8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3239b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_3239bc:
    // 0x3239bc: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3239bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3239c0:
    // 0x3239c0: 0x40f809  jalr        $v0
label_3239c4:
    if (ctx->pc == 0x3239C4u) {
        ctx->pc = 0x3239C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3239C0u;
        // 0x3239c4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3239C8u;
        goto label_3239c8;
    }
    ctx->pc = 0x3239C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3239C8u);
        ctx->pc = 0x3239C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3239C0u;
        // 0x3239c4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3239C0u, 0x3239C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3239C8u;
label_3239c8:
    // 0x3239c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3239c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3239cc:
    // 0x3239cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3239ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3239d0:
    // 0x3239d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3239d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3239d4:
    // 0x3239d4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3239d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3239d8:
    // 0x3239d8: 0x3e00008  jr          $ra
label_3239dc:
    if (ctx->pc == 0x3239DCu) {
        ctx->pc = 0x3239DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3239D8u;
        // 0x3239dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3239E0u;
        goto label_fallthrough_0x3239d8;
    }
    ctx->pc = 0x3239D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3239DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3239D8u;
        // 0x3239dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3239D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3239d8:
    ctx->pc = 0x3239E0u;
}
