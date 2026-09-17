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

// Function: sub_00375130
// Address: 0x375130 - 0x3751e0
void sub_00375130_0x375130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375130_0x375130");
#endif

    switch (ctx->pc) {
        case 0x375130u: goto label_375130;
        case 0x375134u: goto label_375134;
        case 0x375138u: goto label_375138;
        case 0x37513cu: goto label_37513c;
        case 0x375140u: goto label_375140;
        case 0x375144u: goto label_375144;
        case 0x375148u: goto label_375148;
        case 0x37514cu: goto label_37514c;
        case 0x375150u: goto label_375150;
        case 0x375154u: goto label_375154;
        case 0x375158u: goto label_375158;
        case 0x37515cu: goto label_37515c;
        case 0x375160u: goto label_375160;
        case 0x375164u: goto label_375164;
        case 0x375168u: goto label_375168;
        case 0x37516cu: goto label_37516c;
        case 0x375170u: goto label_375170;
        case 0x375174u: goto label_375174;
        case 0x375178u: goto label_375178;
        case 0x37517cu: goto label_37517c;
        case 0x375180u: goto label_375180;
        case 0x375184u: goto label_375184;
        case 0x375188u: goto label_375188;
        case 0x37518cu: goto label_37518c;
        case 0x375190u: goto label_375190;
        case 0x375194u: goto label_375194;
        case 0x375198u: goto label_375198;
        case 0x37519cu: goto label_37519c;
        case 0x3751a0u: goto label_3751a0;
        case 0x3751a4u: goto label_3751a4;
        case 0x3751a8u: goto label_3751a8;
        case 0x3751acu: goto label_3751ac;
        case 0x3751b0u: goto label_3751b0;
        case 0x3751b4u: goto label_3751b4;
        case 0x3751b8u: goto label_3751b8;
        case 0x3751bcu: goto label_3751bc;
        case 0x3751c0u: goto label_3751c0;
        case 0x3751c4u: goto label_3751c4;
        case 0x3751c8u: goto label_3751c8;
        case 0x3751ccu: goto label_3751cc;
        case 0x3751d0u: goto label_3751d0;
        case 0x3751d4u: goto label_3751d4;
        case 0x3751d8u: goto label_3751d8;
        case 0x3751dcu: goto label_3751dc;
        default: break;
    }

    ctx->pc = 0x375130u;

label_375130:
    // 0x375130: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x375130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_375134:
    // 0x375134: 0x24421eb8  addiu       $v0, $v0, 0x1EB8
    ctx->pc = 0x375134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7864));
label_375138:
    // 0x375138: 0x3e00008  jr          $ra
label_37513c:
    if (ctx->pc == 0x37513Cu) {
        ctx->pc = 0x37513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375138u;
        // 0x37513c: 0xac820024  sw          $v0, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375140u;
        goto label_375140;
    }
    ctx->pc = 0x375138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375138u;
        // 0x37513c: 0xac820024  sw          $v0, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375140u;
label_375140:
    // 0x375140: 0x3e00008  jr          $ra
label_375144:
    if (ctx->pc == 0x375144u) {
        ctx->pc = 0x375148u;
        goto label_375148;
    }
    ctx->pc = 0x375140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375148u;
label_375148:
    // 0x375148: 0x3e00008  jr          $ra
label_37514c:
    if (ctx->pc == 0x37514Cu) {
        ctx->pc = 0x375150u;
        goto label_375150;
    }
    ctx->pc = 0x375148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375150u;
label_375150:
    // 0x375150: 0x3e00008  jr          $ra
label_375154:
    if (ctx->pc == 0x375154u) {
        ctx->pc = 0x375158u;
        goto label_375158;
    }
    ctx->pc = 0x375150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375158u;
label_375158:
    // 0x375158: 0x3e00008  jr          $ra
label_37515c:
    if (ctx->pc == 0x37515Cu) {
        ctx->pc = 0x37515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375158u;
        // 0x37515c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375160u;
        goto label_375160;
    }
    ctx->pc = 0x375158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375158u;
        // 0x37515c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375160u;
label_375160:
    // 0x375160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x375160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_375164:
    // 0x375164: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x375164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_375168:
    // 0x375168: 0x3c100044  lui         $s0, 0x44
    ctx->pc = 0x375168u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)68 << 16));
label_37516c:
    // 0x37516c: 0x2610f140  addiu       $s0, $s0, -0xEC0
    ctx->pc = 0x37516cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963520));
label_375170:
    // 0x375170: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x375170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_375174:
    // 0x375174: 0xc0d0b24  jal         func_342C90
label_375178:
    if (ctx->pc == 0x375178u) {
        ctx->pc = 0x375178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375174u;
        // 0x375178: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37517Cu;
        goto label_37517c;
    }
    ctx->pc = 0x375174u;
    SET_GPR_U32(ctx, 31, 0x37517Cu);
    ctx->pc = 0x375178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375174u;
    // 0x375178: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C90u, 0x375174u, 0x37517Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37517Cu;
label_37517c:
    // 0x37517c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x37517cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_375180:
    // 0x375180: 0x24631ed8  addiu       $v1, $v1, 0x1ED8
    ctx->pc = 0x375180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7896));
label_375184:
    // 0x375184: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x375184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_375188:
    // 0x375188: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x375188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
label_37518c:
    // 0x37518c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x37518cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_375190:
    // 0x375190: 0x3e00008  jr          $ra
label_375194:
    if (ctx->pc == 0x375194u) {
        ctx->pc = 0x375194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375190u;
        // 0x375194: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375198u;
        goto label_375198;
    }
    ctx->pc = 0x375190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375190u;
        // 0x375194: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375198u;
label_375198:
    // 0x375198: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x375198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_37519c:
    // 0x37519c: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x37519cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
label_3751a0:
    // 0x3751a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3751a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3751a4:
    // 0x3751a4: 0x2484f140  addiu       $a0, $a0, -0xEC0
    ctx->pc = 0x3751a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963520));
label_3751a8:
    // 0x3751a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3751a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3751ac:
    // 0x3751ac: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x3751acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_3751b0:
    // 0x3751b0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x3751b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_3751b4:
    // 0x3751b4: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3751b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3751b8:
    // 0x3751b8: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x3751b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3751bc:
    // 0x3751bc: 0xc0f809  jalr        $a2
label_3751c0:
    if (ctx->pc == 0x3751C0u) {
        ctx->pc = 0x3751C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3751BCu;
        // 0x3751c0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3751C4u;
        goto label_3751c4;
    }
    ctx->pc = 0x3751BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x3751C4u);
        ctx->pc = 0x3751C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3751BCu;
        // 0x3751c0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3751BCu, 0x3751C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3751C4u;
label_3751c4:
    // 0x3751c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3751c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3751c8:
    // 0x3751c8: 0x3e00008  jr          $ra
label_3751cc:
    if (ctx->pc == 0x3751CCu) {
        ctx->pc = 0x3751CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3751C8u;
        // 0x3751cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3751D0u;
        goto label_3751d0;
    }
    ctx->pc = 0x3751C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3751CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3751C8u;
        // 0x3751cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3751C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3751D0u;
label_3751d0:
    // 0x3751d0: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x3751d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_3751d4:
    // 0x3751d4: 0x3e00008  jr          $ra
label_3751d8:
    if (ctx->pc == 0x3751D8u) {
        ctx->pc = 0x3751D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3751D4u;
        // 0x3751d8: 0x2442f140  addiu       $v0, $v0, -0xEC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3751DCu;
        goto label_3751dc;
    }
    ctx->pc = 0x3751D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3751D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3751D4u;
        // 0x3751d8: 0x2442f140  addiu       $v0, $v0, -0xEC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963520));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3751D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3751DCu;
label_3751dc:
    // 0x3751dc: 0x0  nop
    ctx->pc = 0x3751dcu;
    // NOP
    ctx->pc = 0x3751e0u;
}
