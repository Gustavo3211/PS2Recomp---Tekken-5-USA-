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

// Function: sub_004BF218
// Address: 0x4bf218 - 0x4bfdc0
void sub_004BF218_0x4bf218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BF218_0x4bf218");
#endif

    switch (ctx->pc) {
        case 0x4bf230u: goto label_4bf230;
        case 0x4bf240u: goto label_4bf240;
        case 0x4bf254u: goto label_4bf254;
        case 0x4bf2f0u: goto label_4bf2f0;
        case 0x4bf434u: goto label_4bf434;
        case 0x4bf494u: goto label_4bf494;
        case 0x4bf5a0u: goto label_4bf5a0;
        case 0x4bf638u: goto label_4bf638;
        case 0x4bf6acu: goto label_4bf6ac;
        case 0x4bf804u: goto label_4bf804;
        case 0x4bf918u: goto label_4bf918;
        case 0x4bfa1cu: goto label_4bfa1c;
        case 0x4bfa5cu: goto label_4bfa5c;
        case 0x4bfad4u: goto label_4bfad4;
        case 0x4bfadcu: goto label_4bfadc;
        case 0x4bfc10u: goto label_4bfc10;
        case 0x4bfc78u: goto label_4bfc78;
        case 0x4bfd50u: goto label_4bfd50;
        case 0x4bfd60u: goto label_4bfd60;
        case 0x4bfd70u: goto label_4bfd70;
        case 0x4bfd80u: goto label_4bfd80;
        default: break;
    }

    ctx->pc = 0x4bf218u;

    // 0x4bf218: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bf218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bf21c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bf21cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bf220: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bf220u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bf224: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4bf224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bf228: 0x812fe82  j           func_4BFA08
    ctx->pc = 0x4BF228u;
    ctx->pc = 0x4BF22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF228u;
    // 0x4bf22c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BFA08u;
    goto label_4bfa08;
    ctx->pc = 0x4BF230u;
label_4bf230:
    // 0x4bf230: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bf230u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bf234: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4bf234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bf238: 0x3e00008  jr          $ra
    ctx->pc = 0x4BF238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BF23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF238u;
        // 0x4bf23c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BF238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BF240u;
label_4bf240:
    // 0x4bf240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4bf240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4bf244: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4bf244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4bf248: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4bf248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4bf24c: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4BF24Cu;
    SET_GPR_U32(ctx, 31, 0x4BF254u);
    ctx->pc = 0x4BF250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF24Cu;
    // 0x4bf250: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4BF24Cu, 0x4BF254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BF254u;
label_4bf254:
    // 0x4bf254: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4bf254u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4bf258: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x4bf258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x4bf25c: 0x24e70e74  addiu       $a3, $a3, 0xE74
    ctx->pc = 0x4bf25cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3700));
    // 0x4bf260: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4bf260u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4bf264: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4bf264u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0E74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0E74u, _value); } while (0);
    // 0x4bf268: 0x24c60e6c  addiu       $a2, $a2, 0xE6C
    ctx->pc = 0x4bf268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3692));
    // 0x4bf26c: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4bf26cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4bf270: 0x260801bc  addiu       $t0, $s0, 0x1BC
    ctx->pc = 0x4bf270u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4bf274: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bf274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bf278: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4bf278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bf27c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4bf27cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0E74u));
    // 0x4bf280: 0xac500140  sw          $s0, 0x140($v0)
    ctx->pc = 0x4bf280u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 16));
    // 0x4bf284: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4bf284u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0E6Cu));
    // 0x4bf288: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x4bf288u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0E74u));
    // 0x4bf28c: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x4bf28cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x4bf290: 0xa4a2015e  sh          $v0, 0x15E($a1)
    ctx->pc = 0x4bf290u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bf294: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4bf294u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0E6Cu));
    // 0x4bf298: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x4bf298u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0E74u));
    // 0x4bf29c: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x4bf29cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x4bf2a0: 0xa4a20160  sh          $v0, 0x160($a1)
    ctx->pc = 0x4bf2a0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 352), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bf2a4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4bf2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0E6Cu));
    // 0x4bf2a8: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x4bf2a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4bf2ac: 0xa6020158  sh          $v0, 0x158($s0)
    ctx->pc = 0x4bf2acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 344), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bf2b0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4bf2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0E6Cu));
    // 0x4bf2b4: 0x9462000a  lhu         $v0, 0xA($v1)
    ctx->pc = 0x4bf2b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x4bf2b8: 0xa6020166  sh          $v0, 0x166($s0)
    ctx->pc = 0x4bf2b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 358), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bf2bc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4bf2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0E6Cu));
    // 0x4bf2c0: 0x9462000c  lhu         $v0, 0xC($v1)
    ctx->pc = 0x4bf2c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4bf2c4: 0xa6020168  sh          $v0, 0x168($s0)
    ctx->pc = 0x4bf2c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 360), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bf2c8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4bf2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0E6Cu));
    // 0x4bf2cc: 0x94650016  lhu         $a1, 0x16($v1)
    ctx->pc = 0x4bf2ccu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
    // 0x4bf2d0: 0xa6050160  sh          $a1, 0x160($s0)
    ctx->pc = 0x4bf2d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 5));
    // 0x4bf2d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bf2d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bf2d8: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4bf2d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4bf2dc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4bf2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4bf2e0: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x4bf2e0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bf2e4: 0x812fcbc  j           func_4BF2F0
    ctx->pc = 0x4BF2E4u;
    ctx->pc = 0x4BF2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF2E4u;
    // 0x4bf2e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BF2F0u;
    goto label_4bf2f0;
    ctx->pc = 0x4BF2ECu;
    // 0x4bf2ec: 0x0  nop
    ctx->pc = 0x4bf2ecu;
    // NOP
label_4bf2f0:
    // 0x4bf2f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4bf2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4bf2f4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4bf2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4bf2f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4bf2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4bf2fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4bf2fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bf300: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4bf300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4bf304: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4bf304u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4bf308: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4bf308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4bf30c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4bf30cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4bf310: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4bf310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4bf314: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4bf314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4bf318: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4bf318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4bf31c: 0x24750e60  addiu       $s5, $v1, 0xE60
    ctx->pc = 0x4bf31cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 3680));
    // 0x4bf320: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4bf320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4bf324: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x4bf324u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4bf328: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4bf328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x4bf32c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4bf32cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4bf330: 0x8c490e70  lw          $t1, 0xE70($v0)
    ctx->pc = 0x4bf330u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x7F0E70u));
    // 0x4bf334: 0x24740e64  addiu       $s4, $v1, 0xE64
    ctx->pc = 0x4bf334u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 3684));
    // 0x4bf338: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x4bf338u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0E60u));
    // 0x4bf33c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4bf33cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4bf340: 0x85220002  lh          $v0, 0x2($t1)
    ctx->pc = 0x4bf340u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x4bf344: 0x24730e68  addiu       $s3, $v1, 0xE68
    ctx->pc = 0x4bf344u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 3688));
    // 0x4bf348: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4bf348u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4bf34c: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x4bf34cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0E64u));
    // 0x4bf350: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4bf350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4bf354: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4bf354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4bf358: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4bf358u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4bf35c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4bf35cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4bf360: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4bf360u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x4bf364: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4bf364u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4bf368: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x4bf368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x4bf36c: 0x8c6a0e6c  lw          $t2, 0xE6C($v1)
    ctx->pc = 0x4bf36cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3692)));
    // 0x4bf370: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4bf370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4bf374: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4bf374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4bf378: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x4bf378u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4bf37c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bf37cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bf380: 0x86a80000  lh          $t0, 0x0($s5)
    ctx->pc = 0x4bf380u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4bf384: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4bf384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4bf388: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4bf388u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4bf38c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4bf38cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4bf390: 0x24720e5c  addiu       $s2, $v1, 0xE5C
    ctx->pc = 0x4bf390u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 3676));
    // 0x4bf394: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x4bf394u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x4bf398: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4bf398u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4bf39c: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x4bf39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x4bf3a0: 0x86840000  lh          $a0, 0x0($s4)
    ctx->pc = 0x4bf3a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4bf3a4: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4bf3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4bf3a8: 0x8e490000  lw          $t1, 0x0($s2)
    ctx->pc = 0x4bf3a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4bf3ac: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bf3acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bf3b0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4bf3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4bf3b4: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4bf3b4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4bf3b8: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4bf3b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4bf3bc: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4bf3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x4bf3c0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4bf3c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4bf3c4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4bf3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4bf3c8: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x4bf3c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4bf3cc: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4bf3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4bf3d0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bf3d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bf3d4: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x4bf3d4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4bf3d8: 0x1114025  or          $t0, $t0, $s1
    ctx->pc = 0x4bf3d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 17));
    // 0x4bf3dc: 0xa82824  and         $a1, $a1, $t0
    ctx->pc = 0x4bf3dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x4bf3e0: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4bf3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x4bf3e4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x4bf3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4bf3e8: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4bf3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4bf3ec: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bf3ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bf3f0: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4bf3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4bf3f4: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4bf3f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x4bf3f8: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x4bf3f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x4bf3fc: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x4bf3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x4bf400: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x4bf400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4bf404: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4bf404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4bf408: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bf408u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bf40c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4bf40cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4bf410: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4bf410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4bf414: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x4bf414u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4bf418: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4bf418u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x4bf41c: 0x85420010  lh          $v0, 0x10($t2)
    ctx->pc = 0x4bf41cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x4bf420: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4bf420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4bf424: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x4bf424u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4bf428: 0xae490000  sw          $t1, 0x0($s2)
    ctx->pc = 0x4bf428u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 9));
    // 0x4bf42c: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4BF42Cu;
    SET_GPR_U32(ctx, 31, 0x4BF434u);
    ctx->pc = 0x4BF430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF42Cu;
    // 0x4bf430: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4BF42Cu, 0x4BF434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BF434u;
label_4bf434:
    // 0x4bf434: 0x5456000c  bnel        $v0, $s6, . + 4 + (0xC << 2)
    ctx->pc = 0x4BF434u;
    {
        const bool branch_taken_0x4bf434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x4bf434) {
            ctx->pc = 0x4BF438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BF434u;
            // 0x4bf438: 0x86420000  lh          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BF468u;
            goto label_4bf468;
        }
    }
    ctx->pc = 0x4BF43Cu;
    // 0x4bf43c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bf43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bf440: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bf440u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bf444: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bf444u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bf448: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4bf448u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bf44c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4bf44cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4bf450: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4bf450u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bf454: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4bf454u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4bf458: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4bf458u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4bf45c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4bf45cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4bf460: 0x812fe82  j           func_4BFA08
    ctx->pc = 0x4BF460u;
    ctx->pc = 0x4BF464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF460u;
    // 0x4bf464: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BFA08u;
    goto label_4bfa08;
    ctx->pc = 0x4BF468u;
label_4bf468:
    // 0x4bf468: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4bf468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4bf46c: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x4bf46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x4bf470: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x4bf470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4bf474: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bf474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bf478: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4bf478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4bf47c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bf47cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bf480: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x4bf480u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4bf484: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x4bf484u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4bf488: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4bf488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bf48c: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4BF48Cu;
    SET_GPR_U32(ctx, 31, 0x4BF494u);
    ctx->pc = 0x4BF490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF48Cu;
    // 0x4bf490: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4BF48Cu, 0x4BF494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BF494u;
label_4bf494:
    // 0x4bf494: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4BF494u;
    {
        const bool branch_taken_0x4bf494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BF498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF494u;
        // 0x4bf498: 0x260301b8  addiu       $v1, $s0, 0x1B8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf494) {
            ctx->pc = 0x4BF4C8u;
            goto label_4bf4c8;
        }
    }
    ctx->pc = 0x4BF49Cu;
    // 0x4bf49c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bf49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bf4a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bf4a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bf4a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bf4a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bf4a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4bf4a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bf4ac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4bf4acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4bf4b0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4bf4b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bf4b4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4bf4b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4bf4b8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4bf4b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4bf4bc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4bf4bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4bf4c0: 0x812fe82  j           func_4BFA08
    ctx->pc = 0x4BF4C0u;
    ctx->pc = 0x4BF4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF4C0u;
    // 0x4bf4c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BFA08u;
    goto label_4bfa08;
    ctx->pc = 0x4BF4C8u;
label_4bf4c8:
    // 0x4bf4c8: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4bf4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4bf4cc: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4bf4ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4bf4d0: 0x24c60e58  addiu       $a2, $a2, 0xE58
    ctx->pc = 0x4bf4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3672));
    // 0x4bf4d4: 0x26050166  addiu       $a1, $s0, 0x166
    ctx->pc = 0x4bf4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 358));
    // 0x4bf4d8: 0x26070168  addiu       $a3, $s0, 0x168
    ctx->pc = 0x4bf4d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 360));
    // 0x4bf4dc: 0xa6020164  sh          $v0, 0x164($s0)
    ctx->pc = 0x4bf4dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 356), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bf4e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4bf4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4bf4e4: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4bf4e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bf4e8: 0x260801bc  addiu       $t0, $s0, 0x1BC
    ctx->pc = 0x4bf4e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4bf4ec: 0xa616002e  sh          $s6, 0x2E($s0)
    ctx->pc = 0x4bf4ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 22));
    // 0x4bf4f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bf4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bf4f4: 0xa600015c  sh          $zero, 0x15C($s0)
    ctx->pc = 0x4bf4f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 348), (uint16_t)GPR_U32(ctx, 0));
    // 0x4bf4f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4bf4f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bf4fc: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4bf4fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4bf500: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4bf500u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0E58u));
    // 0x4bf504: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4bf504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4bf508: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bf508u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bf50c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bf50cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bf510: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4bf510u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4bf514: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bf514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bf518: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4bf518u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bf51c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4bf51cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4bf520: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bf520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bf524: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4bf524u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4bf528: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4bf528u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4bf52c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4bf52cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4bf530: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4bf530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4bf534: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4bf534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4bf538: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4bf538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4bf53c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bf53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bf540: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4bf540u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4bf544: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4bf544u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4bf548: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4bf548u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bf54c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4bf54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4bf550: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4bf550u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4bf554: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bf554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bf558: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4bf558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4bf55c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bf55cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bf560: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4bf560u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4bf564: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bf564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bf568: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4bf568u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4bf56c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4bf56cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4bf570: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4bf570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4bf574: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bf574u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bf578: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bf578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bf57c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4bf57cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4bf580: 0x94c50000  lhu         $a1, 0x0($a2)
    ctx->pc = 0x4bf580u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4bf584: 0xa4e50000  sh          $a1, 0x0($a3)
    ctx->pc = 0x4bf584u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x4bf588: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4bf588u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4bf58c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4bf58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4bf590: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x4bf590u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bf594: 0x812fd68  j           func_4BF5A0
    ctx->pc = 0x4BF594u;
    ctx->pc = 0x4BF598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF594u;
    // 0x4bf598: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BF5A0u;
    goto label_4bf5a0;
    ctx->pc = 0x4BF59Cu;
    // 0x4bf59c: 0x0  nop
    ctx->pc = 0x4bf59cu;
    // NOP
label_4bf5a0:
    // 0x4bf5a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4bf5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4bf5a4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4bf5a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bf5a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4bf5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4bf5ac: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4bf5acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4bf5b0: 0x24a50e58  addiu       $a1, $a1, 0xE58
    ctx->pc = 0x4bf5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3672));
    // 0x4bf5b4: 0x250a0162  addiu       $t2, $t0, 0x162
    ctx->pc = 0x4bf5b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 354));
    // 0x4bf5b8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4bf5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0E58u));
    // 0x4bf5bc: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4bf5bcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4bf5c0: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4bf5c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4bf5c4: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4bf5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4bf5c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bf5c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bf5cc: 0x8cc70e6c  lw          $a3, 0xE6C($a2)
    ctx->pc = 0x4bf5ccu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F0E6Cu));
    // 0x4bf5d0: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4bf5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4bf5d4: 0x250801bc  addiu       $t0, $t0, 0x1BC
    ctx->pc = 0x4bf5d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 444));
    // 0x4bf5d8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bf5d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bf5dc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4bf5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4bf5e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bf5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bf5e4: 0x84e60012  lh          $a2, 0x12($a3)
    ctx->pc = 0x4bf5e4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 18)));
    // 0x4bf5e8: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4bf5e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4bf5ec: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4bf5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4bf5f0: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4bf5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4bf5f4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bf5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bf5f8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4bf5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4bf5fc: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4bf5fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4bf600: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x4bf600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bf604: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4BF604u;
    {
        const bool branch_taken_0x4bf604 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4BF608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF604u;
        // 0x4bf608: 0xa5420000  sh          $v0, 0x0($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf604) {
            ctx->pc = 0x4BF618u;
            goto label_4bf618;
        }
    }
    ctx->pc = 0x4BF60Cu;
    // 0x4bf60c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4bf60cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bf610: 0x812fe82  j           func_4BFA08
    ctx->pc = 0x4BF610u;
    ctx->pc = 0x4BF614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF610u;
    // 0x4bf614: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BFA08u;
    goto label_4bfa08;
    ctx->pc = 0x4BF618u;
label_4bf618:
    // 0x4bf618: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x4bf618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x4bf61c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4bf61cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bf620: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x4bf620u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4bf624: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4bf624u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4bf628: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4bf628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4bf62c: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x4bf62cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bf630: 0x812fd8e  j           func_4BF638
    ctx->pc = 0x4BF630u;
    ctx->pc = 0x4BF634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF630u;
    // 0x4bf634: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BF638u;
    goto label_4bf638;
    ctx->pc = 0x4BF638u;
label_4bf638:
    // 0x4bf638: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4bf638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4bf63c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4bf63cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4bf640: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4bf640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4bf644: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x4bf644u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x4bf648: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4bf648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4bf64c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4bf64cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bf650: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4bf650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4bf654: 0x24750e58  addiu       $s5, $v1, 0xE58
    ctx->pc = 0x4bf654u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 3672));
    // 0x4bf658: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4bf658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4bf65c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4bf65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4bf660: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4bf660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4bf664: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4bf664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4bf668: 0x868201b6  lh          $v0, 0x1B6($s4)
    ctx->pc = 0x4bf668u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 438)));
    // 0x4bf66c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4bf66cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0E58u));
    // 0x4bf670: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4bf670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4bf674: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bf674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bf678: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bf678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bf67c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4bf67cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4bf680: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bf680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bf684: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x4bf684u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4bf688: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x4bf688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x4bf68c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4bf68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4bf690: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bf690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bf694: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4bf694u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4bf698: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x4bf698u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4bf69c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4BF69Cu;
    {
        const bool branch_taken_0x4bf69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bf69c) {
            ctx->pc = 0x4BF6A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BF69Cu;
            // 0x4bf6a0: 0x8e820010  lw          $v0, 0x10($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BF6B0u;
            goto label_4bf6b0;
        }
    }
    ctx->pc = 0x4BF6A4u;
    // 0x4bf6a4: 0xc12b6bc  jal         func_4ADAF0
    ctx->pc = 0x4BF6A4u;
    SET_GPR_U32(ctx, 31, 0x4BF6ACu);
    ctx->pc = 0x4ADAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADAF0u, 0x4BF6A4u, 0x4BF6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BF6ACu;
label_4bf6ac:
    // 0x4bf6ac: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x4bf6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_4bf6b0:
    // 0x4bf6b0: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4bf6b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4bf6b4: 0x24e70e60  addiu       $a3, $a3, 0xE60
    ctx->pc = 0x4bf6b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3680));
    // 0x4bf6b8: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4bf6b8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4bf6bc: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4bf6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0E60u));
    // 0x4bf6c0: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4bf6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4bf6c4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bf6c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bf6c8: 0x258c0e64  addiu       $t4, $t4, 0xE64
    ctx->pc = 0x4bf6c8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 3684));
    // 0x4bf6cc: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4bf6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4bf6d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bf6d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bf6d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bf6d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bf6d8: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x4bf6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4bf6dc: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4bf6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4bf6e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bf6e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bf6e4: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4bf6e4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4bf6e8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4bf6e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4bf6ec: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x4bf6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x4bf6f0: 0x25ad0e68  addiu       $t5, $t5, 0xE68
    ctx->pc = 0x4bf6f0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 3688));
    // 0x4bf6f4: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4bf6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4bf6f8: 0x8da50000  lw          $a1, 0x0($t5)
    ctx->pc = 0x4bf6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0E68u));
    // 0x4bf6fc: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4bf6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4bf700: 0x8cd00e70  lw          $s0, 0xE70($a2)
    ctx->pc = 0x4bf700u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3696)));
    // 0x4bf704: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bf704u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bf708: 0x84e90000  lh          $t1, 0x0($a3)
    ctx->pc = 0x4bf708u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4bf70c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4bf70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4bf710: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x4bf710u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x4bf714: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4bf714u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4bf718: 0x24c6d680  addiu       $a2, $a2, -0x2980
    ctx->pc = 0x4bf718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956672));
    // 0x4bf71c: 0xad840000  sw          $a0, 0x0($t4)
    ctx->pc = 0x4bf71cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
    // 0x4bf720: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4bf720u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4bf724: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4bf724u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4bf728: 0x24d2249c  addiu       $s2, $a2, 0x249C
    ctx->pc = 0x4bf728u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 9372));
    // 0x4bf72c: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x4bf72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x4bf730: 0x24d12494  addiu       $s1, $a2, 0x2494
    ctx->pc = 0x4bf730u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 9364));
    // 0x4bf734: 0x24c62498  addiu       $a2, $a2, 0x2498
    ctx->pc = 0x4bf734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9368));
    // 0x4bf738: 0x858a0000  lh          $t2, 0x0($t4)
    ctx->pc = 0x4bf738u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4bf73c: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4bf73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4bf740: 0x8e2b0000  lw          $t3, 0x0($s1)
    ctx->pc = 0x4bf740u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4bf744: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bf744u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bf748: 0x8cce0000  lw          $t6, 0x0($a2)
    ctx->pc = 0x4bf748u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4bf74c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4bf74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4bf750: 0x8e4f0000  lw          $t7, 0x0($s2)
    ctx->pc = 0x4bf750u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4bf754: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4bf754u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4bf758: 0x1735825  or          $t3, $t3, $s3
    ctx->pc = 0x4bf758u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 19));
    // 0x4bf75c: 0xada50000  sw          $a1, 0x0($t5)
    ctx->pc = 0x4bf75cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 5));
    // 0x4bf760: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4bf760u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4bf764: 0x1d37025  or          $t6, $t6, $s3
    ctx->pc = 0x4bf764u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 19));
    // 0x4bf768: 0x1f37825  or          $t7, $t7, $s3
    ctx->pc = 0x4bf768u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 19));
    // 0x4bf76c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4bf76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4bf770: 0x85a80000  lh          $t0, 0x0($t5)
    ctx->pc = 0x4bf770u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4bf774: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4bf774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4bf778: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bf778u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bf77c: 0x1224823  subu        $t1, $t1, $v0
    ctx->pc = 0x4bf77cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4bf780: 0x1334825  or          $t1, $t1, $s3
    ctx->pc = 0x4bf780u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 19));
    // 0x4bf784: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x4bf784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x4bf788: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4bf788u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4bf78c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4bf78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4bf790: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x4bf790u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4bf794: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4bf794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4bf798: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bf798u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bf79c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4bf79cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4bf7a0: 0x1425023  subu        $t2, $t2, $v0
    ctx->pc = 0x4bf7a0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x4bf7a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bf7a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bf7a8: 0x1535025  or          $t2, $t2, $s3
    ctx->pc = 0x4bf7a8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 19));
    // 0x4bf7ac: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x4bf7acu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x4bf7b0: 0x8a2024  and         $a0, $a0, $t2
    ctx->pc = 0x4bf7b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 10));
    // 0x4bf7b4: 0xad840000  sw          $a0, 0x0($t4)
    ctx->pc = 0x4bf7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
    // 0x4bf7b8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4bf7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4bf7bc: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x4bf7bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4bf7c0: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4bf7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4bf7c4: 0xae2b0000  sw          $t3, 0x0($s1)
    ctx->pc = 0x4bf7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 11));
    // 0x4bf7c8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bf7c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bf7cc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4bf7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4bf7d0: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x4bf7d0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4bf7d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bf7d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bf7d8: 0x1134025  or          $t0, $t0, $s3
    ctx->pc = 0x4bf7d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 19));
    // 0x4bf7dc: 0x1c37024  and         $t6, $t6, $v1
    ctx->pc = 0x4bf7dcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 3));
    // 0x4bf7e0: 0xa82824  and         $a1, $a1, $t0
    ctx->pc = 0x4bf7e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x4bf7e4: 0xacce0000  sw          $t6, 0x0($a2)
    ctx->pc = 0x4bf7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 14));
    // 0x4bf7e8: 0xada50000  sw          $a1, 0x0($t5)
    ctx->pc = 0x4bf7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 5));
    // 0x4bf7ec: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x4bf7ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4bf7f0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bf7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bf7f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bf7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bf7f8: 0x1e27824  and         $t7, $t7, $v0
    ctx->pc = 0x4bf7f8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 2));
    // 0x4bf7fc: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4BF7FCu;
    SET_GPR_U32(ctx, 31, 0x4BF804u);
    ctx->pc = 0x4BF800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF7FCu;
    // 0x4bf800: 0xae4f0000  sw          $t7, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4BF7FCu, 0x4BF804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BF804u;
label_4bf804:
    // 0x4bf804: 0x2683014a  addiu       $v1, $s4, 0x14A
    ctx->pc = 0x4bf804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 330));
    // 0x4bf808: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4bf808u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4bf80c: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4bf80cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4bf810: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4bf810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4bf814: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4bf814u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bf818: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bf818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bf81c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bf81cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bf820: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4bf820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4bf824: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4bf824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4bf828: 0x8c850e6c  lw          $a1, 0xE6C($a0)
    ctx->pc = 0x4bf828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3692)));
    // 0x4bf82c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bf82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bf830: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bf830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bf834: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4bf834u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4bf838: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bf838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bf83c: 0x94a40014  lhu         $a0, 0x14($a1)
    ctx->pc = 0x4bf83cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x4bf840: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x4bf840u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4bf844: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4bf844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4bf848: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bf848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bf84c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bf84cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bf850: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4bf850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4bf854: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bf854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bf858: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4bf858u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4bf85c: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x4bf85cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4bf860: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4BF860u;
    {
        const bool branch_taken_0x4bf860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BF864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF860u;
        // 0x4bf864: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf860) {
            ctx->pc = 0x4BF890u;
            goto label_4bf890;
        }
    }
    ctx->pc = 0x4BF868u;
    // 0x4bf868: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4bf868u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bf86c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bf86cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bf870: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bf870u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bf874: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4bf874u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bf878: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4bf878u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4bf87c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4bf87cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4bf880: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4bf880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4bf884: 0x812fe92  j           func_4BFA48
    ctx->pc = 0x4BF884u;
    ctx->pc = 0x4BF888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF884u;
    // 0x4bf888: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BFA48u;
    goto label_4bfa48;
    ctx->pc = 0x4BF88Cu;
    // 0x4bf88c: 0x0  nop
    ctx->pc = 0x4bf88cu;
    // NOP
label_4bf890:
    // 0x4bf890: 0x26840160  addiu       $a0, $s4, 0x160
    ctx->pc = 0x4bf890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 352));
    // 0x4bf894: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4bf894u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4bf898: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4BF898u;
    {
        const bool branch_taken_0x4bf898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BF89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF898u;
        // 0x4bf89c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf898) {
            ctx->pc = 0x4BF8D8u;
            goto label_4bf8d8;
        }
    }
    ctx->pc = 0x4BF8A0u;
    // 0x4bf8a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4bf8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4bf8a4: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4bf8a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bf8a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4bf8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bf8ac: 0xa683016a  sh          $v1, 0x16A($s4)
    ctx->pc = 0x4bf8acu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 362), (uint16_t)GPR_U32(ctx, 3));
    // 0x4bf8b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bf8b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bf8b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bf8b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bf8b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4bf8b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bf8bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4bf8bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4bf8c0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4bf8c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bf8c4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4bf8c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4bf8c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4bf8c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4bf8cc: 0x812fe92  j           func_4BFA48
    ctx->pc = 0x4BF8CCu;
    ctx->pc = 0x4BF8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF8CCu;
    // 0x4bf8d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BFA48u;
    goto label_4bfa48;
    ctx->pc = 0x4BF8D4u;
    // 0x4bf8d4: 0x0  nop
    ctx->pc = 0x4bf8d4u;
    // NOP
label_4bf8d8:
    // 0x4bf8d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4bf8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4bf8dc: 0x268301bc  addiu       $v1, $s4, 0x1BC
    ctx->pc = 0x4bf8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 444));
    // 0x4bf8e0: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4bf8e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bf8e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4bf8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bf8e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bf8e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bf8ec: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4bf8ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4bf8f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bf8f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bf8f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4bf8f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bf8f8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4bf8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4bf8fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4bf8fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4bf900: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4bf900u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bf904: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4bf904u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4bf908: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4bf908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4bf90c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4bf90cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bf910: 0x812fe46  j           func_4BF918
    ctx->pc = 0x4BF910u;
    ctx->pc = 0x4BF914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF910u;
    // 0x4bf914: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BF918u;
    goto label_4bf918;
    ctx->pc = 0x4BF918u;
label_4bf918:
    // 0x4bf918: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4bf918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4bf91c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4bf91cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bf920: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4bf920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4bf924: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x4bf924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x4bf928: 0xa503015e  sh          $v1, 0x15E($t0)
    ctx->pc = 0x4bf928u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 350), (uint16_t)GPR_U32(ctx, 3));
    // 0x4bf92c: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4bf92cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4bf930: 0x95020164  lhu         $v0, 0x164($t0)
    ctx->pc = 0x4bf930u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 356)));
    // 0x4bf934: 0x24e70e58  addiu       $a3, $a3, 0xE58
    ctx->pc = 0x4bf934u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3672));
    // 0x4bf938: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4bf938u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4bf93c: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x4bf93cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x4bf940: 0xa50201b8  sh          $v0, 0x1B8($t0)
    ctx->pc = 0x4bf940u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 440), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bf944: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bf944u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bf948: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bf948u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bf94c: 0x240a000a  addiu       $t2, $zero, 0xA
    ctx->pc = 0x4bf94cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4bf950: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4bf950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4bf954: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4bf954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4bf958: 0x8cabf988  lw          $t3, -0x678($a1)
    ctx->pc = 0x4bf958u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294965640)));
    // 0x4bf95c: 0x240d0004  addiu       $t5, $zero, 0x4
    ctx->pc = 0x4bf95cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4bf960: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bf960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bf964: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4bf964u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4bf968: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bf968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bf96c: 0x25290e6c  addiu       $t1, $t1, 0xE6C
    ctx->pc = 0x4bf96cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3692));
    // 0x4bf970: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4bf970u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4bf974: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bf974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bf978: 0x250c01bc  addiu       $t4, $t0, 0x1BC
    ctx->pc = 0x4bf978u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), 444));
    // 0x4bf97c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4bf97cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bf980: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4bf980u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4bf984: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4bf984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4bf988: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4bf988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4bf98c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bf98cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bf990: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4bf990u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4bf994: 0x850601ba  lh          $a2, 0x1BA($t0)
    ctx->pc = 0x4bf994u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 442)));
    // 0x4bf998: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4bf998u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4bf99c: 0xca001a  div         $zero, $a2, $t2
    ctx->pc = 0x4bf99cu;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x4bf9a0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bf9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bf9a4: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4bf9a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4bf9a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4bf9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4bf9ac: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x4bf9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x4bf9b0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4bf9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4bf9b4: 0x3012  mflo        $a2
    ctx->pc = 0x4bf9b4u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x4bf9b8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x4bf9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4bf9bc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4bf9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4bf9c0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4bf9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4bf9c4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x4bf9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4bf9c8: 0x94a2fffe  lhu         $v0, -0x2($a1)
    ctx->pc = 0x4bf9c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294967294)));
    // 0x4bf9cc: 0xa50d002e  sh          $t5, 0x2E($t0)
    ctx->pc = 0x4bf9ccu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 46), (uint16_t)GPR_U32(ctx, 13));
    // 0x4bf9d0: 0xa502015c  sh          $v0, 0x15C($t0)
    ctx->pc = 0x4bf9d0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 348), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bf9d4: 0xa5000162  sh          $zero, 0x162($t0)
    ctx->pc = 0x4bf9d4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 354), (uint16_t)GPR_U32(ctx, 0));
    // 0x4bf9d8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4bf9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4bf9dc: 0x9443000a  lhu         $v1, 0xA($v0)
    ctx->pc = 0x4bf9dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x4bf9e0: 0xa5030166  sh          $v1, 0x166($t0)
    ctx->pc = 0x4bf9e0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 358), (uint16_t)GPR_U32(ctx, 3));
    // 0x4bf9e4: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4bf9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4bf9e8: 0x9443000c  lhu         $v1, 0xC($v0)
    ctx->pc = 0x4bf9e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4bf9ec: 0xa5030168  sh          $v1, 0x168($t0)
    ctx->pc = 0x4bf9ecu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 360), (uint16_t)GPR_U32(ctx, 3));
    // 0x4bf9f0: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4bf9f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4bf9f4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4bf9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4bf9f8: 0xa5820000  sh          $v0, 0x0($t4)
    ctx->pc = 0x4bf9f8u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bf9fc: 0x812fe82  j           func_4BFA08
    ctx->pc = 0x4BF9FCu;
    ctx->pc = 0x4BFA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF9FCu;
    // 0x4bfa00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BFA08u;
    goto label_4bfa08;
    ctx->pc = 0x4BFA04u;
    // 0x4bfa04: 0x0  nop
    ctx->pc = 0x4bfa04u;
    // NOP
label_4bfa08:
    // 0x4bfa08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4bfa08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4bfa0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4bfa0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4bfa10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4bfa10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4bfa14: 0xc12564a  jal         func_495928
    ctx->pc = 0x4BFA14u;
    SET_GPR_U32(ctx, 31, 0x4BFA1Cu);
    ctx->pc = 0x4BFA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BFA14u;
    // 0x4bfa18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x495928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495928u, 0x4BFA14u, 0x4BFA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BFA1Cu;
label_4bfa1c:
    // 0x4bfa1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4BFA1Cu;
    {
        const bool branch_taken_0x4bfa1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BFA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFA1Cu;
        // 0x4bfa20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bfa1c) {
            ctx->pc = 0x4BFA38u;
            goto label_4bfa38;
        }
    }
    ctx->pc = 0x4BFA24u;
    // 0x4bfa24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bfa24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bfa28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4bfa28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bfa2c: 0x812fe92  j           func_4BFA48
    ctx->pc = 0x4BFA2Cu;
    ctx->pc = 0x4BFA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BFA2Cu;
    // 0x4bfa30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BFA48u;
    goto label_4bfa48;
    ctx->pc = 0x4BFA34u;
    // 0x4bfa34: 0x0  nop
    ctx->pc = 0x4bfa34u;
    // NOP
label_4bfa38:
    // 0x4bfa38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bfa38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bfa3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4bfa3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bfa40: 0x3e00008  jr          $ra
    ctx->pc = 0x4BFA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BFA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFA40u;
        // 0x4bfa44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BFA40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BFA48u;
label_4bfa48:
    // 0x4bfa48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4bfa48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4bfa4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4bfa4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4bfa50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4bfa50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4bfa54: 0xc127bf2  jal         func_49EFC8
    ctx->pc = 0x4BFA54u;
    SET_GPR_U32(ctx, 31, 0x4BFA5Cu);
    ctx->pc = 0x4BFA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BFA54u;
    // 0x4bfa58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFC8u, 0x4BFA54u, 0x4BFA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BFA5Cu;
label_4bfa5c:
    // 0x4bfa5c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4bfa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4bfa60: 0x86020166  lh          $v0, 0x166($s0)
    ctx->pc = 0x4bfa60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 358)));
    // 0x4bfa64: 0x24630e60  addiu       $v1, $v1, 0xE60
    ctx->pc = 0x4bfa64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3680));
    // 0x4bfa68: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4bfa68u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4bfa6c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4bfa6cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0E60u));
    // 0x4bfa70: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4bfa70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4bfa74: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4bfa74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4bfa78: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4bfa78u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4bfa7c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4bfa7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4bfa80: 0x24c60e64  addiu       $a2, $a2, 0xE64
    ctx->pc = 0x4bfa80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3684));
    // 0x4bfa84: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4bfa84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4bfa88: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4bfa88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4bfa8c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x4bfa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x4bfa90: 0x25080e68  addiu       $t0, $t0, 0xE68
    ctx->pc = 0x4bfa90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3688));
    // 0x4bfa94: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4bfa94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4bfa98: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4bfa98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4bfa9c: 0x86020168  lh          $v0, 0x168($s0)
    ctx->pc = 0x4bfa9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x4bfaa0: 0x8cea0e6c  lw          $t2, 0xE6C($a3)
    ctx->pc = 0x4bfaa0u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x7F0E6Cu));
    // 0x4bfaa4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x4bfaa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bfaa8: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4bfaa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4bfaac: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4bfaacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4bfab0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4bfab0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4bfab4: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4bfab4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4bfab8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bfab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bfabc: 0x8542000e  lh          $v0, 0xE($t2)
    ctx->pc = 0x4bfabcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 14)));
    // 0x4bfac0: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4bfac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4bfac4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bfac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bfac8: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4bfac8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4bfacc: 0xc127c58  jal         func_49F160
    ctx->pc = 0x4BFACCu;
    SET_GPR_U32(ctx, 31, 0x4BFAD4u);
    ctx->pc = 0x4BFAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BFACCu;
    // 0x4bfad0: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F160u, 0x4BFACCu, 0x4BFAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BFAD4u;
label_4bfad4:
    // 0x4bfad4: 0xc12b94c  jal         func_4AE530
    ctx->pc = 0x4BFAD4u;
    SET_GPR_U32(ctx, 31, 0x4BFADCu);
    ctx->pc = 0x4BFAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BFAD4u;
    // 0x4bfad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE530u, 0x4BFAD4u, 0x4BFADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BFADCu;
label_4bfadc:
    // 0x4bfadc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bfadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bfae0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4bfae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bfae4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bfae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bfae8: 0x812febc  j           func_4BFAF0
    ctx->pc = 0x4BFAE8u;
    ctx->pc = 0x4BFAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BFAE8u;
    // 0x4bfaec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BFAF0u;
    goto label_4bfaf0;
    ctx->pc = 0x4BFAF0u;
label_4bfaf0:
    // 0x4bfaf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4bfaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4bfaf4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4bfaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4bfaf8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4bfaf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bfafc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4bfafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4bfb00: 0x2623016a  addiu       $v1, $s1, 0x16A
    ctx->pc = 0x4bfb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 362));
    // 0x4bfb04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4bfb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4bfb08: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4bfb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4bfb0c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4bfb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4bfb10: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x4bfb10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4bfb14: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x4BFB14u;
    {
        const bool branch_taken_0x4bfb14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BFB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFB14u;
        // 0x4bfb18: 0x3c090073  lui         $t1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bfb14) {
            ctx->pc = 0x4BFC18u;
            goto label_4bfc18;
        }
    }
    ctx->pc = 0x4BFB1Cu;
    // 0x4bfb1c: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x4bfb1cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x4bfb20: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4bfb20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4bfb24: 0x2529d680  addiu       $t1, $t1, -0x2980
    ctx->pc = 0x4bfb24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294956672));
    // 0x4bfb28: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x4bfb28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x4bfb2c: 0x260c0e60  addiu       $t4, $s0, 0xE60
    ctx->pc = 0x4bfb2cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 3680));
    // 0x4bfb30: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x4bfb30u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0E60u));
    // 0x4bfb34: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4bfb34u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4bfb38: 0xa5222334  sh          $v0, 0x2334($t1)
    ctx->pc = 0x4bfb38u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 9012), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bfb3c: 0x266b0e64  addiu       $t3, $s3, 0xE64
    ctx->pc = 0x4bfb3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), 3684));
    // 0x4bfb40: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4bfb40u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4bfb44: 0x26320118  addiu       $s2, $s1, 0x118
    ctx->pc = 0x4bfb44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 280));
    // 0x4bfb48: 0x96220016  lhu         $v0, 0x16($s1)
    ctx->pc = 0x4bfb48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x4bfb4c: 0x25080e68  addiu       $t0, $t0, 0xE68
    ctx->pc = 0x4bfb4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3688));
    // 0x4bfb50: 0x8d660000  lw          $a2, 0x0($t3)
    ctx->pc = 0x4bfb50u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0E64u));
    // 0x4bfb54: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4bfb54u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4bfb58: 0xa5222336  sh          $v0, 0x2336($t1)
    ctx->pc = 0x4bfb58u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 9014), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bfb5c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4bfb5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4bfb60: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4bfb60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4bfb64: 0x240d000b  addiu       $t5, $zero, 0xB
    ctx->pc = 0x4bfb64u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x4bfb68: 0x9623001a  lhu         $v1, 0x1A($s1)
    ctx->pc = 0x4bfb68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x4bfb6c: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x4bfb6cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F0E68u));
    // 0x4bfb70: 0xa5232338  sh          $v1, 0x2338($t1)
    ctx->pc = 0x4bfb70u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 9016), (uint16_t)GPR_U32(ctx, 3));
    // 0x4bfb74: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4bfb74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4bfb78: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4bfb78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4bfb7c: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4bfb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4bfb80: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4bfb80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4bfb84: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4bfb84u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4bfb88: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4bfb88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4bfb8c: 0x8622011c  lh          $v0, 0x11C($s1)
    ctx->pc = 0x4bfb8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x4bfb90: 0x85830000  lh          $v1, 0x0($t4)
    ctx->pc = 0x4bfb90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4bfb94: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4bfb94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4bfb98: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4bfb98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4bfb9c: 0x31823  negu        $v1, $v1
    ctx->pc = 0x4bfb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x4bfba0: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x4bfba0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x4bfba4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4bfba4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4bfba8: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x4bfba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x4bfbac: 0x86220120  lh          $v0, 0x120($s1)
    ctx->pc = 0x4bfbacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x4bfbb0: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4bfbb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4bfbb4: 0x85630000  lh          $v1, 0x0($t3)
    ctx->pc = 0x4bfbb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4bfbb8: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4bfbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4bfbbc: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4bfbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4bfbc0: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4bfbc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4bfbc4: 0x24638000  addiu       $v1, $v1, -0x8000
    ctx->pc = 0x4bfbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x4bfbc8: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x4bfbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    // 0x4bfbcc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4bfbccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4bfbd0: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x4bfbd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x4bfbd4: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4bfbd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4bfbd8: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4bfbd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4bfbdc: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x4bfbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x4bfbe0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4bfbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4bfbe4: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x4bfbe4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4bfbe8: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4bfbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4bfbec: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4bfbecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4bfbf0: 0x95650000  lhu         $a1, 0x0($t3)
    ctx->pc = 0x4bfbf0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4bfbf4: 0xa52d2330  sh          $t5, 0x2330($t1)
    ctx->pc = 0x4bfbf4u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 9008), (uint16_t)GPR_U32(ctx, 13));
    // 0x4bfbf8: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x4bfbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    // 0x4bfbfc: 0xa523233a  sh          $v1, 0x233A($t1)
    ctx->pc = 0x4bfbfcu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 9018), (uint16_t)GPR_U32(ctx, 3));
    // 0x4bfc00: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4bfc00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4bfc04: 0xa525233c  sh          $a1, 0x233C($t1)
    ctx->pc = 0x4bfc04u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 9020), (uint16_t)GPR_U32(ctx, 5));
    // 0x4bfc08: 0xc127ac8  jal         func_49EB20
    ctx->pc = 0x4BFC08u;
    SET_GPR_U32(ctx, 31, 0x4BFC10u);
    ctx->pc = 0x4BFC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BFC08u;
    // 0x4bfc0c: 0xa522233e  sh          $v0, 0x233E($t1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 9), 9022), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EB20u, 0x4BFC08u, 0x4BFC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BFC10u;
label_4bfc10:
    // 0x4bfc10: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4BFC10u;
    {
        const bool branch_taken_0x4bfc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BFC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFC10u;
        // 0x4bfc14: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bfc10) {
            ctx->pc = 0x4BFC28u;
            goto label_4bfc28;
        }
    }
    ctx->pc = 0x4BFC18u;
label_4bfc18:
    // 0x4bfc18: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4bfc18u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4bfc1c: 0x26320118  addiu       $s2, $s1, 0x118
    ctx->pc = 0x4bfc1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 280));
    // 0x4bfc20: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4bfc20u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4bfc24: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4bfc24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_4bfc28:
    // 0x4bfc28: 0x26040e60  addiu       $a0, $s0, 0xE60
    ctx->pc = 0x4bfc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3680));
    // 0x4bfc2c: 0x8c490e6c  lw          $t1, 0xE6C($v0)
    ctx->pc = 0x4bfc2cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3692)));
    // 0x4bfc30: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4bfc30u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4bfc34: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4bfc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4bfc38: 0x26680e64  addiu       $t0, $s3, 0xE64
    ctx->pc = 0x4bfc38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 3684));
    // 0x4bfc3c: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4bfc3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4bfc40: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4bfc40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bfc44: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bfc44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bfc48: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x4bfc48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4bfc4c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4bfc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4bfc50: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x4bfc50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bfc54: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bfc54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bfc58: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4bfc58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4bfc5c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4bfc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4bfc60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4bfc60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bfc64: 0x85220004  lh          $v0, 0x4($t1)
    ctx->pc = 0x4bfc64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x4bfc68: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4bfc68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4bfc6c: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4bfc6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4bfc70: 0xc12b698  jal         func_4ADA60
    ctx->pc = 0x4BFC70u;
    SET_GPR_U32(ctx, 31, 0x4BFC78u);
    ctx->pc = 0x4BFC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BFC70u;
    // 0x4bfc74: 0xad070000  sw          $a3, 0x0($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA60u, 0x4BFC70u, 0x4BFC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BFC78u;
label_4bfc78:
    // 0x4bfc78: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4bfc78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4bfc7c: 0x24840e58  addiu       $a0, $a0, 0xE58
    ctx->pc = 0x4bfc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3672));
    // 0x4bfc80: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4bfc80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4bfc84: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4bfc84u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0E58u));
    // 0x4bfc88: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x4bfc88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4bfc8c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4bfc8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4bfc90: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bfc90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bfc94: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bfc94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bfc98: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4bfc98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4bfc9c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bfc9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bfca0: 0x84930000  lh          $s3, 0x0($a0)
    ctx->pc = 0x4bfca0u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4bfca4: 0x86220162  lh          $v0, 0x162($s1)
    ctx->pc = 0x4bfca4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 354)));
    // 0x4bfca8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x4bfca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x4bfcac: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4bfcacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4bfcb0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bfcb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bfcb4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4bfcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4bfcb8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4bfcb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4bfcbc: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x4bfcbcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bfcc0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4bfcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4bfcc4: 0x8622015e  lh          $v0, 0x15E($s1)
    ctx->pc = 0x4bfcc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 350)));
    // 0x4bfcc8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bfcc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bfccc: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4bfcccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4bfcd0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bfcd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bfcd4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4bfcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4bfcd8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bfcd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bfcdc: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4bfcdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4bfce0: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x4bfce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x4bfce4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4bfce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4bfce8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bfce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bfcec: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4bfcecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4bfcf0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bfcf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bfcf4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4bfcf4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4bfcf8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bfcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bfcfc: 0x21503  sra         $v0, $v0, 20
    ctx->pc = 0x4bfcfcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 20));
    // 0x4bfd00: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4bfd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4bfd04: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bfd04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bfd08: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4bfd08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4bfd0c: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x4bfd0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4bfd10: 0x10650011  beq         $v1, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x4BFD10u;
    {
        const bool branch_taken_0x4bfd10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x4BFD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFD10u;
        // 0x4bfd14: 0x28620005  slti        $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bfd10) {
            ctx->pc = 0x4BFD58u;
            goto label_4bfd58;
        }
    }
    ctx->pc = 0x4BFD18u;
    // 0x4bfd18: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4BFD18u;
    {
        const bool branch_taken_0x4bfd18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bfd18) {
            ctx->pc = 0x4BFD1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BFD18u;
            // 0x4bfd1c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BFD30u;
            goto label_4bfd30;
        }
    }
    ctx->pc = 0x4BFD20u;
    // 0x4bfd20: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4BFD20u;
    {
        const bool branch_taken_0x4bfd20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bfd20) {
            ctx->pc = 0x4BFD48u;
            goto label_4bfd48;
        }
    }
    ctx->pc = 0x4BFD28u;
    // 0x4bfd28: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x4BFD28u;
    {
        const bool branch_taken_0x4bfd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BFD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFD28u;
        // 0x4bfd2c: 0xa6530000  sh          $s3, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bfd28) {
            ctx->pc = 0x4BFD84u;
            goto label_4bfd84;
        }
    }
    ctx->pc = 0x4BFD30u;
label_4bfd30:
    // 0x4bfd30: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4BFD30u;
    {
        const bool branch_taken_0x4bfd30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4BFD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFD30u;
        // 0x4bfd34: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bfd30) {
            ctx->pc = 0x4BFD68u;
            goto label_4bfd68;
        }
    }
    ctx->pc = 0x4BFD38u;
    // 0x4bfd38: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4BFD38u;
    {
        const bool branch_taken_0x4bfd38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4bfd38) {
            ctx->pc = 0x4BFD78u;
            goto label_4bfd78;
        }
    }
    ctx->pc = 0x4BFD40u;
    // 0x4bfd40: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4BFD40u;
    {
        const bool branch_taken_0x4bfd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BFD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFD40u;
        // 0x4bfd44: 0xa6530000  sh          $s3, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bfd40) {
            ctx->pc = 0x4BFD84u;
            goto label_4bfd84;
        }
    }
    ctx->pc = 0x4BFD48u;
label_4bfd48:
    // 0x4bfd48: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4BFD48u;
    SET_GPR_U32(ctx, 31, 0x4BFD50u);
    ctx->pc = 0x4BFD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BFD48u;
    // 0x4bfd4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4BFD48u, 0x4BFD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BFD50u;
label_4bfd50:
    // 0x4bfd50: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4BFD50u;
    {
        const bool branch_taken_0x4bfd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BFD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFD50u;
        // 0x4bfd54: 0xa6530000  sh          $s3, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bfd50) {
            ctx->pc = 0x4BFD84u;
            goto label_4bfd84;
        }
    }
    ctx->pc = 0x4BFD58u;
label_4bfd58:
    // 0x4bfd58: 0xc127ea6  jal         func_49FA98
    ctx->pc = 0x4BFD58u;
    SET_GPR_U32(ctx, 31, 0x4BFD60u);
    ctx->pc = 0x4BFD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BFD58u;
    // 0x4bfd5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA98u, 0x4BFD58u, 0x4BFD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BFD60u;
label_4bfd60:
    // 0x4bfd60: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4BFD60u;
    {
        const bool branch_taken_0x4bfd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BFD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFD60u;
        // 0x4bfd64: 0xa6530000  sh          $s3, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bfd60) {
            ctx->pc = 0x4BFD84u;
            goto label_4bfd84;
        }
    }
    ctx->pc = 0x4BFD68u;
label_4bfd68:
    // 0x4bfd68: 0xc127ef0  jal         func_49FBC0
    ctx->pc = 0x4BFD68u;
    SET_GPR_U32(ctx, 31, 0x4BFD70u);
    ctx->pc = 0x4BFD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BFD68u;
    // 0x4bfd6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FBC0u, 0x4BFD68u, 0x4BFD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BFD70u;
label_4bfd70:
    // 0x4bfd70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4BFD70u;
    {
        const bool branch_taken_0x4bfd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BFD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFD70u;
        // 0x4bfd74: 0xa6530000  sh          $s3, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bfd70) {
            ctx->pc = 0x4BFD84u;
            goto label_4bfd84;
        }
    }
    ctx->pc = 0x4BFD78u;
label_4bfd78:
    // 0x4bfd78: 0xc127f40  jal         func_49FD00
    ctx->pc = 0x4BFD78u;
    SET_GPR_U32(ctx, 31, 0x4BFD80u);
    ctx->pc = 0x4BFD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BFD78u;
    // 0x4bfd7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FD00u, 0x4BFD78u, 0x4BFD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BFD80u;
label_4bfd80:
    // 0x4bfd80: 0xa6530000  sh          $s3, 0x0($s2)
    ctx->pc = 0x4bfd80u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 19));
label_4bfd84:
    // 0x4bfd84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4bfd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bfd88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bfd88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bfd8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bfd8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bfd90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4bfd90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bfd94: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4bfd94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4bfd98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4bfd98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bfd9c: 0x812ff6a  j           func_4BFDA8
    ctx->pc = 0x4BFD9Cu;
    ctx->pc = 0x4BFDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BFD9Cu;
    // 0x4bfda0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BFDA8u;
    goto label_4bfda8;
    ctx->pc = 0x4BFDA4u;
    // 0x4bfda4: 0x0  nop
    ctx->pc = 0x4bfda4u;
    // NOP
label_4bfda8:
    // 0x4bfda8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4bfda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4bfdac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4bfdacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4bfdb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4bfdb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bfdb4: 0x812fb5e  j           func_4BED78
    ctx->pc = 0x4BFDB4u;
    ctx->pc = 0x4BFDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BFDB4u;
    // 0x4bfdb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BED78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BED78u, 0x4BFDB4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4BFDBCu;
    // 0x4bfdbc: 0x0  nop
    ctx->pc = 0x4bfdbcu;
    // NOP
    ctx->pc = 0x4bfdc0u;
}
