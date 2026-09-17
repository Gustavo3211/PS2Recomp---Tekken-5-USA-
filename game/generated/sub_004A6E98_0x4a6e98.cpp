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

// Function: sub_004A6E98
// Address: 0x4a6e98 - 0x4a6f90
void sub_004A6E98_0x4a6e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A6E98_0x4a6e98");
#endif

    switch (ctx->pc) {
        case 0x4a6eccu: goto label_4a6ecc;
        default: break;
    }

    ctx->pc = 0x4a6e98u;

    // 0x4a6e98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4a6e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4a6e9c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4a6e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4a6ea0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x4a6ea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6ea4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4a6ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4a6ea8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4a6ea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6eac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4a6eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4a6eb0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4a6eb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6eb4: 0x118c00  sll         $s1, $s1, 16
    ctx->pc = 0x4a6eb4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x4a6eb8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a6eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6ebc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4a6ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4a6ec0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4a6ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4a6ec4: 0xc123332  jal         func_48CCC8
    ctx->pc = 0x4A6EC4u;
    SET_GPR_U32(ctx, 31, 0x4A6ECCu);
    ctx->pc = 0x4A6EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6EC4u;
    // 0x4a6ec8: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CCC8u, 0x4A6EC4u, 0x4A6ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6ECCu;
label_4a6ecc:
    // 0x4a6ecc: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x4a6eccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4a6ed0: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x4a6ed0u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x4a6ed4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4a6ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4a6ed8: 0x121c00  sll         $v1, $s2, 16
    ctx->pc = 0x4a6ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4a6edc: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4a6edcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4a6ee0: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x4a6ee0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4a6ee4: 0x3467ffff  ori         $a3, $v1, 0xFFFF
    ctx->pc = 0x4a6ee4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a6ee8: 0x2258825  or          $s1, $s1, $a1
    ctx->pc = 0x4a6ee8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
    // 0x4a6eec: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x4A6EECu;
    {
        const bool branch_taken_0x4a6eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6EECu;
        // 0x4a6ef0: 0x34c60001  ori         $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6eec) {
            ctx->pc = 0x4A6F70u;
            goto label_4a6f70;
        }
    }
    ctx->pc = 0x4A6EF4u;
    // 0x4a6ef4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4a6ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6ef8: 0x240200d1  addiu       $v0, $zero, 0xD1
    ctx->pc = 0x4a6ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 209));
    // 0x4a6efc: 0xa4820008  sh          $v0, 0x8($a0)
    ctx->pc = 0x4a6efcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a6f00: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a6f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6f04: 0xa472000e  sh          $s2, 0xE($v1)
    ctx->pc = 0x4a6f04u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 18));
    // 0x4a6f08: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4a6f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6f0c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x4a6f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4a6f10: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a6f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a6f14: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4a6f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4a6f18: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4a6f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4a6f1c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4a6f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4a6f20: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a6f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6f24: 0xa473000c  sh          $s3, 0xC($v1)
    ctx->pc = 0x4a6f24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 19));
    // 0x4a6f28: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4a6f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6f2c: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x4a6f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x4a6f30: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a6f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a6f34: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a6f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a6f38: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4a6f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4a6f3c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4a6f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4a6f40: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a6f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6f44: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x4a6f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x4a6f48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a6f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a6f4c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4a6f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4a6f50: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4a6f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4a6f54: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4a6f54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4a6f58: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4a6f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6f5c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x4a6f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4a6f60: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a6f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a6f64: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a6f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a6f68: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4a6f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4a6f6c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4a6f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4a6f70:
    // 0x4a6f70: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4a6f70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a6f74: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4a6f74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a6f78: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4a6f78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a6f7c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4a6f7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4a6f80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4a6f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a6f84: 0x3e00008  jr          $ra
    ctx->pc = 0x4A6F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A6F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6F84u;
        // 0x4a6f88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A6F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A6F8Cu;
    // 0x4a6f8c: 0x0  nop
    ctx->pc = 0x4a6f8cu;
    // NOP
    ctx->pc = 0x4a6f90u;
}
