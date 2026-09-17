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

// Function: sub_004E2D40
// Address: 0x4e2d40 - 0x4e3980
void sub_004E2D40_0x4e2d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2D40_0x4e2d40");
#endif

    switch (ctx->pc) {
        case 0x4e2d58u: goto label_4e2d58;
        case 0x4e2d68u: goto label_4e2d68;
        case 0x4e2d7cu: goto label_4e2d7c;
        case 0x4e2e00u: goto label_4e2e00;
        case 0x4e2f44u: goto label_4e2f44;
        case 0x4e2fa4u: goto label_4e2fa4;
        case 0x4e30b0u: goto label_4e30b0;
        case 0x4e3148u: goto label_4e3148;
        case 0x4e31c0u: goto label_4e31c0;
        case 0x4e3318u: goto label_4e3318;
        case 0x4e3438u: goto label_4e3438;
        case 0x4e353cu: goto label_4e353c;
        case 0x4e3598u: goto label_4e3598;
        case 0x4e3610u: goto label_4e3610;
        case 0x4e3618u: goto label_4e3618;
        case 0x4e371cu: goto label_4e371c;
        case 0x4e3770u: goto label_4e3770;
        case 0x4e3868u: goto label_4e3868;
        case 0x4e3878u: goto label_4e3878;
        case 0x4e3888u: goto label_4e3888;
        case 0x4e3898u: goto label_4e3898;
        case 0x4e38e0u: goto label_4e38e0;
        case 0x4e3920u: goto label_4e3920;
        case 0x4e3928u: goto label_4e3928;
        case 0x4e3934u: goto label_4e3934;
        case 0x4e3948u: goto label_4e3948;
        case 0x4e3958u: goto label_4e3958;
        case 0x4e3968u: goto label_4e3968;
        default: break;
    }

    ctx->pc = 0x4e2d40u;

    // 0x4e2d40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e2d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e2d44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e2d44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e2d48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e2d48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e2d4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e2d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e2d50: 0x8138d4a  j           func_4E3528
    ctx->pc = 0x4E2D50u;
    ctx->pc = 0x4E2D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2D50u;
    // 0x4e2d54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3528u;
    goto label_4e3528;
    ctx->pc = 0x4E2D58u;
label_4e2d58:
    // 0x4e2d58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e2d58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e2d5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e2d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e2d60: 0x3e00008  jr          $ra
    ctx->pc = 0x4E2D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E2D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2D60u;
        // 0x4e2d64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E2D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E2D68u;
label_4e2d68:
    // 0x4e2d68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e2d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e2d6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e2d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e2d70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4e2d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4e2d74: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4E2D74u;
    SET_GPR_U32(ctx, 31, 0x4E2D7Cu);
    ctx->pc = 0x4E2D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2D74u;
    // 0x4e2d78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4E2D74u, 0x4E2D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2D7Cu;
label_4e2d7c:
    // 0x4e2d7c: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x4e2d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x4e2d80: 0xac500140  sw          $s0, 0x140($v0)
    ctx->pc = 0x4e2d80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 16));
    // 0x4e2d84: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4e2d84u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e2d88: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4e2d88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4e2d8c: 0x24c6119c  addiu       $a2, $a2, 0x119C
    ctx->pc = 0x4e2d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4508));
    // 0x4e2d90: 0x260701bc  addiu       $a3, $s0, 0x1BC
    ctx->pc = 0x4e2d90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4e2d94: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4e2d94u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F119Cu));
    // 0x4e2d98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e2d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e2d9c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4e2d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e2da0: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x4e2da0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x4e2da4: 0xa443015e  sh          $v1, 0x15E($v0)
    ctx->pc = 0x4e2da4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 350), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e2da8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4e2da8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F119Cu));
    // 0x4e2dac: 0x94a30006  lhu         $v1, 0x6($a1)
    ctx->pc = 0x4e2dacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x4e2db0: 0xa4430160  sh          $v1, 0x160($v0)
    ctx->pc = 0x4e2db0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 352), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e2db4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4e2db4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F119Cu));
    // 0x4e2db8: 0x94430008  lhu         $v1, 0x8($v0)
    ctx->pc = 0x4e2db8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4e2dbc: 0xa6030158  sh          $v1, 0x158($s0)
    ctx->pc = 0x4e2dbcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 344), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e2dc0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4e2dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F119Cu));
    // 0x4e2dc4: 0x9443000a  lhu         $v1, 0xA($v0)
    ctx->pc = 0x4e2dc4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x4e2dc8: 0xa6030166  sh          $v1, 0x166($s0)
    ctx->pc = 0x4e2dc8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 358), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e2dcc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4e2dccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F119Cu));
    // 0x4e2dd0: 0x9443000c  lhu         $v1, 0xC($v0)
    ctx->pc = 0x4e2dd0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4e2dd4: 0xa6030168  sh          $v1, 0x168($s0)
    ctx->pc = 0x4e2dd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 360), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e2dd8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4e2dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F119Cu));
    // 0x4e2ddc: 0x94430016  lhu         $v1, 0x16($v0)
    ctx->pc = 0x4e2ddcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x4e2de0: 0xa6030160  sh          $v1, 0x160($s0)
    ctx->pc = 0x4e2de0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e2de4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e2de4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e2de8: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4e2de8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e2dec: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4e2decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4e2df0: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x4e2df0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e2df4: 0x8138b80  j           func_4E2E00
    ctx->pc = 0x4E2DF4u;
    ctx->pc = 0x4E2DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2DF4u;
    // 0x4e2df8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E2E00u;
    goto label_4e2e00;
    ctx->pc = 0x4E2DFCu;
    // 0x4e2dfc: 0x0  nop
    ctx->pc = 0x4e2dfcu;
    // NOP
label_4e2e00:
    // 0x4e2e00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e2e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4e2e04: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4e2e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4e2e08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e2e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e2e0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e2e0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e2e10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e2e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4e2e14: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4e2e14u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4e2e18: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4e2e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4e2e1c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e2e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e2e20: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4e2e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4e2e24: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4e2e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4e2e28: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4e2e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4e2e2c: 0x24751188  addiu       $s5, $v1, 0x1188
    ctx->pc = 0x4e2e2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4488));
    // 0x4e2e30: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4e2e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4e2e34: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x4e2e34u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e2e38: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4e2e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x4e2e3c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e2e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e2e40: 0x8c491198  lw          $t1, 0x1198($v0)
    ctx->pc = 0x4e2e40u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x7F1198u));
    // 0x4e2e44: 0x2474118c  addiu       $s4, $v1, 0x118C
    ctx->pc = 0x4e2e44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4492));
    // 0x4e2e48: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x4e2e48u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F1188u));
    // 0x4e2e4c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e2e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e2e50: 0x85220002  lh          $v0, 0x2($t1)
    ctx->pc = 0x4e2e50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x4e2e54: 0x24731190  addiu       $s3, $v1, 0x1190
    ctx->pc = 0x4e2e54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4496));
    // 0x4e2e58: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e2e58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e2e5c: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x4e2e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F118Cu));
    // 0x4e2e60: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e2e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e2e64: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e2e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e2e68: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4e2e68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4e2e6c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4e2e6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4e2e70: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4e2e70u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x4e2e74: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e2e74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e2e78: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x4e2e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x4e2e7c: 0x8c6a119c  lw          $t2, 0x119C($v1)
    ctx->pc = 0x4e2e7cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4508)));
    // 0x4e2e80: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e2e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e2e84: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4e2e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4e2e88: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x4e2e88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e2e8c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e2e8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e2e90: 0x86a80000  lh          $t0, 0x0($s5)
    ctx->pc = 0x4e2e90u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4e2e94: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e2e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e2e98: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4e2e98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4e2e9c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4e2e9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4e2ea0: 0x24721184  addiu       $s2, $v1, 0x1184
    ctx->pc = 0x4e2ea0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4484));
    // 0x4e2ea4: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x4e2ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x4e2ea8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4e2ea8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4e2eac: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x4e2eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x4e2eb0: 0x86840000  lh          $a0, 0x0($s4)
    ctx->pc = 0x4e2eb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e2eb4: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4e2eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4e2eb8: 0x8e490000  lw          $t1, 0x0($s2)
    ctx->pc = 0x4e2eb8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e2ebc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e2ebcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e2ec0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e2ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e2ec4: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4e2ec4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4e2ec8: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4e2ec8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4e2ecc: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4e2eccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x4e2ed0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4e2ed0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4e2ed4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4e2ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4e2ed8: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x4e2ed8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e2edc: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4e2edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4e2ee0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e2ee0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e2ee4: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x4e2ee4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4e2ee8: 0x1114025  or          $t0, $t0, $s1
    ctx->pc = 0x4e2ee8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 17));
    // 0x4e2eec: 0xa82824  and         $a1, $a1, $t0
    ctx->pc = 0x4e2eecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x4e2ef0: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4e2ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x4e2ef4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x4e2ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4e2ef8: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4e2ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4e2efc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e2efcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e2f00: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4e2f00u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4e2f04: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4e2f04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x4e2f08: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x4e2f08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x4e2f0c: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x4e2f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x4e2f10: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x4e2f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4e2f14: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4e2f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4e2f18: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e2f18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e2f1c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4e2f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4e2f20: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4e2f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4e2f24: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x4e2f24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4e2f28: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4e2f28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x4e2f2c: 0x85420010  lh          $v0, 0x10($t2)
    ctx->pc = 0x4e2f2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x4e2f30: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e2f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e2f34: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x4e2f34u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4e2f38: 0xae490000  sw          $t1, 0x0($s2)
    ctx->pc = 0x4e2f38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 9));
    // 0x4e2f3c: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4E2F3Cu;
    SET_GPR_U32(ctx, 31, 0x4E2F44u);
    ctx->pc = 0x4E2F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2F3Cu;
    // 0x4e2f40: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4E2F3Cu, 0x4E2F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2F44u;
label_4e2f44:
    // 0x4e2f44: 0x5456000c  bnel        $v0, $s6, . + 4 + (0xC << 2)
    ctx->pc = 0x4E2F44u;
    {
        const bool branch_taken_0x4e2f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x4e2f44) {
            ctx->pc = 0x4E2F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2F44u;
            // 0x4e2f48: 0x86420000  lh          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2F78u;
            goto label_4e2f78;
        }
    }
    ctx->pc = 0x4E2F4Cu;
    // 0x4e2f4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e2f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e2f50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e2f50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e2f54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e2f54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e2f58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e2f58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e2f5c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e2f5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e2f60: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e2f60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e2f64: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e2f64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e2f68: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e2f68u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e2f6c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4e2f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e2f70: 0x8138d4a  j           func_4E3528
    ctx->pc = 0x4E2F70u;
    ctx->pc = 0x4E2F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2F70u;
    // 0x4e2f74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3528u;
    goto label_4e3528;
    ctx->pc = 0x4E2F78u;
label_4e2f78:
    // 0x4e2f78: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4e2f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e2f7c: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x4e2f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x4e2f80: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x4e2f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4e2f84: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e2f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e2f88: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e2f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e2f8c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e2f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e2f90: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x4e2f90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e2f94: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x4e2f94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e2f98: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4e2f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e2f9c: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4E2F9Cu;
    SET_GPR_U32(ctx, 31, 0x4E2FA4u);
    ctx->pc = 0x4E2FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2F9Cu;
    // 0x4e2fa0: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4E2F9Cu, 0x4E2FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2FA4u;
label_4e2fa4:
    // 0x4e2fa4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4E2FA4u;
    {
        const bool branch_taken_0x4e2fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E2FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2FA4u;
        // 0x4e2fa8: 0x260901b8  addiu       $t1, $s0, 0x1B8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2fa4) {
            ctx->pc = 0x4E2FD8u;
            goto label_4e2fd8;
        }
    }
    ctx->pc = 0x4E2FACu;
    // 0x4e2fac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e2facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e2fb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e2fb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e2fb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e2fb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e2fb8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e2fb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e2fbc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e2fbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e2fc0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e2fc0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e2fc4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e2fc4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e2fc8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e2fc8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e2fcc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4e2fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e2fd0: 0x8138d4a  j           func_4E3528
    ctx->pc = 0x4E2FD0u;
    ctx->pc = 0x4E2FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2FD0u;
    // 0x4e2fd4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3528u;
    goto label_4e3528;
    ctx->pc = 0x4E2FD8u;
label_4e2fd8:
    // 0x4e2fd8: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4e2fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4e2fdc: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4e2fdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e2fe0: 0x24a51180  addiu       $a1, $a1, 0x1180
    ctx->pc = 0x4e2fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4480));
    // 0x4e2fe4: 0x26060166  addiu       $a2, $s0, 0x166
    ctx->pc = 0x4e2fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 358));
    // 0x4e2fe8: 0x26070168  addiu       $a3, $s0, 0x168
    ctx->pc = 0x4e2fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 360));
    // 0x4e2fec: 0xa6020164  sh          $v0, 0x164($s0)
    ctx->pc = 0x4e2fecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 356), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e2ff0: 0x260801bc  addiu       $t0, $s0, 0x1BC
    ctx->pc = 0x4e2ff0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4e2ff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e2ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e2ff8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e2ff8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e2ffc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e2ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1180u));
    // 0x4e3000: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4e3000u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e3004: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e3004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e3008: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e3008u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e300c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e300cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e3010: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e3010u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e3014: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e3014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e3018: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e3018u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e301c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e301cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4e3020: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e3020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e3024: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4e3024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e3028: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4e3028u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e302c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4e302cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4e3030: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e3030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e3034: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e3034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e3038: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e3038u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4e303c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4e303cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e3040: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4e3040u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e3044: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e3044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e3048: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4e3048u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e304c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e304cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e3050: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e3050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e3054: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e3054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e3058: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e3058u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4e305c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e305cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e3060: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4e3060u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e3064: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4e3064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4e3068: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e3068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e306c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e306cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e3070: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e3070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e3074: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e3074u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4e3078: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4e3078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4e307c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4e307cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e3080: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x4e3080u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e3084: 0xa5230000  sh          $v1, 0x0($t1)
    ctx->pc = 0x4e3084u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e3088: 0xa616002e  sh          $s6, 0x2E($s0)
    ctx->pc = 0x4e3088u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 22));
    // 0x4e308c: 0xa600015c  sh          $zero, 0x15C($s0)
    ctx->pc = 0x4e308cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 348), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e3090: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e3090u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e3094: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4e3094u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e3098: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e3098u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e309c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4e309cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4e30a0: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x4e30a0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e30a4: 0x8138c2c  j           func_4E30B0
    ctx->pc = 0x4E30A4u;
    ctx->pc = 0x4E30A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E30A4u;
    // 0x4e30a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E30B0u;
    goto label_4e30b0;
    ctx->pc = 0x4E30ACu;
    // 0x4e30ac: 0x0  nop
    ctx->pc = 0x4e30acu;
    // NOP
label_4e30b0:
    // 0x4e30b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e30b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e30b4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4e30b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e30b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e30b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e30bc: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4e30bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4e30c0: 0x24a51180  addiu       $a1, $a1, 0x1180
    ctx->pc = 0x4e30c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4480));
    // 0x4e30c4: 0x250a0162  addiu       $t2, $t0, 0x162
    ctx->pc = 0x4e30c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 354));
    // 0x4e30c8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e30c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1180u));
    // 0x4e30cc: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4e30ccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4e30d0: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4e30d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4e30d4: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4e30d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4e30d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e30d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e30dc: 0x8cc7119c  lw          $a3, 0x119C($a2)
    ctx->pc = 0x4e30dcu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F119Cu));
    // 0x4e30e0: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4e30e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4e30e4: 0x250801bc  addiu       $t0, $t0, 0x1BC
    ctx->pc = 0x4e30e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 444));
    // 0x4e30e8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e30e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e30ec: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e30ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4e30f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e30f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e30f4: 0x84e60012  lh          $a2, 0x12($a3)
    ctx->pc = 0x4e30f4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 18)));
    // 0x4e30f8: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4e30f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e30fc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4e30fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4e3100: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4e3100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4e3104: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e3104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e3108: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e3108u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4e310c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4e310cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e3110: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x4e3110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e3114: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4E3114u;
    {
        const bool branch_taken_0x4e3114 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4E3118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3114u;
        // 0x4e3118: 0xa5420000  sh          $v0, 0x0($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3114) {
            ctx->pc = 0x4E3128u;
            goto label_4e3128;
        }
    }
    ctx->pc = 0x4E311Cu;
    // 0x4e311c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e311cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e3120: 0x8138d4a  j           func_4E3528
    ctx->pc = 0x4E3120u;
    ctx->pc = 0x4E3124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3120u;
    // 0x4e3124: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3528u;
    goto label_4e3528;
    ctx->pc = 0x4E3128u;
label_4e3128:
    // 0x4e3128: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x4e3128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x4e312c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e312cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e3130: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x4e3130u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e3134: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4e3134u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e3138: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4e3138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4e313c: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x4e313cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e3140: 0x8138c52  j           func_4E3148
    ctx->pc = 0x4E3140u;
    ctx->pc = 0x4E3144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3140u;
    // 0x4e3144: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3148u;
    goto label_4e3148;
    ctx->pc = 0x4E3148u;
label_4e3148:
    // 0x4e3148: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e3148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4e314c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e314cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e3150: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4e3150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4e3154: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x4e3154u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x4e3158: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4e3158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4e315c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4e315cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e3160: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4e3160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4e3164: 0x24751180  addiu       $s5, $v1, 0x1180
    ctx->pc = 0x4e3164u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4480));
    // 0x4e3168: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4e3168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4e316c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e316cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e3170: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e3170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4e3174: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4e3174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4e3178: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4e3178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x4e317c: 0x868201b6  lh          $v0, 0x1B6($s4)
    ctx->pc = 0x4e317cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 438)));
    // 0x4e3180: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4e3180u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1180u));
    // 0x4e3184: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4e3184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4e3188: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e3188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e318c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e318cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e3190: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4e3190u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4e3194: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e3194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e3198: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x4e3198u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4e319c: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x4e319cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x4e31a0: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4e31a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4e31a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e31a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e31a8: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4e31a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4e31ac: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x4e31acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4e31b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4E31B0u;
    {
        const bool branch_taken_0x4e31b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E31B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E31B0u;
        // 0x4e31b4: 0x2416ffff  addiu       $s6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e31b0) {
            ctx->pc = 0x4E31C0u;
            goto label_4e31c0;
        }
    }
    ctx->pc = 0x4E31B8u;
    // 0x4e31b8: 0xc12b6bc  jal         func_4ADAF0
    ctx->pc = 0x4E31B8u;
    SET_GPR_U32(ctx, 31, 0x4E31C0u);
    ctx->pc = 0x4ADAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADAF0u, 0x4E31B8u, 0x4E31C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E31C0u;
label_4e31c0:
    // 0x4e31c0: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x4e31c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x4e31c4: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4e31c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4e31c8: 0x24e71188  addiu       $a3, $a3, 0x1188
    ctx->pc = 0x4e31c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4488));
    // 0x4e31cc: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4e31ccu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4e31d0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4e31d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1188u));
    // 0x4e31d4: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4e31d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4e31d8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e31d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e31dc: 0x258c118c  addiu       $t4, $t4, 0x118C
    ctx->pc = 0x4e31dcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4492));
    // 0x4e31e0: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4e31e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4e31e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e31e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e31e8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e31e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e31ec: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x4e31ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4e31f0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4e31f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4e31f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e31f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e31f8: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4e31f8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4e31fc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4e31fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4e3200: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x4e3200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x4e3204: 0x25ad1190  addiu       $t5, $t5, 0x1190
    ctx->pc = 0x4e3204u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4496));
    // 0x4e3208: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4e3208u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4e320c: 0x8da50000  lw          $a1, 0x0($t5)
    ctx->pc = 0x4e320cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F1190u));
    // 0x4e3210: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4e3210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4e3214: 0x8cd01198  lw          $s0, 0x1198($a2)
    ctx->pc = 0x4e3214u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4504)));
    // 0x4e3218: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e3218u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e321c: 0x84e90000  lh          $t1, 0x0($a3)
    ctx->pc = 0x4e321cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e3220: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4e3220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4e3224: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x4e3224u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x4e3228: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4e3228u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4e322c: 0x24c6d680  addiu       $a2, $a2, -0x2980
    ctx->pc = 0x4e322cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956672));
    // 0x4e3230: 0xad840000  sw          $a0, 0x0($t4)
    ctx->pc = 0x4e3230u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
    // 0x4e3234: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4e3234u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4e3238: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e3238u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e323c: 0x24d2249c  addiu       $s2, $a2, 0x249C
    ctx->pc = 0x4e323cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 9372));
    // 0x4e3240: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x4e3240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x4e3244: 0x24d12494  addiu       $s1, $a2, 0x2494
    ctx->pc = 0x4e3244u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 9364));
    // 0x4e3248: 0x24c62498  addiu       $a2, $a2, 0x2498
    ctx->pc = 0x4e3248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9368));
    // 0x4e324c: 0x858a0000  lh          $t2, 0x0($t4)
    ctx->pc = 0x4e324cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4e3250: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4e3250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4e3254: 0x8e2b0000  lw          $t3, 0x0($s1)
    ctx->pc = 0x4e3254u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e3258: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e3258u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e325c: 0x8cce0000  lw          $t6, 0x0($a2)
    ctx->pc = 0x4e325cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e3260: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4e3260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4e3264: 0x8e4f0000  lw          $t7, 0x0($s2)
    ctx->pc = 0x4e3264u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e3268: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4e3268u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4e326c: 0x1735825  or          $t3, $t3, $s3
    ctx->pc = 0x4e326cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 19));
    // 0x4e3270: 0xada50000  sw          $a1, 0x0($t5)
    ctx->pc = 0x4e3270u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 5));
    // 0x4e3274: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e3274u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e3278: 0x1d37025  or          $t6, $t6, $s3
    ctx->pc = 0x4e3278u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 19));
    // 0x4e327c: 0x1f37825  or          $t7, $t7, $s3
    ctx->pc = 0x4e327cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 19));
    // 0x4e3280: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4e3280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e3284: 0x85a80000  lh          $t0, 0x0($t5)
    ctx->pc = 0x4e3284u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4e3288: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4e3288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4e328c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e328cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e3290: 0x1224823  subu        $t1, $t1, $v0
    ctx->pc = 0x4e3290u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4e3294: 0x1334825  or          $t1, $t1, $s3
    ctx->pc = 0x4e3294u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 19));
    // 0x4e3298: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x4e3298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x4e329c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4e329cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4e32a0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4e32a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4e32a4: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x4e32a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e32a8: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4e32a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4e32ac: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e32acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e32b0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4e32b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4e32b4: 0x1425023  subu        $t2, $t2, $v0
    ctx->pc = 0x4e32b4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x4e32b8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e32b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e32bc: 0x1535025  or          $t2, $t2, $s3
    ctx->pc = 0x4e32bcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 19));
    // 0x4e32c0: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x4e32c0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x4e32c4: 0x8a2024  and         $a0, $a0, $t2
    ctx->pc = 0x4e32c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 10));
    // 0x4e32c8: 0xad840000  sw          $a0, 0x0($t4)
    ctx->pc = 0x4e32c8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
    // 0x4e32cc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4e32ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4e32d0: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x4e32d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4e32d4: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4e32d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4e32d8: 0xae2b0000  sw          $t3, 0x0($s1)
    ctx->pc = 0x4e32d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 11));
    // 0x4e32dc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e32dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e32e0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4e32e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4e32e4: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x4e32e4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4e32e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e32e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e32ec: 0x1134025  or          $t0, $t0, $s3
    ctx->pc = 0x4e32ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 19));
    // 0x4e32f0: 0x1c37024  and         $t6, $t6, $v1
    ctx->pc = 0x4e32f0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 3));
    // 0x4e32f4: 0xa82824  and         $a1, $a1, $t0
    ctx->pc = 0x4e32f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x4e32f8: 0xacce0000  sw          $t6, 0x0($a2)
    ctx->pc = 0x4e32f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 14));
    // 0x4e32fc: 0xada50000  sw          $a1, 0x0($t5)
    ctx->pc = 0x4e32fcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 5));
    // 0x4e3300: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x4e3300u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4e3304: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e3304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e3308: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e3308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e330c: 0x1e27824  and         $t7, $t7, $v0
    ctx->pc = 0x4e330cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 2));
    // 0x4e3310: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4E3310u;
    SET_GPR_U32(ctx, 31, 0x4E3318u);
    ctx->pc = 0x4E3314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3310u;
    // 0x4e3314: 0xae4f0000  sw          $t7, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4E3310u, 0x4E3318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3318u;
label_4e3318:
    // 0x4e3318: 0x2683014a  addiu       $v1, $s4, 0x14A
    ctx->pc = 0x4e3318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 330));
    // 0x4e331c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4e331cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4e3320: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4e3320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4e3324: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4e3324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4e3328: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4e3328u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e332c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e332cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e3330: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e3330u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e3334: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4e3334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4e3338: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4e3338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4e333c: 0x8c85119c  lw          $a1, 0x119C($a0)
    ctx->pc = 0x4e333cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4508)));
    // 0x4e3340: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e3340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e3344: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e3344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e3348: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4e3348u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4e334c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e334cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e3350: 0x94a40014  lhu         $a0, 0x14($a1)
    ctx->pc = 0x4e3350u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x4e3354: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x4e3354u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4e3358: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4e3358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4e335c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e335cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e3360: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e3360u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e3364: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4e3364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4e3368: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e3368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e336c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4e336cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4e3370: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x4e3370u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4e3374: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4E3374u;
    {
        const bool branch_taken_0x4e3374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E3378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3374u;
        // 0x4e3378: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3374) {
            ctx->pc = 0x4E33A8u;
            goto label_4e33a8;
        }
    }
    ctx->pc = 0x4E337Cu;
    // 0x4e337c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e337cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e3380: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e3380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e3384: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e3384u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e3388: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e3388u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e338c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e338cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e3390: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e3390u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e3394: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e3394u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e3398: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4e3398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e339c: 0x8138d5a  j           func_4E3568
    ctx->pc = 0x4E339Cu;
    ctx->pc = 0x4E33A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E339Cu;
    // 0x4e33a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3568u;
    goto label_4e3568;
    ctx->pc = 0x4E33A4u;
    // 0x4e33a4: 0x0  nop
    ctx->pc = 0x4e33a4u;
    // NOP
label_4e33a8:
    // 0x4e33a8: 0x26820160  addiu       $v0, $s4, 0x160
    ctx->pc = 0x4e33a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 352));
    // 0x4e33ac: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4e33acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e33b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4e33b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4e33b4: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x4e33b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4e33b8: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4e33b8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4e33bc: 0x1096000e  beq         $a0, $s6, . + 4 + (0xE << 2)
    ctx->pc = 0x4E33BCu;
    {
        const bool branch_taken_0x4e33bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 22));
        ctx->pc = 0x4E33C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E33BCu;
        // 0x4e33c0: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e33bc) {
            ctx->pc = 0x4E33F8u;
            goto label_4e33f8;
        }
    }
    ctx->pc = 0x4E33C4u;
    // 0x4e33c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4e33c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e33c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4e33c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e33cc: 0xa682016a  sh          $v0, 0x16A($s4)
    ctx->pc = 0x4e33ccu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 362), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e33d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e33d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e33d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e33d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e33d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e33d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e33dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e33dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e33e0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e33e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e33e4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e33e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e33e8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e33e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e33ec: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4e33ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e33f0: 0x8138d5a  j           func_4E3568
    ctx->pc = 0x4E33F0u;
    ctx->pc = 0x4E33F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E33F0u;
    // 0x4e33f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3568u;
    goto label_4e3568;
    ctx->pc = 0x4E33F8u;
label_4e33f8:
    // 0x4e33f8: 0x268301bc  addiu       $v1, $s4, 0x1BC
    ctx->pc = 0x4e33f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 444));
    // 0x4e33fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4e33fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e3400: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4e3400u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4e3404: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e3404u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e3408: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e3408u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e340c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4e340cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4e3410: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e3410u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e3414: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e3414u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e3418: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e3418u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e341c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e341cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e3420: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e3420u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e3424: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4e3424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e3428: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4e3428u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e342c: 0x8138d0e  j           func_4E3438
    ctx->pc = 0x4E342Cu;
    ctx->pc = 0x4E3430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E342Cu;
    // 0x4e3430: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3438u;
    goto label_4e3438;
    ctx->pc = 0x4E3434u;
    // 0x4e3434: 0x0  nop
    ctx->pc = 0x4e3434u;
    // NOP
label_4e3438:
    // 0x4e3438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e3438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e343c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4e343cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e3440: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e3440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e3444: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x4e3444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x4e3448: 0xa503015e  sh          $v1, 0x15E($t0)
    ctx->pc = 0x4e3448u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 350), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e344c: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4e344cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4e3450: 0x95020164  lhu         $v0, 0x164($t0)
    ctx->pc = 0x4e3450u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 356)));
    // 0x4e3454: 0x24e71180  addiu       $a3, $a3, 0x1180
    ctx->pc = 0x4e3454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4480));
    // 0x4e3458: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4e3458u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4e345c: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x4e345cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x4e3460: 0xa50201b8  sh          $v0, 0x1B8($t0)
    ctx->pc = 0x4e3460u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 440), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e3464: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e3464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e3468: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e3468u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e346c: 0x240a000a  addiu       $t2, $zero, 0xA
    ctx->pc = 0x4e346cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4e3470: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4e3470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e3474: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4e3474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4e3478: 0x8cabf988  lw          $t3, -0x678($a1)
    ctx->pc = 0x4e3478u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294965640)));
    // 0x4e347c: 0x240d0004  addiu       $t5, $zero, 0x4
    ctx->pc = 0x4e347cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4e3480: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e3480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e3484: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4e3484u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4e3488: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e3488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e348c: 0x2529119c  addiu       $t1, $t1, 0x119C
    ctx->pc = 0x4e348cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4508));
    // 0x4e3490: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4e3490u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4e3494: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e3494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e3498: 0x250c01bc  addiu       $t4, $t0, 0x1BC
    ctx->pc = 0x4e3498u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), 444));
    // 0x4e349c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e349cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e34a0: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4e34a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e34a4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4e34a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4e34a8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4e34a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4e34ac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e34acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e34b0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4e34b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4e34b4: 0x850601ba  lh          $a2, 0x1BA($t0)
    ctx->pc = 0x4e34b4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 442)));
    // 0x4e34b8: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4e34b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e34bc: 0xca001a  div         $zero, $a2, $t2
    ctx->pc = 0x4e34bcu;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x4e34c0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e34c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e34c4: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4e34c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4e34c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4e34c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4e34cc: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x4e34ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x4e34d0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4e34d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e34d4: 0x3012  mflo        $a2
    ctx->pc = 0x4e34d4u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x4e34d8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x4e34d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4e34dc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4e34dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4e34e0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4e34e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4e34e4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x4e34e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4e34e8: 0x94a2fffe  lhu         $v0, -0x2($a1)
    ctx->pc = 0x4e34e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294967294)));
    // 0x4e34ec: 0xa50d002e  sh          $t5, 0x2E($t0)
    ctx->pc = 0x4e34ecu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 46), (uint16_t)GPR_U32(ctx, 13));
    // 0x4e34f0: 0xa502015c  sh          $v0, 0x15C($t0)
    ctx->pc = 0x4e34f0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 348), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e34f4: 0xa5000162  sh          $zero, 0x162($t0)
    ctx->pc = 0x4e34f4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 354), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e34f8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4e34f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e34fc: 0x9443000a  lhu         $v1, 0xA($v0)
    ctx->pc = 0x4e34fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x4e3500: 0xa5030166  sh          $v1, 0x166($t0)
    ctx->pc = 0x4e3500u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 358), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e3504: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4e3504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e3508: 0x9443000c  lhu         $v1, 0xC($v0)
    ctx->pc = 0x4e3508u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4e350c: 0xa5030168  sh          $v1, 0x168($t0)
    ctx->pc = 0x4e350cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 360), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e3510: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4e3510u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4e3514: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4e3514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4e3518: 0xa5820000  sh          $v0, 0x0($t4)
    ctx->pc = 0x4e3518u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e351c: 0x8138d4a  j           func_4E3528
    ctx->pc = 0x4E351Cu;
    ctx->pc = 0x4E3520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E351Cu;
    // 0x4e3520: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3528u;
    goto label_4e3528;
    ctx->pc = 0x4E3524u;
    // 0x4e3524: 0x0  nop
    ctx->pc = 0x4e3524u;
    // NOP
label_4e3528:
    // 0x4e3528: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e3528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e352c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e352cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e3530: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4e3530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4e3534: 0xc12564a  jal         func_495928
    ctx->pc = 0x4E3534u;
    SET_GPR_U32(ctx, 31, 0x4E353Cu);
    ctx->pc = 0x4E3538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3534u;
    // 0x4e3538: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x495928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495928u, 0x4E3534u, 0x4E353Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E353Cu;
label_4e353c:
    // 0x4e353c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4E353Cu;
    {
        const bool branch_taken_0x4e353c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E3540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E353Cu;
        // 0x4e3540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e353c) {
            ctx->pc = 0x4E3558u;
            goto label_4e3558;
        }
    }
    ctx->pc = 0x4E3544u;
    // 0x4e3544: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e3544u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e3548: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4e3548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e354c: 0x8138d5a  j           func_4E3568
    ctx->pc = 0x4E354Cu;
    ctx->pc = 0x4E3550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E354Cu;
    // 0x4e3550: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3568u;
    goto label_4e3568;
    ctx->pc = 0x4E3554u;
    // 0x4e3554: 0x0  nop
    ctx->pc = 0x4e3554u;
    // NOP
label_4e3558:
    // 0x4e3558: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e3558u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e355c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4e355cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e3560: 0x3e00008  jr          $ra
    ctx->pc = 0x4E3560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E3564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3560u;
        // 0x4e3564: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E3560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E3568u;
label_4e3568:
    // 0x4e3568: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e3568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4e356c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e356cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e3570: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e3570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e3574: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e3574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4e3578: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4e3578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4e357c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4e357cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4e3580: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4e3580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4e3584: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4e3584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4e3588: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4e3588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4e358c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4e358cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x4e3590: 0xc127bf2  jal         func_49EFC8
    ctx->pc = 0x4E3590u;
    SET_GPR_U32(ctx, 31, 0x4E3598u);
    ctx->pc = 0x4E3594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3590u;
    // 0x4e3594: 0x3c11ffff  lui         $s1, 0xFFFF (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFC8u, 0x4E3590u, 0x4E3598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3598u;
label_4e3598:
    // 0x4e3598: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4e3598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4e359c: 0x86030166  lh          $v1, 0x166($s0)
    ctx->pc = 0x4e359cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 358)));
    // 0x4e35a0: 0x24541188  addiu       $s4, $v0, 0x1188
    ctx->pc = 0x4e35a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4488));
    // 0x4e35a4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4e35a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4e35a8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x4e35a8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F1188u));
    // 0x4e35ac: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4e35acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4e35b0: 0x2453118c  addiu       $s3, $v0, 0x118C
    ctx->pc = 0x4e35b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4492));
    // 0x4e35b4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4e35b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4e35b8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4e35b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4e35bc: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4e35bcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F118Cu));
    // 0x4e35c0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4e35c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4e35c4: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4e35c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4e35c8: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x4e35c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x4e35cc: 0x24d6119c  addiu       $s6, $a2, 0x119C
    ctx->pc = 0x4e35ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 6), 4508));
    // 0x4e35d0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e35d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e35d4: 0x24521190  addiu       $s2, $v0, 0x1190
    ctx->pc = 0x4e35d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4496));
    // 0x4e35d8: 0x86060168  lh          $a2, 0x168($s0)
    ctx->pc = 0x4e35d8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x4e35dc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x4e35dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e35e0: 0x8ec80000  lw          $t0, 0x0($s6)
    ctx->pc = 0x4e35e0u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F119Cu));
    // 0x4e35e4: 0xd13025  or          $a2, $a2, $s1
    ctx->pc = 0x4e35e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 17));
    // 0x4e35e8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4e35e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e35ec: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4e35ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4e35f0: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x4e35f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x4e35f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e35f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e35f8: 0x8502000e  lh          $v0, 0xE($t0)
    ctx->pc = 0x4e35f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 14)));
    // 0x4e35fc: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e35fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e3600: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e3600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e3604: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4e3604u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4e3608: 0xc127c58  jal         func_49F160
    ctx->pc = 0x4E3608u;
    SET_GPR_U32(ctx, 31, 0x4E3610u);
    ctx->pc = 0x4E360Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3608u;
    // 0x4e360c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F160u, 0x4E3608u, 0x4E3610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3610u;
label_4e3610:
    // 0x4e3610: 0xc12b94c  jal         func_4AE530
    ctx->pc = 0x4E3610u;
    SET_GPR_U32(ctx, 31, 0x4E3618u);
    ctx->pc = 0x4E3614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3610u;
    // 0x4e3614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE530u, 0x4E3610u, 0x4E3618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3618u;
label_4e3618:
    // 0x4e3618: 0x2603016a  addiu       $v1, $s0, 0x16A
    ctx->pc = 0x4e3618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 362));
    // 0x4e361c: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x4e361cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4e3620: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x4E3620u;
    {
        const bool branch_taken_0x4e3620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E3624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3620u;
        // 0x4e3624: 0x3c080073  lui         $t0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3620) {
            ctx->pc = 0x4E3728u;
            goto label_4e3728;
        }
    }
    ctx->pc = 0x4E3628u;
    // 0x4e3628: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x4e3628u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e362c: 0x2508d680  addiu       $t0, $t0, -0x2980
    ctx->pc = 0x4e362cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956672));
    // 0x4e3630: 0x26150118  addiu       $s5, $s0, 0x118
    ctx->pc = 0x4e3630u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
    // 0x4e3634: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4e3634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4e3638: 0x2409000b  addiu       $t1, $zero, 0xB
    ctx->pc = 0x4e3638u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x4e363c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4e363cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e3640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e3640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e3644: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4e3644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4e3648: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x4e3648u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e364c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4e364cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4e3650: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e3650u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e3654: 0xa5022334  sh          $v0, 0x2334($t0)
    ctx->pc = 0x4e3654u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 9012), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e3658: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4e3658u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4e365c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x4e365cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4e3660: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x4e3660u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e3664: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4e3664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4e3668: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4e3668u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4e366c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4e366cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4e3670: 0xa5032336  sh          $v1, 0x2336($t0)
    ctx->pc = 0x4e3670u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 9014), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e3674: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x4e3674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4e3678: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4e3678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4e367c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4e367cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4e3680: 0xa5022338  sh          $v0, 0x2338($t0)
    ctx->pc = 0x4e3680u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 9016), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e3684: 0x86a30000  lh          $v1, 0x0($s5)
    ctx->pc = 0x4e3684u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4e3688: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4e3688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4e368c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4e368cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4e3690: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x4e3690u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x4e3694: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e3694u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e3698: 0x8602011c  lh          $v0, 0x11C($s0)
    ctx->pc = 0x4e3698u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x4e369c: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x4e369cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e36a0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e36a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e36a4: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4e36a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4e36a8: 0x31823  negu        $v1, $v1
    ctx->pc = 0x4e36a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x4e36ac: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x4e36acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x4e36b0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4e36b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4e36b4: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4e36b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4e36b8: 0x86020120  lh          $v0, 0x120($s0)
    ctx->pc = 0x4e36b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x4e36bc: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4e36bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4e36c0: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x4e36c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e36c4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e36c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e36c8: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x4e36c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x4e36cc: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4e36ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4e36d0: 0x24638000  addiu       $v1, $v1, -0x8000
    ctx->pc = 0x4e36d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x4e36d4: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x4e36d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
    // 0x4e36d8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4e36d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4e36dc: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4e36dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4e36e0: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4e36e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e36e4: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4e36e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4e36e8: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x4e36e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x4e36ec: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4e36ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4e36f0: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x4e36f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e36f4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e36f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e36f8: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4e36f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4e36fc: 0x96650000  lhu         $a1, 0x0($s3)
    ctx->pc = 0x4e36fcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e3700: 0xa5092330  sh          $t1, 0x2330($t0)
    ctx->pc = 0x4e3700u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 9008), (uint16_t)GPR_U32(ctx, 9));
    // 0x4e3704: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x4e3704u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
    // 0x4e3708: 0xa503233a  sh          $v1, 0x233A($t0)
    ctx->pc = 0x4e3708u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 9018), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e370c: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4e370cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e3710: 0xa505233c  sh          $a1, 0x233C($t0)
    ctx->pc = 0x4e3710u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 9020), (uint16_t)GPR_U32(ctx, 5));
    // 0x4e3714: 0xc127ac8  jal         func_49EB20
    ctx->pc = 0x4E3714u;
    SET_GPR_U32(ctx, 31, 0x4E371Cu);
    ctx->pc = 0x4E3718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3714u;
    // 0x4e3718: 0xa502233e  sh          $v0, 0x233E($t0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 8), 9022), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EB20u, 0x4E3714u, 0x4E371Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E371Cu;
label_4e371c:
    // 0x4e371c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4E371Cu;
    {
        const bool branch_taken_0x4e371c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E3720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E371Cu;
        // 0x4e3720: 0x8ec80000  lw          $t0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e371c) {
            ctx->pc = 0x4E3730u;
            goto label_4e3730;
        }
    }
    ctx->pc = 0x4E3724u;
    // 0x4e3724: 0x0  nop
    ctx->pc = 0x4e3724u;
    // NOP
label_4e3728:
    // 0x4e3728: 0x26150118  addiu       $s5, $s0, 0x118
    ctx->pc = 0x4e3728u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
    // 0x4e372c: 0x8ec80000  lw          $t0, 0x0($s6)
    ctx->pc = 0x4e372cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_4e3730:
    // 0x4e3730: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4e3730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e3734: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x4e3734u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e3738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e3738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e373c: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4e373cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e3740: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4e3740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e3744: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4e3744u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4e3748: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4e3748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e374c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e374cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e3750: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4e3750u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4e3754: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e3754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e3758: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x4e3758u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x4e375c: 0x85020004  lh          $v0, 0x4($t0)
    ctx->pc = 0x4e375cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x4e3760: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e3760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e3764: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e3764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e3768: 0xc12b698  jal         func_4ADA60
    ctx->pc = 0x4E3768u;
    SET_GPR_U32(ctx, 31, 0x4E3770u);
    ctx->pc = 0x4E376Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3768u;
    // 0x4e376c: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA60u, 0x4E3768u, 0x4E3770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3770u;
label_4e3770:
    // 0x4e3770: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4e3770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4e3774: 0x24841180  addiu       $a0, $a0, 0x1180
    ctx->pc = 0x4e3774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4480));
    // 0x4e3778: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x4e3778u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4e377c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4e377cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1180u));
    // 0x4e3780: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4e3780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e3784: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e3784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e3788: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e3788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e378c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e378cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e3790: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4e3790u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4e3794: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e3794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e3798: 0x84920000  lh          $s2, 0x0($a0)
    ctx->pc = 0x4e3798u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e379c: 0x86020162  lh          $v0, 0x162($s0)
    ctx->pc = 0x4e379cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 354)));
    // 0x4e37a0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x4e37a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x4e37a4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e37a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e37a8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e37a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e37ac: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4e37acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4e37b0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4e37b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e37b4: 0xa6a20000  sh          $v0, 0x0($s5)
    ctx->pc = 0x4e37b4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e37b8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4e37b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e37bc: 0x8602015e  lh          $v0, 0x15E($s0)
    ctx->pc = 0x4e37bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 350)));
    // 0x4e37c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e37c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e37c4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e37c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e37c8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e37c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e37cc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4e37ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4e37d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e37d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e37d4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4e37d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e37d8: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x4e37d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x4e37dc: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e37dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e37e0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e37e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e37e4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4e37e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4e37e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e37e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e37ec: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4e37ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e37f0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e37f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e37f4: 0x21503  sra         $v0, $v0, 20
    ctx->pc = 0x4e37f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 20));
    // 0x4e37f8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e37f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e37fc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e37fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e3800: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4e3800u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4e3804: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e3804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e3808: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4e3808u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e380c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x4e380cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x4e3810: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e3810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e3814: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e3814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e3818: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4e3818u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4e381c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4e381cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e3820: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e3820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e3824: 0x21c83  sra         $v1, $v0, 18
    ctx->pc = 0x4e3824u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 18));
    // 0x4e3828: 0x10650011  beq         $v1, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x4E3828u;
    {
        const bool branch_taken_0x4e3828 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x4E382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3828u;
        // 0x4e382c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3828) {
            ctx->pc = 0x4E3870u;
            goto label_4e3870;
        }
    }
    ctx->pc = 0x4E3830u;
    // 0x4e3830: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E3830u;
    {
        const bool branch_taken_0x4e3830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e3830) {
            ctx->pc = 0x4E3834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3830u;
            // 0x4e3834: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E3848u;
            goto label_4e3848;
        }
    }
    ctx->pc = 0x4E3838u;
    // 0x4e3838: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4E3838u;
    {
        const bool branch_taken_0x4e3838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e3838) {
            ctx->pc = 0x4E3860u;
            goto label_4e3860;
        }
    }
    ctx->pc = 0x4E3840u;
    // 0x4e3840: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x4E3840u;
    {
        const bool branch_taken_0x4e3840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E3844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3840u;
        // 0x4e3844: 0xa6b20000  sh          $s2, 0x0($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3840) {
            ctx->pc = 0x4E389Cu;
            goto label_4e389c;
        }
    }
    ctx->pc = 0x4E3848u;
label_4e3848:
    // 0x4e3848: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4E3848u;
    {
        const bool branch_taken_0x4e3848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3848u;
        // 0x4e384c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3848) {
            ctx->pc = 0x4E3880u;
            goto label_4e3880;
        }
    }
    ctx->pc = 0x4E3850u;
    // 0x4e3850: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4E3850u;
    {
        const bool branch_taken_0x4e3850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4e3850) {
            ctx->pc = 0x4E3890u;
            goto label_4e3890;
        }
    }
    ctx->pc = 0x4E3858u;
    // 0x4e3858: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4E3858u;
    {
        const bool branch_taken_0x4e3858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3858u;
        // 0x4e385c: 0xa6b20000  sh          $s2, 0x0($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3858) {
            ctx->pc = 0x4E389Cu;
            goto label_4e389c;
        }
    }
    ctx->pc = 0x4E3860u;
label_4e3860:
    // 0x4e3860: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4E3860u;
    SET_GPR_U32(ctx, 31, 0x4E3868u);
    ctx->pc = 0x4E3864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3860u;
    // 0x4e3864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4E3860u, 0x4E3868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3868u;
label_4e3868:
    // 0x4e3868: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4E3868u;
    {
        const bool branch_taken_0x4e3868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3868u;
        // 0x4e386c: 0xa6b20000  sh          $s2, 0x0($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3868) {
            ctx->pc = 0x4E389Cu;
            goto label_4e389c;
        }
    }
    ctx->pc = 0x4E3870u;
label_4e3870:
    // 0x4e3870: 0xc127ea6  jal         func_49FA98
    ctx->pc = 0x4E3870u;
    SET_GPR_U32(ctx, 31, 0x4E3878u);
    ctx->pc = 0x4E3874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3870u;
    // 0x4e3874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA98u, 0x4E3870u, 0x4E3878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3878u;
label_4e3878:
    // 0x4e3878: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4E3878u;
    {
        const bool branch_taken_0x4e3878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3878u;
        // 0x4e387c: 0xa6b20000  sh          $s2, 0x0($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3878) {
            ctx->pc = 0x4E389Cu;
            goto label_4e389c;
        }
    }
    ctx->pc = 0x4E3880u;
label_4e3880:
    // 0x4e3880: 0xc127ef0  jal         func_49FBC0
    ctx->pc = 0x4E3880u;
    SET_GPR_U32(ctx, 31, 0x4E3888u);
    ctx->pc = 0x4E3884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3880u;
    // 0x4e3884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FBC0u, 0x4E3880u, 0x4E3888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3888u;
label_4e3888:
    // 0x4e3888: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4E3888u;
    {
        const bool branch_taken_0x4e3888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3888u;
        // 0x4e388c: 0xa6b20000  sh          $s2, 0x0($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3888) {
            ctx->pc = 0x4E389Cu;
            goto label_4e389c;
        }
    }
    ctx->pc = 0x4E3890u;
label_4e3890:
    // 0x4e3890: 0xc127f40  jal         func_49FD00
    ctx->pc = 0x4E3890u;
    SET_GPR_U32(ctx, 31, 0x4E3898u);
    ctx->pc = 0x4E3894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3890u;
    // 0x4e3894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FD00u, 0x4E3890u, 0x4E3898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3898u;
label_4e3898:
    // 0x4e3898: 0xa6b20000  sh          $s2, 0x0($s5)
    ctx->pc = 0x4e3898u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 18));
label_4e389c:
    // 0x4e389c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e389cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e38a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e38a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e38a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e38a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e38a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e38a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e38ac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e38acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e38b0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e38b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e38b4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e38b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e38b8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e38b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e38bc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4e38bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e38c0: 0x8138e32  j           func_4E38C8
    ctx->pc = 0x4E38C0u;
    ctx->pc = 0x4E38C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E38C0u;
    // 0x4e38c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E38C8u;
    goto label_4e38c8;
    ctx->pc = 0x4E38C8u;
label_4e38c8:
    // 0x4e38c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e38c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4e38cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e38ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e38d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e38d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4e38d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e38d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4e38d8: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4E38D8u;
    SET_GPR_U32(ctx, 31, 0x4E38E0u);
    ctx->pc = 0x4E38DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E38D8u;
    // 0x4e38dc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4E38D8u, 0x4E38E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E38E0u;
label_4e38e0:
    // 0x4e38e0: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e38e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e38e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e38e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e38e8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x4E38E8u;
    {
        const bool branch_taken_0x4e38e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E38ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E38E8u;
        // 0x4e38ec: 0x24661194  addiu       $a2, $v1, 0x1194 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e38e8) {
            ctx->pc = 0x4E3968u;
            goto label_4e3968;
        }
    }
    ctx->pc = 0x4E38F0u;
    // 0x4e38f0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4e38f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4e38f4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x4e38f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e38f8: 0x8c45119c  lw          $a1, 0x119C($v0)
    ctx->pc = 0x4e38f8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F119Cu));
    // 0x4e38fc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4e38fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e3900: 0x84a30018  lh          $v1, 0x18($a1)
    ctx->pc = 0x4e3900u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x4e3904: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4e3904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4e3908: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e3908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e390c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4e390cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4e3910: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4e3910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4e3914: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4e3914u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4e3918: 0xc12b280  jal         func_4ACA00
    ctx->pc = 0x4E3918u;
    SET_GPR_U32(ctx, 31, 0x4E3920u);
    ctx->pc = 0x4E391Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3918u;
    // 0x4e391c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ACA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ACA00u, 0x4E3918u, 0x4E3920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3920u;
label_4e3920:
    // 0x4e3920: 0xc12b3d4  jal         func_4ACF50
    ctx->pc = 0x4E3920u;
    SET_GPR_U32(ctx, 31, 0x4E3928u);
    ctx->pc = 0x4E3924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3920u;
    // 0x4e3924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ACF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ACF50u, 0x4E3920u, 0x4E3928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3928u;
label_4e3928:
    // 0x4e3928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e3928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e392c: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4E392Cu;
    SET_GPR_U32(ctx, 31, 0x4E3934u);
    ctx->pc = 0x4E3930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E392Cu;
    // 0x4e3930: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4E392Cu, 0x4E3934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3934u;
label_4e3934:
    // 0x4e3934: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e3934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e3938: 0x14510005  bne         $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E3938u;
    {
        const bool branch_taken_0x4e3938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x4E393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3938u;
        // 0x4e393c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3938) {
            ctx->pc = 0x4E3950u;
            goto label_4e3950;
        }
    }
    ctx->pc = 0x4E3940u;
    // 0x4e3940: 0xc138ada  jal         func_4E2B68
    ctx->pc = 0x4E3940u;
    SET_GPR_U32(ctx, 31, 0x4E3948u);
    ctx->pc = 0x4E2B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E2B68u, 0x4E3940u, 0x4E3948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3948u;
label_4e3948:
    // 0x4e3948: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4E3948u;
    {
        const bool branch_taken_0x4e3948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E394Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3948u;
        // 0x4e394c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3948) {
            ctx->pc = 0x4E396Cu;
            goto label_4e396c;
        }
    }
    ctx->pc = 0x4E3950u;
label_4e3950:
    // 0x4e3950: 0xc1280fa  jal         func_4A03E8
    ctx->pc = 0x4E3950u;
    SET_GPR_U32(ctx, 31, 0x4E3958u);
    ctx->pc = 0x4A03E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A03E8u, 0x4E3950u, 0x4E3958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3958u;
label_4e3958:
    // 0x4e3958: 0x54510004  bnel        $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4E3958u;
    {
        const bool branch_taken_0x4e3958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x4e3958) {
            ctx->pc = 0x4E395Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3958u;
            // 0x4e395c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E396Cu;
            goto label_4e396c;
        }
    }
    ctx->pc = 0x4E3960u;
    // 0x4e3960: 0xc138aea  jal         func_4E2BA8
    ctx->pc = 0x4E3960u;
    SET_GPR_U32(ctx, 31, 0x4E3968u);
    ctx->pc = 0x4E3964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3960u;
    // 0x4e3964: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E2BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E2BA8u, 0x4E3960u, 0x4E3968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3968u;
label_4e3968:
    // 0x4e3968: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e3968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e396c:
    // 0x4e396c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e396cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e3970: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e3970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e3974: 0x3e00008  jr          $ra
    ctx->pc = 0x4E3974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E3978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3974u;
        // 0x4e3978: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E3974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E397Cu;
    // 0x4e397c: 0x0  nop
    ctx->pc = 0x4e397cu;
    // NOP
    ctx->pc = 0x4e3980u;
}
