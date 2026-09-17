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

// Function: sub_0048BF78
// Address: 0x48bf78 - 0x48c2d0
void sub_0048BF78_0x48bf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048BF78_0x48bf78");
#endif

    switch (ctx->pc) {
        case 0x48bfb0u: goto label_48bfb0;
        case 0x48c0bcu: goto label_48c0bc;
        case 0x48c0ccu: goto label_48c0cc;
        case 0x48c0e0u: goto label_48c0e0;
        case 0x48c108u: goto label_48c108;
        case 0x48c118u: goto label_48c118;
        case 0x48c12cu: goto label_48c12c;
        default: break;
    }

    ctx->pc = 0x48bf78u;

    // 0x48bf78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x48bf78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x48bf7c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x48bf7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x48bf80: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x48bf80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x48bf84: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x48bf84u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48bf88: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x48bf88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x48bf8c: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x48bf8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x48bf90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x48bf90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x48bf94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x48bf94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x48bf98: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x48bf98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x48bf9c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x48bf9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x48bfa0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x48bfa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x48bfa4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x48bfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x48bfa8: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x48BFA8u;
    SET_GPR_U32(ctx, 31, 0x48BFB0u);
    ctx->pc = 0x48BFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48BFA8u;
    // 0x48bfac: 0x3c17ffff  lui         $s7, 0xFFFF (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65535 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x48BFA8u, 0x48BFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BFB0u;
label_48bfb0:
    // 0x48bfb0: 0x3c03007c  lui         $v1, 0x7C
    ctx->pc = 0x48bfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)124 << 16));
    // 0x48bfb4: 0x26c501b6  addiu       $a1, $s6, 0x1B6
    ctx->pc = 0x48bfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 438));
    // 0x48bfb8: 0x24755b38  addiu       $s5, $v1, 0x5B38
    ctx->pc = 0x48bfb8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 23352));
    // 0x48bfbc: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x48bfbcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48bfc0: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x48bfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7C5B38u));
    // 0x48bfc4: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x48bfc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x48bfc8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x48bfc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x48bfcc: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x48bfccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x48bfd0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x48bfd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48bfd4: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x48bfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x48bfd8: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x48bfd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x48bfdc: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x48bfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x48bfe0: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x48BFE0u;
    {
        const bool branch_taken_0x48bfe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48bfe0) {
            ctx->pc = 0x48BFE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48BFE0u;
            // 0x48bfe4: 0x94a20000  lhu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48C020u;
            goto label_48c020;
        }
    }
    ctx->pc = 0x48BFE8u;
    // 0x48bfe8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x48bfe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48bfec: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x48bfecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48bff0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48bff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48bff4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x48bff4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48bff8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x48bff8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48bffc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x48bffcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x48c000: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x48c000u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48c004: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x48c004u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x48c008: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x48c008u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x48c00c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x48c00cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48c010: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x48c010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x48c014: 0x81255ba  j           func_4956E8
    ctx->pc = 0x48C014u;
    ctx->pc = 0x48C018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48C014u;
    // 0x48c018: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4956E8u;
    sub_004956E8_0x4956e8(rdram, ctx, runtime); return;
    ctx->pc = 0x48C01Cu;
    // 0x48c01c: 0x0  nop
    ctx->pc = 0x48c01cu;
    // NOP
label_48c020:
    // 0x48c020: 0x3c11007c  lui         $s1, 0x7C
    ctx->pc = 0x48c020u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)124 << 16));
    // 0x48c024: 0x26315b40  addiu       $s1, $s1, 0x5B40
    ctx->pc = 0x48c024u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 23360));
    // 0x48c028: 0x3c13007c  lui         $s3, 0x7C
    ctx->pc = 0x48c028u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)124 << 16));
    // 0x48c02c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x48c02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x48c030: 0x3c12007c  lui         $s2, 0x7C
    ctx->pc = 0x48c030u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)124 << 16));
    // 0x48c034: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x48c034u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x48c038: 0x26525b48  addiu       $s2, $s2, 0x5B48
    ctx->pc = 0x48c038u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 23368));
    // 0x48c03c: 0x26735b44  addiu       $s3, $s3, 0x5B44
    ctx->pc = 0x48c03cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 23364));
    // 0x48c040: 0x3c10007c  lui         $s0, 0x7C
    ctx->pc = 0x48c040u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)124 << 16));
    // 0x48c044: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x48c044u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7C5B40u));
    // 0x48c048: 0x26105b3c  addiu       $s0, $s0, 0x5B3C
    ctx->pc = 0x48c048u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23356));
    // 0x48c04c: 0x86c3011a  lh          $v1, 0x11A($s6)
    ctx->pc = 0x48c04cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 282)));
    // 0x48c050: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x48c050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x48c054: 0x8ed40140  lw          $s4, 0x140($s6)
    ctx->pc = 0x48c054u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 320)));
    // 0x48c058: 0x771825  or          $v1, $v1, $s7
    ctx->pc = 0x48c058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
    // 0x48c05c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x48c05cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7C5B44u));
    // 0x48c060: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x48c060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x48c064: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x48c064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x48c068: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x48c068u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x48c06c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x48c06cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x48c070: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x48c070u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x48c074: 0x86c2011e  lh          $v0, 0x11E($s6)
    ctx->pc = 0x48c074u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 286)));
    // 0x48c078: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x48c078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x48c07c: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x48c07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x48c080: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x48c080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x48c084: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x48c084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x48c088: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x48c088u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x48c08c: 0x86c20122  lh          $v0, 0x122($s6)
    ctx->pc = 0x48c08cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 290)));
    // 0x48c090: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x48c090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x48c094: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x48c094u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x48c098: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x48c098u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x48c09c: 0x86820118  lh          $v0, 0x118($s4)
    ctx->pc = 0x48c09cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 280)));
    // 0x48c0a0: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x48c0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x48c0a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x48c0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48c0a8: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x48c0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x48c0ac: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x48c0acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x48c0b0: 0xa6c20118  sh          $v0, 0x118($s6)
    ctx->pc = 0x48c0b0u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 280), (uint16_t)GPR_U32(ctx, 2));
    // 0x48c0b4: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x48C0B4u;
    SET_GPR_U32(ctx, 31, 0x48C0BCu);
    ctx->pc = 0x48C0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48C0B4u;
    // 0x48c0b8: 0x86a40000  lh          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x48C0B4u, 0x48C0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C0BCu;
label_48c0bc:
    // 0x48c0bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x48c0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48c0c0: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x48c0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x48c0c4: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x48C0C4u;
    SET_GPR_U32(ctx, 31, 0x48C0CCu);
    ctx->pc = 0x48C0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48C0C4u;
    // 0x48c0c8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x48C0C4u, 0x48C0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C0CCu;
label_48c0cc:
    // 0x48c0cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x48c0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48c0d0: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x48c0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x48c0d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x48c0d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48c0d8: 0xc12b84e  jal         func_4AE138
    ctx->pc = 0x48C0D8u;
    SET_GPR_U32(ctx, 31, 0x48C0E0u);
    ctx->pc = 0x48C0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48C0D8u;
    // 0x48c0dc: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE138u, 0x48C0D8u, 0x48C0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C0E0u;
label_48c0e0:
    // 0x48c0e0: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x48c0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x48c0e4: 0x8682011c  lh          $v0, 0x11C($s4)
    ctx->pc = 0x48c0e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 284)));
    // 0x48c0e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x48c0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x48c0ec: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x48c0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x48c0f0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x48c0f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48c0f4: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x48c0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x48c0f8: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x48c0f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x48c0fc: 0xa6c2011c  sh          $v0, 0x11C($s6)
    ctx->pc = 0x48c0fcu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 284), (uint16_t)GPR_U32(ctx, 2));
    // 0x48c100: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x48C100u;
    SET_GPR_U32(ctx, 31, 0x48C108u);
    ctx->pc = 0x48C104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48C100u;
    // 0x48c104: 0x86a40000  lh          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x48C100u, 0x48C108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C108u;
label_48c108:
    // 0x48c108: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x48c108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48c10c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x48c10cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x48c110: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x48C110u;
    SET_GPR_U32(ctx, 31, 0x48C118u);
    ctx->pc = 0x48C114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48C110u;
    // 0x48c114: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x48C110u, 0x48C118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C118u;
label_48c118:
    // 0x48c118: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x48c118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48c11c: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x48c11cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x48c120: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x48c120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48c124: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x48C124u;
    SET_GPR_U32(ctx, 31, 0x48C12Cu);
    ctx->pc = 0x48C128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48C124u;
    // 0x48c128: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x48C124u, 0x48C12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C12Cu;
label_48c12c:
    // 0x48c12c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x48c12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x48c130: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x48c130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x48c134: 0x26ca0010  addiu       $t2, $s6, 0x10
    ctx->pc = 0x48c134u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x48c138: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x48c138u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x48c13c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x48c13cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x48c140: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x48c140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x48c144: 0x86660000  lh          $a2, 0x0($s3)
    ctx->pc = 0x48c144u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x48c148: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x48c148u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x48c14c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x48c14cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x48c150: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x48c150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48c154: 0x86480000  lh          $t0, 0x0($s2)
    ctx->pc = 0x48c154u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x48c158: 0x771825  or          $v1, $v1, $s7
    ctx->pc = 0x48c158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
    // 0x48c15c: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x48c15cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x48c160: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x48c160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x48c164: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x48c164u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x48c168: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x48c168u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x48c16c: 0x26c40018  addiu       $a0, $s6, 0x18
    ctx->pc = 0x48c16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
    // 0x48c170: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x48c170u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x48c174: 0x26c90014  addiu       $t1, $s6, 0x14
    ctx->pc = 0x48c174u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
    // 0x48c178: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x48c178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x48c17c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x48c17cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x48c180: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x48c180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x48c184: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x48c184u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x48c188: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x48c188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x48c18c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x48c18cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x48c190: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x48c190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x48c194: 0xd73025  or          $a2, $a2, $s7
    ctx->pc = 0x48c194u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 23));
    // 0x48c198: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x48c198u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x48c19c: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x48c19cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x48c1a0: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x48c1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x48c1a4: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x48c1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x48c1a8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x48c1a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x48c1ac: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x48c1acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x48c1b0: 0x1174025  or          $t0, $t0, $s7
    ctx->pc = 0x48c1b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 23));
    // 0x48c1b4: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x48c1b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x48c1b8: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x48c1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
    // 0x48c1bc: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x48c1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x48c1c0: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x48c1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x48c1c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x48c1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x48c1c8: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x48c1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x48c1cc: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x48c1ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x48c1d0: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x48c1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x48c1d4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x48c1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x48c1d8: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x48c1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x48c1dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x48c1dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x48c1e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x48c1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x48c1e4: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x48c1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x48c1e8: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x48c1e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x48c1ec: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x48c1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x48c1f0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x48c1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x48c1f4: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x48c1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x48c1f8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x48c1f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x48c1fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x48c1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x48c200: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x48c200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x48c204: 0x8fc30050  lw          $v1, 0x50($fp)
    ctx->pc = 0x48c204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 80)));
    // 0x48c208: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x48c208u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x48c20c: 0x771824  and         $v1, $v1, $s7
    ctx->pc = 0x48c20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 23));
    // 0x48c210: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x48c210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x48c214: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x48c214u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x48c218: 0x86650000  lh          $a1, 0x0($s3)
    ctx->pc = 0x48c218u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x48c21c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x48c21cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x48c220: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x48c220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x48c224: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x48c224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x48c228: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x48c228u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x48c22c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x48c22cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x48c230: 0x86460000  lh          $a2, 0x0($s2)
    ctx->pc = 0x48c230u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x48c234: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x48c234u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x48c238: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x48c238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x48c23c: 0x8fc20054  lw          $v0, 0x54($fp)
    ctx->pc = 0x48c23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 84)));
    // 0x48c240: 0x96270000  lhu         $a3, 0x0($s1)
    ctx->pc = 0x48c240u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x48c244: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x48c244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x48c248: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x48c248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x48c24c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x48c24cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x48c250: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x48c250u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x48c254: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x48c254u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x48c258: 0xb72825  or          $a1, $a1, $s7
    ctx->pc = 0x48c258u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 23));
    // 0x48c25c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x48c25cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x48c260: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x48c260u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x48c264: 0x8fc20058  lw          $v0, 0x58($fp)
    ctx->pc = 0x48c264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 88)));
    // 0x48c268: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x48c268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x48c26c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x48c26cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x48c270: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x48c270u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x48c274: 0xd73025  or          $a2, $a2, $s7
    ctx->pc = 0x48c274u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 23));
    // 0x48c278: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x48c278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x48c27c: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x48c27cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x48c280: 0xa6c70130  sh          $a3, 0x130($s6)
    ctx->pc = 0x48c280u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 304), (uint16_t)GPR_U32(ctx, 7));
    // 0x48c284: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48c284u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48c288: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x48c288u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x48c28c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x48c28cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48c290: 0xa6c20132  sh          $v0, 0x132($s6)
    ctx->pc = 0x48c290u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 306), (uint16_t)GPR_U32(ctx, 2));
    // 0x48c294: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x48c294u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x48c298: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x48c298u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x48c29c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x48c29cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48c2a0: 0xa6c0015a  sh          $zero, 0x15A($s6)
    ctx->pc = 0x48c2a0u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 346), (uint16_t)GPR_U32(ctx, 0));
    // 0x48c2a4: 0xa6c30134  sh          $v1, 0x134($s6)
    ctx->pc = 0x48c2a4u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 308), (uint16_t)GPR_U32(ctx, 3));
    // 0x48c2a8: 0xa6c0015c  sh          $zero, 0x15C($s6)
    ctx->pc = 0x48c2a8u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 348), (uint16_t)GPR_U32(ctx, 0));
    // 0x48c2ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x48c2acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48c2b0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x48c2b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x48c2b4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x48c2b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48c2b8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x48c2b8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x48c2bc: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x48c2bcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48c2c0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x48c2c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x48c2c4: 0x3e00008  jr          $ra
    ctx->pc = 0x48C2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48C2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C2C4u;
        // 0x48c2c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48C2C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48C2CCu;
    // 0x48c2cc: 0x0  nop
    ctx->pc = 0x48c2ccu;
    // NOP
    ctx->pc = 0x48c2d0u;
}
