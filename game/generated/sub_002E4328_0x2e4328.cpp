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

// Function: sub_002E4328
// Address: 0x2e4328 - 0x2e4410
void sub_002E4328_0x2e4328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4328_0x2e4328");
#endif

    switch (ctx->pc) {
        case 0x2e43e0u: goto label_2e43e0;
        case 0x2e43f8u: goto label_2e43f8;
        default: break;
    }

    ctx->pc = 0x2e4328u;

    // 0x2e4328: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e4328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e432c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e432cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e4330: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e4330u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4334: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e4334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e4338: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e4338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e433c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2e433cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2e4340: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x2e4340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x2e4344: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2E4344u;
    {
        const bool branch_taken_0x2e4344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4344u;
        // 0x2e4348: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4344) {
            ctx->pc = 0x2E43F8u;
            goto label_2e43f8;
        }
    }
    ctx->pc = 0x2E434Cu;
    // 0x2e434c: 0x5240002b  beql        $s2, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x2E434Cu;
    {
        const bool branch_taken_0x2e434c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e434c) {
            ctx->pc = 0x2E4350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E434Cu;
            // 0x2e4350: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E43FCu;
            goto label_2e43fc;
        }
    }
    ctx->pc = 0x2E4354u;
    // 0x2e4354: 0x8e420898  lw          $v0, 0x898($s2)
    ctx->pc = 0x2e4354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2200)));
    // 0x2e4358: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x2E4358u;
    {
        const bool branch_taken_0x2e4358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4358) {
            ctx->pc = 0x2E435Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4358u;
            // 0x2e435c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E43FCu;
            goto label_2e43fc;
        }
    }
    ctx->pc = 0x2E4360u;
    // 0x2e4360: 0x9443006e  lhu         $v1, 0x6E($v0)
    ctx->pc = 0x2e4360u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 110)));
    // 0x2e4364: 0x28620020  slti        $v0, $v1, 0x20
    ctx->pc = 0x2e4364u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2e4368: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x2E4368u;
    {
        const bool branch_taken_0x2e4368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4368) {
            ctx->pc = 0x2E436Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4368u;
            // 0x2e436c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E43FCu;
            goto label_2e43fc;
        }
    }
    ctx->pc = 0x2E4370u;
    // 0x2e4370: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2e4370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2e4374: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2e4374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2e4378: 0x24450060  addiu       $a1, $v0, 0x60
    ctx->pc = 0x2e4378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2e437c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2e437cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e4380: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E4380u;
    {
        const bool branch_taken_0x2e4380 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4380) {
            ctx->pc = 0x2E4384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4380u;
            // 0x2e4384: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E439Cu;
            goto label_2e439c;
        }
    }
    ctx->pc = 0x2E4388u;
    // 0x2e4388: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e4388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e438c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2e438cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e4390: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E4390u;
    {
        const bool branch_taken_0x2e4390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E4394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4390u;
        // 0x2e4394: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4390) {
            ctx->pc = 0x2E43A4u;
            goto label_2e43a4;
        }
    }
    ctx->pc = 0x2E4398u;
    // 0x2e4398: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2e4398u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2e439c:
    // 0x2e439c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e439cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e43a0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2e43a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2e43a4:
    // 0x2e43a4: 0x52000015  beql        $s0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2E43A4u;
    {
        const bool branch_taken_0x2e43a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e43a4) {
            ctx->pc = 0x2E43A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E43A4u;
            // 0x2e43a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E43FCu;
            goto label_2e43fc;
        }
    }
    ctx->pc = 0x2E43ACu;
    // 0x2e43ac: 0x8e4208a0  lw          $v0, 0x8A0($s2)
    ctx->pc = 0x2e43acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2208)));
    // 0x2e43b0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2E43B0u;
    {
        const bool branch_taken_0x2e43b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E43B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E43B0u;
        // 0x2e43b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e43b0) {
            ctx->pc = 0x2E43F0u;
            goto label_2e43f0;
        }
    }
    ctx->pc = 0x2E43B8u;
    // 0x2e43b8: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x2e43b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2e43bc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2e43bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2e43c0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E43C0u;
    {
        const bool branch_taken_0x2e43c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E43C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E43C0u;
        // 0x2e43c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e43c0) {
            ctx->pc = 0x2E43F0u;
            goto label_2e43f0;
        }
    }
    ctx->pc = 0x2E43C8u;
    // 0x2e43c8: 0x3c01c2c8  lui         $at, 0xC2C8
    ctx->pc = 0x2e43c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49864 << 16));
    // 0x2e43cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e43ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e43d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e43d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e43d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e43d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e43d8: 0xc0b79f8  jal         func_2DE7E0
    ctx->pc = 0x2E43D8u;
    SET_GPR_U32(ctx, 31, 0x2E43E0u);
    ctx->pc = 0x2E43DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E43D8u;
    // 0x2e43dc: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE7E0u, 0x2E43D8u, 0x2E43E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E43E0u;
label_2e43e0:
    // 0x2e43e0: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x2e43e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2e43e4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2e43e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2e43e8: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x2e43e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x2e43ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e43ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e43f0:
    // 0x2e43f0: 0xc0b91b6  jal         func_2E46D8
    ctx->pc = 0x2E43F0u;
    SET_GPR_U32(ctx, 31, 0x2E43F8u);
    ctx->pc = 0x2E43F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E43F0u;
    // 0x2e43f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E46D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E46D8u, 0x2E43F0u, 0x2E43F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E43F8u;
label_2e43f8:
    // 0x2e43f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e43f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e43fc:
    // 0x2e43fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e43fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e4400: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e4400u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4404: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2e4404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e4408: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4408u;
        // 0x2e440c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4410u;
}
