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

// Function: sub_002FC910
// Address: 0x2fc910 - 0x2fc9f0
void sub_002FC910_0x2fc910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC910_0x2fc910");
#endif

    switch (ctx->pc) {
        case 0x2fc94cu: goto label_2fc94c;
        case 0x2fc970u: goto label_2fc970;
        case 0x2fc990u: goto label_2fc990;
        default: break;
    }

    ctx->pc = 0x2fc910u;

    // 0x2fc910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fc910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fc914: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fc914u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc918: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fc918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fc91c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2fc91cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc920: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fc920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fc924: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fc924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc928: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2fc928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2fc92c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2fc92cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc930: 0x12200028  beqz        $s1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2FC930u;
    {
        const bool branch_taken_0x2fc930 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC930u;
        // 0x2fc934: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc930) {
            ctx->pc = 0x2FC9D4u;
            goto label_2fc9d4;
        }
    }
    ctx->pc = 0x2FC938u;
    // 0x2fc938: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2fc938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2fc93c: 0x50800026  beql        $a0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x2FC93Cu;
    {
        const bool branch_taken_0x2fc93c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc93c) {
            ctx->pc = 0x2FC940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC93Cu;
            // 0x2fc940: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC9D8u;
            goto label_2fc9d8;
        }
    }
    ctx->pc = 0x2FC944u;
    // 0x2fc944: 0xc0bf462  jal         func_2FD188
    ctx->pc = 0x2FC944u;
    SET_GPR_U32(ctx, 31, 0x2FC94Cu);
    ctx->pc = 0x2FD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD188u, 0x2FC944u, 0x2FC94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC94Cu;
label_2fc94c:
    // 0x2fc94c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2fc94cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc950: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fc950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fc954: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2fc954u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2fc958: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2FC958u;
    {
        const bool branch_taken_0x2fc958 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC958u;
        // 0x2fc95c: 0xa603001c  sh          $v1, 0x1C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc958) {
            ctx->pc = 0x2FC9D4u;
            goto label_2fc9d4;
        }
    }
    ctx->pc = 0x2FC960u;
    // 0x2fc960: 0x9605001c  lhu         $a1, 0x1C($s0)
    ctx->pc = 0x2fc960u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2fc964: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fc964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc968: 0xc0be9b4  jal         func_2FA6D0
    ctx->pc = 0x2FC968u;
    SET_GPR_U32(ctx, 31, 0x2FC970u);
    ctx->pc = 0x2FC96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC968u;
    // 0x2fc96c: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA6D0u, 0x2FC968u, 0x2FC970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC970u;
label_2fc970:
    // 0x2fc970: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2fc970u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc974: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2FC974u;
    {
        const bool branch_taken_0x2fc974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC974u;
        // 0x2fc978: 0xae030020  sw          $v1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc974) {
            ctx->pc = 0x2FC9D4u;
            goto label_2fc9d4;
        }
    }
    ctx->pc = 0x2FC97Cu;
    // 0x2fc97c: 0x9605000e  lhu         $a1, 0xE($s0)
    ctx->pc = 0x2fc97cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x2fc980: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2FC980u;
    {
        const bool branch_taken_0x2fc980 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC980u;
        // 0x2fc984: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc980) {
            ctx->pc = 0x2FC9D0u;
            goto label_2fc9d0;
        }
    }
    ctx->pc = 0x2FC988u;
    // 0x2fc988: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2fc988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2fc98c: 0x0  nop
    ctx->pc = 0x2fc98cu;
    // NOP
label_2fc990:
    // 0x2fc990: 0x61180  sll         $v0, $a2, 6
    ctx->pc = 0x2fc990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x2fc994: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2fc994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2fc998: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x2fc998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2fc99c: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x2fc99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2fc9a0: 0x30420700  andi        $v0, $v0, 0x700
    ctx->pc = 0x2fc9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1792);
    // 0x2fc9a4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FC9A4u;
    {
        const bool branch_taken_0x2fc9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC9A4u;
        // 0x2fc9a8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc9a4) {
            ctx->pc = 0x2FC9C4u;
            goto label_2fc9c4;
        }
    }
    ctx->pc = 0x2FC9ACu;
    // 0x2fc9ac: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2fc9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2fc9b0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2fc9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2fc9b4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2fc9b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2fc9b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fc9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fc9bc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2fc9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2fc9c0: 0x9605000e  lhu         $a1, 0xE($s0)
    ctx->pc = 0x2fc9c0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_2fc9c4:
    // 0x2fc9c4: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x2fc9c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2fc9c8: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x2FC9C8u;
    {
        const bool branch_taken_0x2fc9c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc9c8) {
            ctx->pc = 0x2FC9CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC9C8u;
            // 0x2fc9cc: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fc990;
        }
    }
    ctx->pc = 0x2FC9D0u;
label_2fc9d0:
    // 0x2fc9d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fc9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fc9d4:
    // 0x2fc9d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fc9d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fc9d8:
    // 0x2fc9d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fc9d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fc9dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2fc9dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fc9e0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2fc9e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2fc9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC9E4u;
        // 0x2fc9e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC9ECu;
    // 0x2fc9ec: 0x0  nop
    ctx->pc = 0x2fc9ecu;
    // NOP
    ctx->pc = 0x2fc9f0u;
}
