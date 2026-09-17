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

// Function: sub_002D1B68
// Address: 0x2d1b68 - 0x2d1c78
void sub_002D1B68_0x2d1b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1B68_0x2d1b68");
#endif

    switch (ctx->pc) {
        case 0x2d1bc8u: goto label_2d1bc8;
        case 0x2d1bd0u: goto label_2d1bd0;
        default: break;
    }

    ctx->pc = 0x2d1b68u;

    // 0x2d1b68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d1b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d1b6c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2d1b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d1b70: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d1b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d1b74: 0x3c12003b  lui         $s2, 0x3B
    ctx->pc = 0x2d1b74u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)59 << 16));
    // 0x2d1b78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d1b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d1b7c: 0x26443370  addiu       $a0, $s2, 0x3370
    ctx->pc = 0x2d1b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 13168));
    // 0x2d1b80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d1b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d1b84: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d1b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d1b88: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d1b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2d1b8c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d1b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2d1b90: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2d1b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2d1b94: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2d1b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2d1b98: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d1b98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3B3374u));
    // 0x2d1b9c: 0x1443002c  bne         $v0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2D1B9Cu;
    {
        const bool branch_taken_0x2d1b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D1BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1B9Cu;
        // 0x2d1ba0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1b9c) {
            ctx->pc = 0x2D1C50u;
            goto label_2d1c50;
        }
    }
    ctx->pc = 0x2D1BA4u;
    // 0x2d1ba4: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x2d1ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x2d1ba8: 0x24960008  addiu       $s6, $a0, 0x8
    ctx->pc = 0x2d1ba8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2d1bac: 0x2451a680  addiu       $s1, $v0, -0x5980
    ctx->pc = 0x2d1bacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944384));
    // 0x2d1bb0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d1bb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1bb4: 0x24150005  addiu       $s5, $zero, 0x5
    ctx->pc = 0x2d1bb4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d1bb8: 0x24140006  addiu       $s4, $zero, 0x6
    ctx->pc = 0x2d1bb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2d1bbc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2d1bbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1bc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d1bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1bc4: 0x0  nop
    ctx->pc = 0x2d1bc4u;
    // NOP
label_2d1bc8:
    // 0x2d1bc8: 0xc0a1386  jal         func_284E18
    ctx->pc = 0x2D1BC8u;
    SET_GPR_U32(ctx, 31, 0x2D1BD0u);
    ctx->pc = 0x2D1BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1BC8u;
    // 0x2d1bcc: 0x26443370  addiu       $a0, $s2, 0x3370 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 13168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E18u, 0x2D1BC8u, 0x2D1BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1BD0u;
label_2d1bd0:
    // 0x2d1bd0: 0x103180  sll         $a2, $s0, 6
    ctx->pc = 0x2d1bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x2d1bd4: 0xd01821  addu        $v1, $a2, $s0
    ctx->pc = 0x2d1bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x2d1bd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d1bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1bdc: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x2d1bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2d1be0: 0x24a31000  addiu       $v1, $a1, 0x1000
    ctx->pc = 0x2d1be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4096));
    // 0x2d1be4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2d1be4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1be8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2d1be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2d1bec: 0x513821  addu        $a3, $v0, $s1
    ctx->pc = 0x2d1becu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d1bf0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2d1bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2d1bf4: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D1BF4u;
    {
        const bool branch_taken_0x2d1bf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d1bf4) {
            ctx->pc = 0x2D1C10u;
            goto label_2d1c10;
        }
    }
    ctx->pc = 0x2D1BFCu;
    // 0x2d1bfc: 0x54950003  bnel        $a0, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1BFCu;
    {
        const bool branch_taken_0x2d1bfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 21));
        if (branch_taken_0x2d1bfc) {
            ctx->pc = 0x2D1C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1BFCu;
            // 0x2d1c00: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1C0Cu;
            goto label_2d1c0c;
        }
    }
    ctx->pc = 0x2D1C04u;
    // 0x2d1c04: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2d1c04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1c08: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2d1c08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2d1c0c:
    // 0x2d1c0c: 0xace41004  sw          $a0, 0x1004($a3)
    ctx->pc = 0x2d1c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4100), GPR_U32(ctx, 4));
label_2d1c10:
    // 0x2d1c10: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2D1C10u;
    {
        const bool branch_taken_0x2d1c10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1c10) {
            ctx->pc = 0x2D1C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1C10u;
            // 0x2d1c14: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1C40u;
            goto label_2d1c40;
        }
    }
    ctx->pc = 0x2D1C18u;
    // 0x2d1c18: 0x10940008  beq         $a0, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D1C18u;
    {
        const bool branch_taken_0x2d1c18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        ctx->pc = 0x2D1C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1C18u;
        // 0x2d1c1c: 0xd01021  addu        $v0, $a2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1c18) {
            ctx->pc = 0x2D1C3Cu;
            goto label_2d1c3c;
        }
    }
    ctx->pc = 0x2D1C20u;
    // 0x2d1c20: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2d1c20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2d1c24: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d1c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d1c28: 0x8c431008  lw          $v1, 0x1008($v0)
    ctx->pc = 0x2d1c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4104)));
    // 0x2d1c2c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1C2Cu;
    {
        const bool branch_taken_0x2d1c2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1C2Cu;
        // 0x2d1c30: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1c2c) {
            ctx->pc = 0x2D1C3Cu;
            goto label_2d1c3c;
        }
    }
    ctx->pc = 0x2D1C34u;
    // 0x2d1c34: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x2d1c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x2d1c38: 0xac530020  sw          $s3, 0x20($v0)
    ctx->pc = 0x2d1c38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 19));
label_2d1c3c:
    // 0x2d1c3c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d1c3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2d1c40:
    // 0x2d1c40: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x2d1c40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d1c44: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2D1C44u;
    {
        const bool branch_taken_0x2d1c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1C44u;
        // 0x2d1c48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1c44) {
            ctx->pc = 0x2D1BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d1bc8;
        }
    }
    ctx->pc = 0x2D1C4Cu;
    // 0x2d1c4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d1c4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d1c50:
    // 0x2d1c50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d1c50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d1c54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d1c54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1c58: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d1c58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1c5c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d1c5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d1c60: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d1c60u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1c64: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2d1c64u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d1c68: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2d1c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d1c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1C6Cu;
        // 0x2d1c70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1C74u;
    // 0x2d1c74: 0x0  nop
    ctx->pc = 0x2d1c74u;
    // NOP
    ctx->pc = 0x2d1c78u;
}
