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

// Function: sub_0049FD00
// Address: 0x49fd00 - 0x49fe10
void sub_0049FD00_0x49fd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049FD00_0x49fd00");
#endif

    switch (ctx->pc) {
        case 0x49fd50u: goto label_49fd50;
        case 0x49fd88u: goto label_49fd88;
        case 0x49fdd8u: goto label_49fdd8;
        default: break;
    }

    ctx->pc = 0x49fd00u;

    // 0x49fd00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49fd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x49fd04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x49fd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x49fd08: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x49fd08u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x49fd0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x49fd0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x49fd10: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x49fd10u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x49fd14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x49fd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x49fd18: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x49fd18u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x49fd1c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x49fd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x49fd20: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x49fd20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49fd24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x49fd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x49fd28: 0x26100bb0  addiu       $s0, $s0, 0xBB0
    ctx->pc = 0x49fd28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2992));
    // 0x49fd2c: 0x26520bb4  addiu       $s2, $s2, 0xBB4
    ctx->pc = 0x49fd2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2996));
    // 0x49fd30: 0x86630118  lh          $v1, 0x118($s3)
    ctx->pc = 0x49fd30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 280)));
    // 0x49fd34: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x49fd34u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0BB0u));
    // 0x49fd38: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x49fd38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x49fd3c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49fd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49fd40: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49fd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49fd44: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x49fd44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x49fd48: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x49FD48u;
    SET_GPR_U32(ctx, 31, 0x49FD50u);
    ctx->pc = 0x49FD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FD48u;
    // 0x49fd4c: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x49FD48u, 0x49FD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FD50u;
label_49fd50:
    // 0x49fd50: 0x511824  and         $v1, $v0, $s1
    ctx->pc = 0x49fd50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x49fd54: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x49fd54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x49fd58: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x49fd58u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x49fd5c: 0xa6630022  sh          $v1, 0x22($s3)
    ctx->pc = 0x49fd5cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x49fd60: 0x8664011c  lh          $a0, 0x11C($s3)
    ctx->pc = 0x49fd60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x49fd64: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x49fd64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x49fd68: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x49fd68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x49fd6c: 0xa6630024  sh          $v1, 0x24($s3)
    ctx->pc = 0x49fd6cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 36), (uint16_t)GPR_U32(ctx, 3));
    // 0x49fd70: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x49fd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49fd74: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49fd74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49fd78: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x49fd78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x49fd7c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x49fd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x49fd80: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x49FD80u;
    SET_GPR_U32(ctx, 31, 0x49FD88u);
    ctx->pc = 0x49FD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FD80u;
    // 0x49fd84: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x49FD80u, 0x49FD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FD88u;
label_49fd88:
    // 0x49fd88: 0x511824  and         $v1, $v0, $s1
    ctx->pc = 0x49fd88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x49fd8c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x49fd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x49fd90: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x49fd90u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x49fd94: 0xa6630026  sh          $v1, 0x26($s3)
    ctx->pc = 0x49fd94u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x49fd98: 0x86620120  lh          $v0, 0x120($s3)
    ctx->pc = 0x49fd98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 288)));
    // 0x49fd9c: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x49fd9cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x49fda0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49fda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49fda4: 0xa6640028  sh          $a0, 0x28($s3)
    ctx->pc = 0x49fda4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 40), (uint16_t)GPR_U32(ctx, 4));
    // 0x49fda8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x49fda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49fdac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49fdacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49fdb0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49fdb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49fdb4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49fdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x49fdb8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49fdb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49fdbc: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x49fdbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49fdc0: 0x24428000  addiu       $v0, $v0, -0x8000
    ctx->pc = 0x49fdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x49fdc4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49fdc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49fdc8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49fdc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49fdcc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49fdccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x49fdd0: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x49FDD0u;
    SET_GPR_U32(ctx, 31, 0x49FDD8u);
    ctx->pc = 0x49FDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FDD0u;
    // 0x49fdd4: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x49FDD0u, 0x49FDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FDD8u;
label_49fdd8:
    // 0x49fdd8: 0x518824  and         $s1, $v0, $s1
    ctx->pc = 0x49fdd8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x49fddc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x49fddcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x49fde0: 0x118c02  srl         $s1, $s1, 16
    ctx->pc = 0x49fde0u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 16));
    // 0x49fde4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49fde4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49fde8: 0xa671002a  sh          $s1, 0x2A($s3)
    ctx->pc = 0x49fde8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 42), (uint16_t)GPR_U32(ctx, 17));
    // 0x49fdec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x49fdecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49fdf0: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x49fdf0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x49fdf4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x49fdf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49fdf8: 0xa662002c  sh          $v0, 0x2C($s3)
    ctx->pc = 0x49fdf8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x49fdfc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x49fdfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49fe00: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x49fe00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49fe04: 0x3e00008  jr          $ra
    ctx->pc = 0x49FE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49FE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FE04u;
        // 0x49fe08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49FE04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49FE0Cu;
    // 0x49fe0c: 0x0  nop
    ctx->pc = 0x49fe0cu;
    // NOP
    ctx->pc = 0x49fe10u;
}
