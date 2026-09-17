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

// Function: sub_004A51B8
// Address: 0x4a51b8 - 0x4a5360
void sub_004A51B8_0x4a51b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A51B8_0x4a51b8");
#endif

    switch (ctx->pc) {
        case 0x4a52a0u: goto label_4a52a0;
        case 0x4a52ccu: goto label_4a52cc;
        case 0x4a52fcu: goto label_4a52fc;
        default: break;
    }

    ctx->pc = 0x4a51b8u;

    // 0x4a51b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4a51b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4a51bc: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4a51bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4a51c0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4a51c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4a51c4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4a51c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4a51c8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4a51c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4a51cc: 0x246c0c28  addiu       $t4, $v1, 0xC28
    ctx->pc = 0x4a51ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 3112));
    // 0x4a51d0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4a51d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4a51d4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4a51d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4a51d8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4a51d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4a51dc: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4a51dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4a51e0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4a51e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4a51e4: 0x24e70c2c  addiu       $a3, $a3, 0xC2C
    ctx->pc = 0x4a51e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3116));
    // 0x4a51e8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4a51e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x4a51ec: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4a51ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4a51f0: 0x8c4a0c3c  lw          $t2, 0xC3C($v0)
    ctx->pc = 0x4a51f0u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x7F0C3Cu));
    // 0x4a51f4: 0x246b0c34  addiu       $t3, $v1, 0xC34
    ctx->pc = 0x4a51f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 3124));
    // 0x4a51f8: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x4a51f8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0C28u));
    // 0x4a51fc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4a51fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4a5200: 0x85420002  lh          $v0, 0x2($t2)
    ctx->pc = 0x4a5200u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x4a5204: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x4a5204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x4a5208: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a5208u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a520c: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x4a520cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0C2Cu));
    // 0x4a5210: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4a5210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4a5214: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4a5214u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4a5218: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4a5218u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4a521c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4a521cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4a5220: 0xad840000  sw          $a0, 0x0($t4)
    ctx->pc = 0x4a5220u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
    // 0x4a5224: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a5224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a5228: 0x25080c30  addiu       $t0, $t0, 0xC30
    ctx->pc = 0x4a5228u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3120));
    // 0x4a522c: 0x85420004  lh          $v0, 0x4($t2)
    ctx->pc = 0x4a522cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x4a5230: 0x8d660000  lw          $a2, 0x0($t3)
    ctx->pc = 0x4a5230u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4a5234: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4a5234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4a5238: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4a5238u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4a523c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4a523cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4a5240: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x4a5240u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x4a5244: 0x3c070073  lui         $a3, 0x73
    ctx->pc = 0x4a5244u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)115 << 16));
    // 0x4a5248: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4a5248u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4a524c: 0x24f4f93a  addiu       $s4, $a3, -0x6C6
    ctx->pc = 0x4a524cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965562));
    // 0x4a5250: 0x85830000  lh          $v1, 0x0($t4)
    ctx->pc = 0x4a5250u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4a5254: 0x85450006  lh          $a1, 0x6($t2)
    ctx->pc = 0x4a5254u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 6)));
    // 0x4a5258: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x4a5258u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x4a525c: 0x2463fa00  addiu       $v1, $v1, -0x600
    ctx->pc = 0x4a525cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965760));
    // 0x4a5260: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x4a5260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x4a5264: 0xa92825  or          $a1, $a1, $t1
    ctx->pc = 0x4a5264u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x4a5268: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4a5268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a526c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4a526cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4a5270: 0x85660000  lh          $a2, 0x0($t3)
    ctx->pc = 0x4a5270u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4a5274: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a5274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a5278: 0xad840000  sw          $a0, 0x0($t4)
    ctx->pc = 0x4a5278u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
    // 0x4a527c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4a527cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4a5280: 0x4c0002e  bltz        $a2, . + 4 + (0x2E << 2)
    ctx->pc = 0x4A5280u;
    {
        const bool branch_taken_0x4a5280 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x4A5284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5280u;
        // 0x4a5284: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5280) {
            ctx->pc = 0x4A533Cu;
            goto label_4a533c;
        }
    }
    ctx->pc = 0x4A5288u;
    // 0x4a5288: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4a5288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4a528c: 0x180982d  daddu       $s3, $t4, $zero
    ctx->pc = 0x4a528cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5290: 0x24500c24  addiu       $s0, $v0, 0xC24
    ctx->pc = 0x4a5290u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3108));
    // 0x4a5294: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x4a5294u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5298: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4a5298u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4a529c: 0x0  nop
    ctx->pc = 0x4a529cu;
    // NOP
label_4a52a0:
    // 0x4a52a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4a52a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a52a4: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x4a52a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4a52a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a52a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a52ac: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4a52acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4a52b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a52b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a52b4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4a52b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4a52b8: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4a52b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a52bc: 0x460000f  bltz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x4A52BCu;
    {
        const bool branch_taken_0x4a52bc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4A52C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A52BCu;
        // 0x4a52c0: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a52bc) {
            ctx->pc = 0x4A52FCu;
            goto label_4a52fc;
        }
    }
    ctx->pc = 0x4A52C4u;
    // 0x4a52c4: 0xc123332  jal         func_48CCC8
    ctx->pc = 0x4A52C4u;
    SET_GPR_U32(ctx, 31, 0x4A52CCu);
    ctx->pc = 0x4A52C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A52C4u;
    // 0x4a52c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CCC8u, 0x4A52C4u, 0x4A52CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A52CCu;
label_4a52cc:
    // 0x4a52cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a52ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a52d0: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4a52d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a52d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a52d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a52d8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4a52d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a52dc: 0x24420b44  addiu       $v0, $v0, 0xB44
    ctx->pc = 0x4a52dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2884));
    // 0x4a52e0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4a52e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4a52e4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a52e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a52e8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a52e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a52ec: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4a52ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a52f0: 0xa482000c  sh          $v0, 0xC($a0)
    ctx->pc = 0x4a52f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a52f4: 0xc129370  jal         func_4A4DC0
    ctx->pc = 0x4A52F4u;
    SET_GPR_U32(ctx, 31, 0x4A52FCu);
    ctx->pc = 0x4A52F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A52F4u;
    // 0x4a52f8: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4DC0u, 0x4A52F4u, 0x4A52FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A52FCu;
label_4a52fc:
    // 0x4a52fc: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4a52fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a5300: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4a5300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a5304: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a5304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4a5308: 0x86640000  lh          $a0, 0x0($s3)
    ctx->pc = 0x4a5308u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a530c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4a530cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4a5310: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a5310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a5314: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a5314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a5318: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4a5318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a531c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4a531cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4a5320: 0x24840200  addiu       $a0, $a0, 0x200
    ctx->pc = 0x4a5320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x4a5324: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4a5324u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4a5328: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4a5328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x4a532c: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4a532cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a5330: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x4a5330u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x4a5334: 0x441ffda  bgez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x4A5334u;
    {
        const bool branch_taken_0x4a5334 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4A5338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5334u;
        // 0x4a5338: 0xae650000  sw          $a1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5334) {
            ctx->pc = 0x4A52A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a52a0;
        }
    }
    ctx->pc = 0x4A533Cu;
label_4a533c:
    // 0x4a533c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4a533cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a5340: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4a5340u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a5344: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4a5344u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a5348: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4a5348u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4a534c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4a534cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a5350: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4a5350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4a5354: 0x3e00008  jr          $ra
    ctx->pc = 0x4A5354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A5358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5354u;
        // 0x4a5358: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A5354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A535Cu;
    // 0x4a535c: 0x0  nop
    ctx->pc = 0x4a535cu;
    // NOP
    ctx->pc = 0x4a5360u;
}
