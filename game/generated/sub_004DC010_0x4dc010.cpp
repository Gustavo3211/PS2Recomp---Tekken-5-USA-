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

// Function: sub_004DC010
// Address: 0x4dc010 - 0x4dc360
void sub_004DC010_0x4dc010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DC010_0x4dc010");
#endif

    switch (ctx->pc) {
        case 0x4dc054u: goto label_4dc054;
        case 0x4dc098u: goto label_4dc098;
        case 0x4dc0c0u: goto label_4dc0c0;
        case 0x4dc0ccu: goto label_4dc0cc;
        case 0x4dc0ecu: goto label_4dc0ec;
        case 0x4dc104u: goto label_4dc104;
        case 0x4dc174u: goto label_4dc174;
        case 0x4dc17cu: goto label_4dc17c;
        case 0x4dc200u: goto label_4dc200;
        case 0x4dc2d8u: goto label_4dc2d8;
        default: break;
    }

    ctx->pc = 0x4dc010u;

    // 0x4dc010: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4dc010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4dc014: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4dc014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4dc018: 0x3c1e007f  lui         $fp, 0x7F
    ctx->pc = 0x4dc018u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)127 << 16));
    // 0x4dc01c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4dc01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4dc020: 0x27d21120  addiu       $s2, $fp, 0x1120
    ctx->pc = 0x4dc020u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 4384));
    // 0x4dc024: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4dc024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4dc028: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4dc028u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dc02c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4dc02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4dc030: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4dc030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4dc034: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4dc034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4dc038: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4dc038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4dc03c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4dc03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4dc040: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4dc040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4dc044: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4dc044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4dc048: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x4dc048u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F1120u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1120u, _value); } while (0);
    // 0x4dc04c: 0xc12b638  jal         func_4AD8E0
    ctx->pc = 0x4DC04Cu;
    SET_GPR_U32(ctx, 31, 0x4DC054u);
    ctx->pc = 0x4DC050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC04Cu;
    // 0x4dc050: 0x86440000  lh          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8E0u, 0x4DC04Cu, 0x4DC054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC054u;
label_4dc054:
    // 0x4dc054: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4DC054u;
    {
        const bool branch_taken_0x4dc054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DC058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC054u;
        // 0x4dc058: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dc054) {
            ctx->pc = 0x4DC090u;
            goto label_4dc090;
        }
    }
    ctx->pc = 0x4DC05Cu;
    // 0x4dc05c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4dc05cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4dc060: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4dc060u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dc064: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4dc064u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4dc068: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4dc068u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4dc06c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4dc06cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4dc070: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4dc070u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4dc074: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4dc074u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4dc078: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4dc078u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4dc07c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4dc07cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4dc080: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4dc080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4dc084: 0x81370d6  j           func_4DC358
    ctx->pc = 0x4DC084u;
    ctx->pc = 0x4DC088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC084u;
    // 0x4dc088: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DC358u;
    goto label_4dc358;
    ctx->pc = 0x4DC08Cu;
    // 0x4dc08c: 0x0  nop
    ctx->pc = 0x4dc08cu;
    // NOP
label_4dc090:
    // 0x4dc090: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4DC090u;
    SET_GPR_U32(ctx, 31, 0x4DC098u);
    ctx->pc = 0x4DC094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC090u;
    // 0x4dc094: 0x3c11007f  lui         $s1, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4DC090u, 0x4DC098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC098u;
label_4dc098:
    // 0x4dc098: 0x26311134  addiu       $s1, $s1, 0x1134
    ctx->pc = 0x4dc098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4404));
    // 0x4dc09c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4dc09cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dc0a0: 0x2402006f  addiu       $v0, $zero, 0x6F
    ctx->pc = 0x4dc0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x4dc0a4: 0xa6a20008  sh          $v0, 0x8($s5)
    ctx->pc = 0x4dc0a4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x4dc0a8: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x4dc0a8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x4dc0ac: 0xaeb40140  sw          $s4, 0x140($s5)
    ctx->pc = 0x4dc0acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 320), GPR_U32(ctx, 20));
    // 0x4dc0b0: 0x3c17007f  lui         $s7, 0x7F
    ctx->pc = 0x4dc0b0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)127 << 16));
    // 0x4dc0b4: 0x26f61124  addiu       $s6, $s7, 0x1124
    ctx->pc = 0x4dc0b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 4388));
    // 0x4dc0b8: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4DC0B8u;
    SET_GPR_U32(ctx, 31, 0x4DC0C0u);
    ctx->pc = 0x4DC0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC0B8u;
    // 0x4dc0bc: 0x3c10007f  lui         $s0, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4DC0B8u, 0x4DC0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC0C0u;
label_4dc0c0:
    // 0x4dc0c0: 0x2610112c  addiu       $s0, $s0, 0x112C
    ctx->pc = 0x4dc0c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4396));
    // 0x4dc0c4: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4DC0C4u;
    SET_GPR_U32(ctx, 31, 0x4DC0CCu);
    ctx->pc = 0x4DC0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC0C4u;
    // 0x4dc0c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4DC0C4u, 0x4DC0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC0CCu;
label_4dc0cc:
    // 0x4dc0cc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4dc0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4dc0d0: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x4dc0d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4dc0d4: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x4dc0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x4dc0d8: 0x731824  and         $v1, $v1, $s3
    ctx->pc = 0x4dc0d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x4dc0dc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4dc0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dc0e0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4dc0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4dc0e4: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4DC0E4u;
    SET_GPR_U32(ctx, 31, 0x4DC0ECu);
    ctx->pc = 0x4DC0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC0E4u;
    // 0x4dc0e8: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4DC0E4u, 0x4DC0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC0ECu;
label_4dc0ec:
    // 0x4dc0ec: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x4dc0ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4dc0f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4dc0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4dc0f4: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4dc0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4dc0f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4dc0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4dc0fc: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4DC0FCu;
    SET_GPR_U32(ctx, 31, 0x4DC104u);
    ctx->pc = 0x4DC100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC0FCu;
    // 0x4dc100: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4DC0FCu, 0x4DC104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC104u;
label_4dc104:
    // 0x4dc104: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4dc104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4dc108: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4dc108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4dc10c: 0x86060000  lh          $a2, 0x0($s0)
    ctx->pc = 0x4dc10cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4dc110: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dc110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dc114: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x4dc114u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4dc118: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dc118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dc11c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4dc11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dc120: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4dc120u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4dc124: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dc124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dc128: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4dc128u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4dc12c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x4dc12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x4dc130: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4dc130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4dc134: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dc134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dc138: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4dc138u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4dc13c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dc13cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dc140: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4dc140u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4dc144: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x4dc144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x4dc148: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4dc148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4dc14c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dc14cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dc150: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4dc150u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4dc154: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4dc154u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4dc158: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x4dc158u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4dc15c: 0x70c23018  mult1       $a2, $a2, $v0
    ctx->pc = 0x4dc15cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x4dc160: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x4dc160u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x4dc164: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x4dc164u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x4dc168: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x4dc168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x4dc16c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4DC16Cu;
    SET_GPR_U32(ctx, 31, 0x4DC174u);
    ctx->pc = 0x4DC170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC16Cu;
    // 0x4dc170: 0xae250000  sw          $a1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4DC16Cu, 0x4DC174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC174u;
label_4dc174:
    // 0x4dc174: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4DC174u;
    SET_GPR_U32(ctx, 31, 0x4DC17Cu);
    ctx->pc = 0x4DC178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC174u;
    // 0x4dc178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4DC174u, 0x4DC17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC17Cu;
label_4dc17c:
    // 0x4dc17c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4dc17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4dc180: 0x8686011a  lh          $a2, 0x11A($s4)
    ctx->pc = 0x4dc180u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 282)));
    // 0x4dc184: 0x26a70010  addiu       $a3, $s5, 0x10
    ctx->pc = 0x4dc184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x4dc188: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4dc188u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4dc18c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dc18cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dc190: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x4dc190u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4dc194: 0x26a80018  addiu       $t0, $s5, 0x18
    ctx->pc = 0x4dc194u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
    // 0x4dc198: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4dc198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4dc19c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4dc19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4dc1a0: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4dc1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4dc1a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dc1a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dc1a8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4dc1a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4dc1ac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4dc1acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4dc1b0: 0x86820122  lh          $v0, 0x122($s4)
    ctx->pc = 0x4dc1b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 290)));
    // 0x4dc1b4: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4dc1b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4dc1b8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4dc1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4dc1bc: 0xb32825  or          $a1, $a1, $s3
    ctx->pc = 0x4dc1bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 19));
    // 0x4dc1c0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4dc1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4dc1c4: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4dc1c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4dc1c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dc1c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dc1cc: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4dc1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x4dc1d0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4dc1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4dc1d4: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4dc1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4dc1d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4dc1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4dc1dc: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4dc1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4dc1e0: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4dc1e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4dc1e4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4dc1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4dc1e8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4dc1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4dc1ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dc1ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dc1f0: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4dc1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4dc1f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4dc1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4dc1f8: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4DC1F8u;
    SET_GPR_U32(ctx, 31, 0x4DC200u);
    ctx->pc = 0x4DC1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC1F8u;
    // 0x4dc1fc: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4DC1F8u, 0x4DC200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC200u;
label_4dc200:
    // 0x4dc200: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4dc200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4dc204: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4dc204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4dc208: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dc208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dc20c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dc20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dc210: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4dc210u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4dc214: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4dc214u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4dc218: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4DC218u;
    {
        const bool branch_taken_0x4dc218 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4DC21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC218u;
        // 0x4dc21c: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dc218) {
            ctx->pc = 0x4DC228u;
            goto label_4dc228;
        }
    }
    ctx->pc = 0x4DC220u;
    // 0x4dc220: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4DC220u;
    {
        const bool branch_taken_0x4dc220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DC224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC220u;
        // 0x4dc224: 0x3444ffff  ori         $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dc220) {
            ctx->pc = 0x4DC22Cu;
            goto label_4dc22c;
        }
    }
    ctx->pc = 0x4DC228u;
label_4dc228:
    // 0x4dc228: 0x532024  and         $a0, $v0, $s3
    ctx->pc = 0x4dc228u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
label_4dc22c:
    // 0x4dc22c: 0x27d01120  addiu       $s0, $fp, 0x1120
    ctx->pc = 0x4dc22cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4384));
    // 0x4dc230: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4dc230u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4dc234: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4dc234u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4dc238: 0x26a60014  addiu       $a2, $s5, 0x14
    ctx->pc = 0x4dc238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
    // 0x4dc23c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4dc23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4dc240: 0x3042001c  andi        $v0, $v0, 0x1C
    ctx->pc = 0x4dc240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)28);
    // 0x4dc244: 0xaec40000  sw          $a0, 0x0($s6)
    ctx->pc = 0x4dc244u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 4));
    // 0x4dc248: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4dc248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4dc24c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dc24cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dc250: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dc250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dc254: 0x96e51124  lhu         $a1, 0x1124($s7)
    ctx->pc = 0x4dc254u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 4388)));
    // 0x4dc258: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4dc258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4dc25c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dc25cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dc260: 0x52400  sll         $a0, $a1, 16
    ctx->pc = 0x4dc260u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4dc264: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4dc264u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4dc268: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4dc268u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4dc26c: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x4dc26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x4dc270: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4dc270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4dc274: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4dc274u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4dc278: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4dc278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4dc27c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dc27cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dc280: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4dc280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4dc284: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dc284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dc288: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4dc288u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4dc28c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4dc28cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4dc290: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4dc290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4dc294: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dc294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dc298: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4dc298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4dc29c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dc29cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dc2a0: 0x8684011e  lh          $a0, 0x11E($s4)
    ctx->pc = 0x4dc2a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 286)));
    // 0x4dc2a4: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4dc2a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4dc2a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4dc2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4dc2ac: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4dc2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4dc2b0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dc2b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dc2b4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4dc2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4dc2b8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4dc2b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4dc2bc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4dc2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4dc2c0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4dc2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4dc2c4: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4dc2c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4dc2c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4dc2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4dc2cc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dc2ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dc2d0: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4DC2D0u;
    SET_GPR_U32(ctx, 31, 0x4DC2D8u);
    ctx->pc = 0x4DC2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC2D0u;
    // 0x4dc2d4: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4DC2D0u, 0x4DC2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC2D8u;
label_4dc2d8:
    // 0x4dc2d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4dc2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4dc2dc: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4dc2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4dc2e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4dc2e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4dc2e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dc2e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dc2e8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4dc2e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4dc2ec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dc2ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dc2f0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4dc2f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4dc2f4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4dc2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4dc2f8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dc2f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dc2fc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4dc2fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4dc300: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4dc300u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4dc304: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4dc304u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4dc308: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x4dc308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x4dc30c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4dc30cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4dc310: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4dc310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4dc314: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4dc314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4dc318: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dc318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dc31c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4dc31cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4dc320: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dc320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dc324: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4dc324u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4dc328: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x4dc328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x4dc32c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4dc32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4dc330: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4dc330u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4dc334: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dc334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dc338: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4dc338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4dc33c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4dc33cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4dc340: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4dc340u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dc344: 0xa6a2015a  sh          $v0, 0x15A($s5)
    ctx->pc = 0x4dc344u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 346), (uint16_t)GPR_U32(ctx, 2));
    // 0x4dc348: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4dc348u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4dc34c: 0x3e00008  jr          $ra
    ctx->pc = 0x4DC34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DC350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC34Cu;
        // 0x4dc350: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DC34Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DC354u;
    // 0x4dc354: 0x0  nop
    ctx->pc = 0x4dc354u;
    // NOP
label_4dc358:
    // 0x4dc358: 0x3e00008  jr          $ra
    ctx->pc = 0x4DC358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DC358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DC360u;
}
