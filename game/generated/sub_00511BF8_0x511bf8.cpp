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

// Function: sub_00511BF8
// Address: 0x511bf8 - 0x511cc0
void sub_00511BF8_0x511bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00511BF8_0x511bf8");
#endif

    switch (ctx->pc) {
        case 0x511c50u: goto label_511c50;
        default: break;
    }

    ctx->pc = 0x511bf8u;

    // 0x511bf8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x511bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x511bfc: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x511bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x511c00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x511c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x511c04: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x511c04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x511c08: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x511c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x511c0c: 0x69403  sra         $s2, $a2, 16
    ctx->pc = 0x511c0cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 6), 16));
    // 0x511c10: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x511c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x511c14: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x511c14u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x511c18: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x511c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x511c1c: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x511c1cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x511c20: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x511c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x511c24: 0x9ac03  sra         $s5, $t1, 16
    ctx->pc = 0x511c24u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 9), 16));
    // 0x511c28: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x511c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x511c2c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x511c2cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x511c30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x511c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x511c34: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x511c34u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x511c38: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x511c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x511c3c: 0x89c03  sra         $s3, $t0, 16
    ctx->pc = 0x511c3cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 8), 16));
    // 0x511c40: 0xaa403  sra         $s4, $t2, 16
    ctx->pc = 0x511c40u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 10), 16));
    // 0x511c44: 0x8ed00000  lw          $s0, 0x0($s6)
    ctx->pc = 0x511c44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x511c48: 0xc14481c  jal         func_512070
    ctx->pc = 0x511C48u;
    SET_GPR_U32(ctx, 31, 0x511C50u);
    ctx->pc = 0x511C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x511C48u;
    // 0x511c4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512070u, 0x511C48u, 0x511C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x511C50u;
label_511c50:
    // 0x511c50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x511c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x511c54: 0x5443000d  bnel        $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x511C54u;
    {
        const bool branch_taken_0x511c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x511c54) {
            ctx->pc = 0x511C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x511C54u;
            // 0x511c58: 0x96220000  lhu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x511C8Cu;
            goto label_511c8c;
        }
    }
    ctx->pc = 0x511C5Cu;
    // 0x511c5c: 0xa6120000  sh          $s2, 0x0($s0)
    ctx->pc = 0x511c5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x511c60: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x511c60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x511c64: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x511c64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x511c68: 0xa6130006  sh          $s3, 0x6($s0)
    ctx->pc = 0x511c68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 19));
    // 0x511c6c: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x511c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x511c70: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x511c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x511c74: 0xa614000a  sh          $s4, 0xA($s0)
    ctx->pc = 0x511c74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 20));
    // 0x511c78: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x511c78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x511c7c: 0xa6150008  sh          $s5, 0x8($s0)
    ctx->pc = 0x511c7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 21));
    // 0x511c80: 0xa600000e  sh          $zero, 0xE($s0)
    ctx->pc = 0x511c80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x511c84: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x511c84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x511c88: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x511c88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_511c8c:
    // 0x511c8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x511c8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x511c90: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x511c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x511c94: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x511c94u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x511c98: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x511c98u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x511c9c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x511c9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x511ca0: 0xaed00000  sw          $s0, 0x0($s6)
    ctx->pc = 0x511ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
    // 0x511ca4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x511ca4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x511ca8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x511ca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x511cac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x511cacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x511cb0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x511cb0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x511cb4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x511cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x511cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x511CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x511CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511CB8u;
        // 0x511cbc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x511CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x511CC0u;
}
