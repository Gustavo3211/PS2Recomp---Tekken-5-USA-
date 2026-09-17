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

// Function: sub_00256410
// Address: 0x256410 - 0x256500
void sub_00256410_0x256410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256410_0x256410");
#endif

    switch (ctx->pc) {
        case 0x256430u: goto label_256430;
        case 0x256458u: goto label_256458;
        case 0x25646cu: goto label_25646c;
        case 0x25647cu: goto label_25647c;
        case 0x256498u: goto label_256498;
        case 0x2564acu: goto label_2564ac;
        case 0x2564c0u: goto label_2564c0;
        case 0x2564d4u: goto label_2564d4;
        case 0x2564e8u: goto label_2564e8;
        default: break;
    }

    ctx->pc = 0x256410u;

    // 0x256410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x256410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x256414: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x256414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x256418: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x256418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25641c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x25641cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x256420: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x256420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x256424: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x256424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x256428: 0xc0959fa  jal         func_2567E8
    ctx->pc = 0x256428u;
    SET_GPR_U32(ctx, 31, 0x256430u);
    ctx->pc = 0x25642Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256428u;
    // 0x25642c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2567E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2567E8u, 0x256428u, 0x256430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256430u;
label_256430:
    // 0x256430: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x256430u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x256434: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x256434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256438: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x256438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25643c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x25643cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x256440: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x256440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x256444: 0x3c110047  lui         $s1, 0x47
    ctx->pc = 0x256444u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)71 << 16));
    // 0x256448: 0x26311e98  addiu       $s1, $s1, 0x1E98
    ctx->pc = 0x256448u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7832));
    // 0x25644c: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x25644cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x256450: 0xc094e68  jal         func_2539A0
    ctx->pc = 0x256450u;
    SET_GPR_U32(ctx, 31, 0x256458u);
    ctx->pc = 0x256454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256450u;
    // 0x256454: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2539A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539A0u, 0x256450u, 0x256458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256458u;
label_256458:
    // 0x256458: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x256458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x25645c: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25645Cu;
    {
        const bool branch_taken_0x25645c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x256460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25645Cu;
        // 0x256460: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25645c) {
            ctx->pc = 0x25646Cu;
            goto label_25646c;
        }
    }
    ctx->pc = 0x256464u;
    // 0x256464: 0xc094e68  jal         func_2539A0
    ctx->pc = 0x256464u;
    SET_GPR_U32(ctx, 31, 0x25646Cu);
    ctx->pc = 0x256468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256464u;
    // 0x256468: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2539A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539A0u, 0x256464u, 0x25646Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25646Cu;
label_25646c:
    // 0x25646c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x25646cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x256470: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x256470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256474: 0xc094e68  jal         func_2539A0
    ctx->pc = 0x256474u;
    SET_GPR_U32(ctx, 31, 0x25647Cu);
    ctx->pc = 0x256478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256474u;
    // 0x256478: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2539A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539A0u, 0x256474u, 0x25647Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25647Cu;
label_25647c:
    // 0x25647c: 0x12400016  beqz        $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x25647Cu;
    {
        const bool branch_taken_0x25647c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x256480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25647Cu;
        // 0x256480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25647c) {
            ctx->pc = 0x2564D8u;
            goto label_2564d8;
        }
    }
    ctx->pc = 0x256484u;
    // 0x256484: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x256484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x256488: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x256488u;
    {
        const bool branch_taken_0x256488 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x25648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256488u;
        // 0x25648c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256488) {
            ctx->pc = 0x256498u;
            goto label_256498;
        }
    }
    ctx->pc = 0x256490u;
    // 0x256490: 0xc094e68  jal         func_2539A0
    ctx->pc = 0x256490u;
    SET_GPR_U32(ctx, 31, 0x256498u);
    ctx->pc = 0x256494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256490u;
    // 0x256494: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2539A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539A0u, 0x256490u, 0x256498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256498u;
label_256498:
    // 0x256498: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x256498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x25649c: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25649Cu;
    {
        const bool branch_taken_0x25649c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2564A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25649Cu;
        // 0x2564a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25649c) {
            ctx->pc = 0x2564ACu;
            goto label_2564ac;
        }
    }
    ctx->pc = 0x2564A4u;
    // 0x2564a4: 0xc094e68  jal         func_2539A0
    ctx->pc = 0x2564A4u;
    SET_GPR_U32(ctx, 31, 0x2564ACu);
    ctx->pc = 0x2564A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2564A4u;
    // 0x2564a8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2539A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539A0u, 0x2564A4u, 0x2564ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2564ACu;
label_2564ac:
    // 0x2564ac: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x2564acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2564b0: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2564B0u;
    {
        const bool branch_taken_0x2564b0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2564B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2564B0u;
        // 0x2564b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2564b0) {
            ctx->pc = 0x2564C0u;
            goto label_2564c0;
        }
    }
    ctx->pc = 0x2564B8u;
    // 0x2564b8: 0xc094e68  jal         func_2539A0
    ctx->pc = 0x2564B8u;
    SET_GPR_U32(ctx, 31, 0x2564C0u);
    ctx->pc = 0x2564BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2564B8u;
    // 0x2564bc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2539A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539A0u, 0x2564B8u, 0x2564C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2564C0u;
label_2564c0:
    // 0x2564c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2564c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2564c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2564c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2564c8: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2564c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2564cc: 0xc08f4d4  jal         func_23D350
    ctx->pc = 0x2564CCu;
    SET_GPR_U32(ctx, 31, 0x2564D4u);
    ctx->pc = 0x2564D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2564CCu;
    // 0x2564d0: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D350u, 0x2564CCu, 0x2564D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2564D4u;
label_2564d4:
    // 0x2564d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2564d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2564d8:
    // 0x2564d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2564d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2564dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2564dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2564e0: 0xc08f4d4  jal         func_23D350
    ctx->pc = 0x2564E0u;
    SET_GPR_U32(ctx, 31, 0x2564E8u);
    ctx->pc = 0x2564E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2564E0u;
    // 0x2564e4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D350u, 0x2564E0u, 0x2564E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2564E8u;
label_2564e8:
    // 0x2564e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2564e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2564ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2564ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2564f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2564f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2564f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2564f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2564f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2564F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2564FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2564F8u;
        // 0x2564fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2564F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256500u;
}
