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

// Function: sub_004A9218
// Address: 0x4a9218 - 0x4a9668
void sub_004A9218_0x4a9218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9218_0x4a9218");
#endif

    switch (ctx->pc) {
        case 0x4a9290u: goto label_4a9290;
        case 0x4a92c8u: goto label_4a92c8;
        case 0x4a92d0u: goto label_4a92d0;
        case 0x4a9398u: goto label_4a9398;
        case 0x4a93f0u: goto label_4a93f0;
        case 0x4a9440u: goto label_4a9440;
        case 0x4a9448u: goto label_4a9448;
        case 0x4a9528u: goto label_4a9528;
        case 0x4a95c8u: goto label_4a95c8;
        default: break;
    }

    ctx->pc = 0x4a9218u;

    // 0x4a9218: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4a9218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4a921c: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x4a921cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x4a9220: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4a9220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4a9224: 0x24639990  addiu       $v1, $v1, -0x6670
    ctx->pc = 0x4a9224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941072));
    // 0x4a9228: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4a9228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4a922c: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x4a922cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x4a9230: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4a9230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4a9234: 0x3c17007f  lui         $s7, 0x7F
    ctx->pc = 0x4a9234u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)127 << 16));
    // 0x4a9238: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4a9238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4a923c: 0x26e50c5c  addiu       $a1, $s7, 0xC5C
    ctx->pc = 0x4a923cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 3164));
    // 0x4a9240: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4a9240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4a9244: 0x32402  srl         $a0, $v1, 16
    ctx->pc = 0x4a9244u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4a9248: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4a9248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4a924c: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4a924cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4a9250: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4a9250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4a9254: 0x24d00c84  addiu       $s0, $a2, 0xC84
    ctx->pc = 0x4a9254u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 3204));
    // 0x4a9258: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4a9258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4a925c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4a925cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4a9260: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a9260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a9264: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x4a9264u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x4a9268: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4a9268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a926c: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x4a926cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a9270: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4a9270u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4a9274: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4a9274u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a9278: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x4a9278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4a927c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4a927cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4a9280: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4a9280u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7F0C84u));
    // 0x4a9284: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x4a9284u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a9288: 0xc12a6f8  jal         func_4A9BE0
    ctx->pc = 0x4A9288u;
    SET_GPR_U32(ctx, 31, 0x4A9290u);
    ctx->pc = 0x4A928Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9288u;
    // 0x4a928c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9BE0u, 0x4A9288u, 0x4A9290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9290u;
label_4a9290:
    // 0x4a9290: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4a9290u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a9294: 0x460004a  bltz        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x4A9294u;
    {
        const bool branch_taken_0x4a9294 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4A9298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9294u;
        // 0x4a9298: 0xaec20c64  sw          $v0, 0xC64($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 3172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9294) {
            ctx->pc = 0x4A93C0u;
            goto label_4a93c0;
        }
    }
    ctx->pc = 0x4A929Cu;
    // 0x4a929c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4a929cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4a92a0: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4a92a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4a92a4: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4a92a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4a92a8: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4a92a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4a92ac: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x4a92acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a92b0: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4a92b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4a92b4: 0x24540c6c  addiu       $s4, $v0, 0xC6C
    ctx->pc = 0x4a92b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 3180));
    // 0x4a92b8: 0x24720c78  addiu       $s2, $v1, 0xC78
    ctx->pc = 0x4a92b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 3192));
    // 0x4a92bc: 0x24910c70  addiu       $s1, $a0, 0xC70
    ctx->pc = 0x4a92bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 3184));
    // 0x4a92c0: 0x24b50c74  addiu       $s5, $a1, 0xC74
    ctx->pc = 0x4a92c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), 3188));
    // 0x4a92c4: 0x0  nop
    ctx->pc = 0x4a92c4u;
    // NOP
label_4a92c8:
    // 0x4a92c8: 0xc12a450  jal         func_4A9140
    ctx->pc = 0x4A92C8u;
    SET_GPR_U32(ctx, 31, 0x4A92D0u);
    ctx->pc = 0x4A9140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9140u, 0x4A92C8u, 0x4A92D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A92D0u;
label_4a92d0:
    // 0x4a92d0: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4a92d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4a92d4: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4a92d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a92d8: 0x26e40c5c  addiu       $a0, $s7, 0xC5C
    ctx->pc = 0x4a92d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 3164));
    // 0x4a92dc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4a92dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a92e0: 0xb02824  and         $a1, $a1, $s0
    ctx->pc = 0x4a92e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x4a92e4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4a92e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4a92e8: 0x8ec90c64  lw          $t1, 0xC64($s6)
    ctx->pc = 0x4a92e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3172)));
    // 0x4a92ec: 0x3467ffff  ori         $a3, $v1, 0xFFFF
    ctx->pc = 0x4a92ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a92f0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x4a92f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4a92f4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4a92f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4a92f8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x4a92f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x4a92fc: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4a92fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4a9300: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x4a9300u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x4a9304: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x4a9304u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
    // 0x4a9308: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4a9308u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4a930c: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x4a930cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4a9310: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4a9310u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a9314: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4a9314u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a9318: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a9318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a931c: 0x8ea80000  lw          $t0, 0x0($s5)
    ctx->pc = 0x4a931cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4a9320: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4a9320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4a9324: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4a9324u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4a9328: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4a9328u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4a932c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4a932cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4a9330: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x4a9330u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
    // 0x4a9334: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4a9334u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a9338: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x4a9338u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x4a933c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x4a933cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4a9340: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4a9340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4a9344: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4a9344u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4a9348: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4a9348u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x4a934c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4a934cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4a9350: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4a9350u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a9354: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x4a9354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x4a9358: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4a9358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4a935c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4a935cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4a9360: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4a9360u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x4a9364: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4a9364u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4a9368: 0x91230001  lbu         $v1, 0x1($t1)
    ctx->pc = 0x4a9368u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x4a936c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4a936cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a9370: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a9370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4a9374: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4a9374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4a9378: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4a9378u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4a937c: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4a937cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x4a9380: 0x91220002  lbu         $v0, 0x2($t1)
    ctx->pc = 0x4a9380u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x4a9384: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4a9384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4a9388: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4a9388u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4a938c: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x4a938cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9390: 0xc122288  jal         func_488A20
    ctx->pc = 0x4A9390u;
    SET_GPR_U32(ctx, 31, 0x4A9398u);
    ctx->pc = 0x4A9394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9390u;
    // 0x4a9394: 0xaea80000  sw          $t0, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488A20u, 0x4A9390u, 0x4A9398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9398u;
label_4a9398:
    // 0x4a9398: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4a9398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a939c: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4a939cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a93a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a93a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a93a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a93a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4a93a8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4a93a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4a93ac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a93acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a93b0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4a93b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4a93b4: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4a93b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a93b8: 0x441ffc3  bgez        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x4A93B8u;
    {
        const bool branch_taken_0x4a93b8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4a93b8) {
            ctx->pc = 0x4A92C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a92c8;
        }
    }
    ctx->pc = 0x4A93C0u;
label_4a93c0:
    // 0x4a93c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4a93c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a93c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4a93c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a93c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4a93c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a93cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4a93ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a93d0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4a93d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a93d4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4a93d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4a93d8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4a93d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a93dc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4a93dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4a93e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4a93e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a93e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4A93E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A93E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A93E4u;
        // 0x4a93e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A93E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A93ECu;
    // 0x4a93ec: 0x0  nop
    ctx->pc = 0x4a93ecu;
    // NOP
label_4a93f0:
    // 0x4a93f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4a93f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4a93f4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4a93f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4a93f8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4a93f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4a93fc: 0x24440c84  addiu       $a0, $v0, 0xC84
    ctx->pc = 0x4a93fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3204));
    // 0x4a9400: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4a9400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4a9404: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4a9404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4a9408: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4a9408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4a940c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4a940cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4a9410: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x4a9410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x4a9414: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x4a9414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x4a9418: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x4a9418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x4a941c: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x4a941cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x4a9420: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x4a9420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x4a9424: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x4a9424u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x7F0C84u));
    // 0x4a9428: 0x4600082  bltz        $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x4A9428u;
    {
        const bool branch_taken_0x4a9428 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4A942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9428u;
        // 0x4a942c: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9428) {
            ctx->pc = 0x4A9634u;
            goto label_4a9634;
        }
    }
    ctx->pc = 0x4A9430u;
    // 0x4a9430: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x4a9430u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9434: 0x24560c78  addiu       $s6, $v0, 0xC78
    ctx->pc = 0x4a9434u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 3192));
    // 0x4a9438: 0x3c17ffff  lui         $s7, 0xFFFF
    ctx->pc = 0x4a9438u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65535 << 16));
    // 0x4a943c: 0x0  nop
    ctx->pc = 0x4a943cu;
    // NOP
label_4a9440:
    // 0x4a9440: 0xc12a450  jal         func_4A9140
    ctx->pc = 0x4A9440u;
    SET_GPR_U32(ctx, 31, 0x4A9448u);
    ctx->pc = 0x4A9140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9140u, 0x4A9440u, 0x4A9448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9448u;
label_4a9448:
    // 0x4a9448: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4a9448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4a944c: 0x24630c5c  addiu       $v1, $v1, 0xC5C
    ctx->pc = 0x4a944cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3164));
    // 0x4a9450: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4a9450u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4a9454: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a9454u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0C5Cu));
    // 0x4a9458: 0x24840c5c  addiu       $a0, $a0, 0xC5C
    ctx->pc = 0x4a9458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3164));
    // 0x4a945c: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x4a945cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4a9460: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4a9460u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4a9464: 0x24a50c7c  addiu       $a1, $a1, 0xC7C
    ctx->pc = 0x4a9464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3196));
    // 0x4a9468: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4a9468u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4a946c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4a946cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a9470: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4a9470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a9474: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4a9474u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0C5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0C5Cu, _value); } while (0);
    // 0x4a9478: 0x34e7000f  ori         $a3, $a3, 0xF
    ctx->pc = 0x4a9478u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)15);
    // 0x4a947c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x4a947cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4a9480: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4a9480u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0C7Cu));
    // 0x4a9484: 0x86c30000  lh          $v1, 0x0($s6)
    ctx->pc = 0x4a9484u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4a9488: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x4a9488u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a948c: 0x972024  and         $a0, $a0, $s7
    ctx->pc = 0x4a948cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 23));
    // 0x4a9490: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4a9490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4a9494: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4a9494u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x4a9498: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4a9498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4a949c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4a949cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4a94a0: 0x24420c80  addiu       $v0, $v0, 0xC80
    ctx->pc = 0x4a94a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3200));
    // 0x4a94a4: 0x771825  or          $v1, $v1, $s7
    ctx->pc = 0x4a94a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
    // 0x4a94a8: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4a94a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4a94ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4a94acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a94b0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4a94b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4a94b4: 0x34a6ffff  ori         $a2, $a1, 0xFFFF
    ctx->pc = 0x4a94b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4a94b8: 0x24420c7c  addiu       $v0, $v0, 0xC7C
    ctx->pc = 0x4a94b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3196));
    // 0x4a94bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a94bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a94c0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4a94c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7F0C7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0C7Cu, _value); } while (0);
    // 0x4a94c4: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4a94c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4a94c8: 0xaec50000  sw          $a1, 0x0($s6)
    ctx->pc = 0x4a94c8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 5));
    // 0x4a94cc: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4a94ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4a94d0: 0x24a50c80  addiu       $a1, $a1, 0xC80
    ctx->pc = 0x4a94d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3200));
    // 0x4a94d4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x4a94d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a94d8: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x4a94d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4a94dc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4a94dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7F0C80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0C80u, _value); } while (0);
    // 0x4a94e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4a94e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4a94e4: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4a94e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4a94e8: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4a94e8u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x7F0C80u));
    // 0x4a94ec: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4a94ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4a94f0: 0x4600046  bltz        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x4A94F0u;
    {
        const bool branch_taken_0x4a94f0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4A94F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A94F0u;
        // 0x4a94f4: 0xaec60000  sw          $a2, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a94f0) {
            ctx->pc = 0x4A960Cu;
            goto label_4a960c;
        }
    }
    ctx->pc = 0x4A94F8u;
    // 0x4a94f8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4a94f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4a94fc: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4a94fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4a9500: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4a9500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4a9504: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4a9504u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4a9508: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4a9508u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4a950c: 0x24550c6c  addiu       $s5, $v0, 0xC6C
    ctx->pc = 0x4a950cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 3180));
    // 0x4a9510: 0x24710c70  addiu       $s1, $v1, 0xC70
    ctx->pc = 0x4a9510u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 3184));
    // 0x4a9514: 0x24930c78  addiu       $s3, $a0, 0xC78
    ctx->pc = 0x4a9514u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 3192));
    // 0x4a9518: 0x24b40c74  addiu       $s4, $a1, 0xC74
    ctx->pc = 0x4a9518u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 3188));
    // 0x4a951c: 0x24d20c80  addiu       $s2, $a2, 0xC80
    ctx->pc = 0x4a951cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 3200));
    // 0x4a9520: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4a9520u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4a9524: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4a9524u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
label_4a9528:
    // 0x4a9528: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4a9528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4a952c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4a952cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4a9530: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x4a9530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4a9534: 0x24440c5c  addiu       $a0, $v0, 0xC5C
    ctx->pc = 0x4a9534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3164));
    // 0x4a9538: 0x84620c7c  lh          $v0, 0xC7C($v1)
    ctx->pc = 0x4a9538u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x7F0C7Cu));
    // 0x4a953c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4a953cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4a9540: 0x8d270c64  lw          $a3, 0xC64($t1)
    ctx->pc = 0x4a9540u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 3172)));
    // 0x4a9544: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4a9544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4a9548: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x4a9548u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a954c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4a954cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4a9550: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4a9550u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a9554: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4a9554u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x4a9558: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x4a9558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x4a955c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4a955cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4a9560: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x4a9560u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4a9564: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x4a9564u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a9568: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4a9568u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4a956c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4a956cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4a9570: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4a9570u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4a9574: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4a9574u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x4a9578: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4a9578u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4a957c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4a957cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a9580: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x4a9580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x4a9584: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4a9584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4a9588: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4a9588u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4a958c: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4a958cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x4a9590: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4a9590u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4a9594: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x4a9594u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x4a9598: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4a9598u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a959c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a959cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4a95a0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4a95a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4a95a4: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4a95a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4a95a8: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4a95a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x4a95ac: 0x90e20002  lbu         $v0, 0x2($a3)
    ctx->pc = 0x4a95acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x4a95b0: 0x7fa90000  sq          $t1, 0x0($sp)
    ctx->pc = 0x4a95b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 9));
    // 0x4a95b4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4a95b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4a95b8: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4a95b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4a95bc: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x4a95bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a95c0: 0xc1222b8  jal         func_488AE0
    ctx->pc = 0x4A95C0u;
    SET_GPR_U32(ctx, 31, 0x4A95C8u);
    ctx->pc = 0x4A95C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A95C0u;
    // 0x4a95c4: 0xae880000  sw          $t0, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488AE0u, 0x4A95C0u, 0x4A95C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A95C8u;
label_4a95c8:
    // 0x4a95c8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4a95c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a95cc: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4a95ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a95d0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4a95d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a95d4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4a95d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4a95d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a95d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4a95dc: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x4a95dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a95e0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4a95e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4a95e4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a95e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a95e8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4a95e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4a95ec: 0x24630300  addiu       $v1, $v1, 0x300
    ctx->pc = 0x4a95ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 768));
    // 0x4a95f0: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x4a95f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x4a95f4: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4a95f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4a95f8: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4a95f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4a95fc: 0x7ba90000  lq          $t1, 0x0($sp)
    ctx->pc = 0x4a95fcu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a9600: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4a9600u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a9604: 0x441ffc8  bgez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x4A9604u;
    {
        const bool branch_taken_0x4a9604 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4A9608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9604u;
        // 0x4a9608: 0xae650000  sw          $a1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9604) {
            ctx->pc = 0x4A9528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a9528;
        }
    }
    ctx->pc = 0x4A960Cu;
label_4a960c:
    // 0x4a960c: 0x87c20000  lh          $v0, 0x0($fp)
    ctx->pc = 0x4a960cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4a9610: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x4a9610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4a9614: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a9614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4a9618: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4a9618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4a961c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a961cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a9620: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a9620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a9624: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x4a9624u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x4a9628: 0x87c20000  lh          $v0, 0x0($fp)
    ctx->pc = 0x4a9628u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4a962c: 0x441ff84  bgez        $v0, . + 4 + (-0x7C << 2)
    ctx->pc = 0x4A962Cu;
    {
        const bool branch_taken_0x4a962c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4a962c) {
            ctx->pc = 0x4A9440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a9440;
        }
    }
    ctx->pc = 0x4A9634u;
label_4a9634:
    // 0x4a9634: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4a9634u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a9638: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4a9638u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a963c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4a963cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a9640: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4a9640u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4a9644: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4a9644u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a9648: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4a9648u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4a964c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4a964cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a9650: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4a9650u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4a9654: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x4a9654u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a9658: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4a9658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4a965c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A965Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A965Cu;
        // 0x4a9660: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A965Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A9664u;
    // 0x4a9664: 0x0  nop
    ctx->pc = 0x4a9664u;
    // NOP
    ctx->pc = 0x4a9668u;
}
