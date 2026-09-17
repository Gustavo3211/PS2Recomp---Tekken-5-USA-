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

// Function: sub_0049FBC0
// Address: 0x49fbc0 - 0x49fd00
void sub_0049FBC0_0x49fbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049FBC0_0x49fbc0");
#endif

    switch (ctx->pc) {
        case 0x49fc28u: goto label_49fc28;
        case 0x49fc78u: goto label_49fc78;
        case 0x49fcc8u: goto label_49fcc8;
        default: break;
    }

    ctx->pc = 0x49fbc0u;

    // 0x49fbc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49fbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x49fbc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x49fbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x49fbc8: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x49fbc8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x49fbcc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x49fbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x49fbd0: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x49fbd0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x49fbd4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x49fbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x49fbd8: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x49fbd8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x49fbdc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x49fbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x49fbe0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x49fbe0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49fbe4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x49fbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x49fbe8: 0x26100bb0  addiu       $s0, $s0, 0xBB0
    ctx->pc = 0x49fbe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2992));
    // 0x49fbec: 0x26520bb4  addiu       $s2, $s2, 0xBB4
    ctx->pc = 0x49fbecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2996));
    // 0x49fbf0: 0x86620118  lh          $v0, 0x118($s3)
    ctx->pc = 0x49fbf0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 280)));
    // 0x49fbf4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x49fbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0BB0u));
    // 0x49fbf8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49fbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49fbfc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49fbfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49fc00: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49fc00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49fc04: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49fc04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x49fc08: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49fc08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49fc0c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x49fc0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49fc10: 0x21023  negu        $v0, $v0
    ctx->pc = 0x49fc10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x49fc14: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49fc14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49fc18: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49fc18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49fc1c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49fc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x49fc20: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x49FC20u;
    SET_GPR_U32(ctx, 31, 0x49FC28u);
    ctx->pc = 0x49FC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FC20u;
    // 0x49fc24: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x49FC20u, 0x49FC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FC28u;
label_49fc28:
    // 0x49fc28: 0x511824  and         $v1, $v0, $s1
    ctx->pc = 0x49fc28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x49fc2c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x49fc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x49fc30: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x49fc30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x49fc34: 0xa6630022  sh          $v1, 0x22($s3)
    ctx->pc = 0x49fc34u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x49fc38: 0x8662011c  lh          $v0, 0x11C($s3)
    ctx->pc = 0x49fc38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x49fc3c: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x49fc3cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x49fc40: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49fc40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49fc44: 0xa6640024  sh          $a0, 0x24($s3)
    ctx->pc = 0x49fc44u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 36), (uint16_t)GPR_U32(ctx, 4));
    // 0x49fc48: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x49fc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49fc4c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49fc4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49fc50: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49fc50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49fc54: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49fc54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x49fc58: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49fc58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49fc5c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x49fc5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49fc60: 0x24428000  addiu       $v0, $v0, -0x8000
    ctx->pc = 0x49fc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x49fc64: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49fc64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49fc68: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49fc68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49fc6c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49fc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x49fc70: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x49FC70u;
    SET_GPR_U32(ctx, 31, 0x49FC78u);
    ctx->pc = 0x49FC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FC70u;
    // 0x49fc74: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x49FC70u, 0x49FC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FC78u;
label_49fc78:
    // 0x49fc78: 0x511824  and         $v1, $v0, $s1
    ctx->pc = 0x49fc78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x49fc7c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x49fc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x49fc80: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x49fc80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x49fc84: 0xa6630026  sh          $v1, 0x26($s3)
    ctx->pc = 0x49fc84u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x49fc88: 0x86620120  lh          $v0, 0x120($s3)
    ctx->pc = 0x49fc88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 288)));
    // 0x49fc8c: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x49fc8cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x49fc90: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49fc90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49fc94: 0xa6640028  sh          $a0, 0x28($s3)
    ctx->pc = 0x49fc94u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 40), (uint16_t)GPR_U32(ctx, 4));
    // 0x49fc98: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x49fc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49fc9c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49fc9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49fca0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49fca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49fca4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49fca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x49fca8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49fca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49fcac: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x49fcacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49fcb0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x49fcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x49fcb4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49fcb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49fcb8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49fcb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49fcbc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49fcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x49fcc0: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x49FCC0u;
    SET_GPR_U32(ctx, 31, 0x49FCC8u);
    ctx->pc = 0x49FCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FCC0u;
    // 0x49fcc4: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x49FCC0u, 0x49FCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FCC8u;
label_49fcc8:
    // 0x49fcc8: 0x518824  and         $s1, $v0, $s1
    ctx->pc = 0x49fcc8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x49fccc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x49fcccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x49fcd0: 0x118c02  srl         $s1, $s1, 16
    ctx->pc = 0x49fcd0u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 16));
    // 0x49fcd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49fcd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49fcd8: 0xa671002a  sh          $s1, 0x2A($s3)
    ctx->pc = 0x49fcd8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 42), (uint16_t)GPR_U32(ctx, 17));
    // 0x49fcdc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x49fcdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49fce0: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x49fce0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x49fce4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x49fce4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49fce8: 0xa662002c  sh          $v0, 0x2C($s3)
    ctx->pc = 0x49fce8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x49fcec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x49fcecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49fcf0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x49fcf0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49fcf4: 0x3e00008  jr          $ra
    ctx->pc = 0x49FCF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49FCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FCF4u;
        // 0x49fcf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49FCF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49FCFCu;
    // 0x49fcfc: 0x0  nop
    ctx->pc = 0x49fcfcu;
    // NOP
    ctx->pc = 0x49fd00u;
}
