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

// Function: sub_004C84D8
// Address: 0x4c84d8 - 0x4c9288
void sub_004C84D8_0x4c84d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C84D8_0x4c84d8");
#endif

    switch (ctx->pc) {
        case 0x4c84dcu: goto label_4c84dc;
        case 0x4c84f0u: goto label_4c84f0;
        case 0x4c85b8u: goto label_4c85b8;
        case 0x4c8690u: goto label_4c8690;
        case 0x4c86a0u: goto label_4c86a0;
        case 0x4c86b4u: goto label_4c86b4;
        case 0x4c86f4u: goto label_4c86f4;
        case 0x4c8888u: goto label_4c8888;
        case 0x4c8928u: goto label_4c8928;
        case 0x4c8950u: goto label_4c8950;
        case 0x4c8c74u: goto label_4c8c74;
        case 0x4c8c7cu: goto label_4c8c7c;
        case 0x4c8cb8u: goto label_4c8cb8;
        case 0x4c8e3cu: goto label_4c8e3c;
        case 0x4c8e74u: goto label_4c8e74;
        case 0x4c8e98u: goto label_4c8e98;
        case 0x4c9128u: goto label_4c9128;
        case 0x4c917cu: goto label_4c917c;
        case 0x4c9184u: goto label_4c9184;
        case 0x4c918cu: goto label_4c918c;
        case 0x4c91a4u: goto label_4c91a4;
        case 0x4c91e8u: goto label_4c91e8;
        case 0x4c91fcu: goto label_4c91fc;
        case 0x4c9228u: goto label_4c9228;
        case 0x4c9230u: goto label_4c9230;
        case 0x4c9238u: goto label_4c9238;
        case 0x4c9240u: goto label_4c9240;
        case 0x4c9250u: goto label_4c9250;
        case 0x4c9268u: goto label_4c9268;
        case 0x4c9270u: goto label_4c9270;
        default: break;
    }

    ctx->pc = 0x4c84d8u;

    // 0x4c84d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c84d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4c84dc:
    // 0x4c84dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c84dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c84e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c84e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c84e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4C84E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C84E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C84E4u;
        // 0x4c84e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C84E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C84ECu;
    // 0x4c84ec: 0x0  nop
    ctx->pc = 0x4c84ecu;
    // NOP
label_4c84f0:
    // 0x4c84f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4c84f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4c84f4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4c84f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4c84f8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x4c84f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x4c84fc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4c84fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8500: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4c8500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4c8504: 0x24450f40  addiu       $a1, $v0, 0xF40
    ctx->pc = 0x4c8504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3904));
    // 0x4c8508: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4c8508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4c850c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4c850cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4c8510: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4c8510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4c8514: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4c8514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4c8518: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x4c8518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x4c851c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x4c851cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x4c8520: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x4c8520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x4c8524: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x4c8524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x4c8528: 0x8ea30140  lw          $v1, 0x140($s5)
    ctx->pc = 0x4c8528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 320)));
    // 0x4c852c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4c852cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7F0F40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0F40u, _value); } while (0);
    // 0x4c8530: 0x846201b4  lh          $v0, 0x1B4($v1)
    ctx->pc = 0x4c8530u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 436)));
    // 0x4c8534: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4C8534u;
    {
        const bool branch_taken_0x4c8534 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4C8538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8534u;
        // 0x4c8538: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8534) {
            ctx->pc = 0x4C8568u;
            goto label_4c8568;
        }
    }
    ctx->pc = 0x4C853Cu;
    // 0x4c853c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4c853cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c8540: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4c8540u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c8544: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4c8544u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c8548: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4c8548u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c854c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4c854cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4c8550: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4c8550u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4c8554: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4c8554u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4c8558: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x4c8558u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4c855c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4c855cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4c8560: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4C8560u;
    ctx->pc = 0x4C8564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C8560u;
    // 0x4c8564: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4C8568u;
label_4c8568:
    // 0x4c8568: 0x94620118  lhu         $v0, 0x118($v1)
    ctx->pc = 0x4c8568u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 280)));
    // 0x4c856c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4c856cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4c8570: 0x24730f24  addiu       $s3, $v1, 0xF24
    ctx->pc = 0x4c8570u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 3876));
    // 0x4c8574: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x4c8574u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x4c8578: 0xa6a20118  sh          $v0, 0x118($s5)
    ctx->pc = 0x4c8578u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 280), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c857c: 0x26a201be  addiu       $v0, $s5, 0x1BE
    ctx->pc = 0x4c857cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 446));
    // 0x4c8580: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4c8580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4c8584: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4c8584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c8588: 0x9443011c  lhu         $v1, 0x11C($v0)
    ctx->pc = 0x4c8588u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 284)));
    // 0x4c858c: 0xa6a3011c  sh          $v1, 0x11C($s5)
    ctx->pc = 0x4c858cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 284), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c8590: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4c8590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c8594: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4c8594u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F24u));
    // 0x4c8598: 0x84a20120  lh          $v0, 0x120($a1)
    ctx->pc = 0x4c8598u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 288)));
    // 0x4c859c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c859cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c85a0: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4c85a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4c85a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c85a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c85a8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4c85a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4c85ac: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4c85acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c85b0: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4C85B0u;
    SET_GPR_U32(ctx, 31, 0x4C85B8u);
    ctx->pc = 0x4C85B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C85B0u;
    // 0x4c85b4: 0xa6a20120  sh          $v0, 0x120($s5) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 21), 288), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4C85B0u, 0x4C85B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C85B8u;
label_4c85b8:
    // 0x4c85b8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4c85b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c85bc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4c85bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c85c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c85c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c85c4: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4c85c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c85c8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x4c85c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4c85cc: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4c85ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4c85d0: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x4c85d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c85d4: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4c85d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x4c85d8: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4c85d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c85dc: 0x14440010  bne         $v0, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4C85DCu;
    {
        const bool branch_taken_0x4c85dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x4C85E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C85DCu;
        // 0x4c85e0: 0x3c03007f  lui         $v1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c85dc) {
            ctx->pc = 0x4C8620u;
            goto label_4c8620;
        }
    }
    ctx->pc = 0x4C85E4u;
    // 0x4c85e4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4c85e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4c85e8: 0x3c1e007f  lui         $fp, 0x7F
    ctx->pc = 0x4c85e8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)127 << 16));
    // 0x4c85ec: 0x24440f34  addiu       $a0, $v0, 0xF34
    ctx->pc = 0x4c85ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3892));
    // 0x4c85f0: 0x27c50f38  addiu       $a1, $fp, 0xF38
    ctx->pc = 0x4c85f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 3896));
    // 0x4c85f4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4c85f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F34u));
    // 0x4c85f8: 0x3c17007f  lui         $s7, 0x7F
    ctx->pc = 0x4c85f8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)127 << 16));
    // 0x4c85fc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4c85fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0F38u));
    // 0x4c8600: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x4c8600u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x4c8604: 0x741824  and         $v1, $v1, $s4
    ctx->pc = 0x4c8604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x4c8608: 0xaee00f30  sw          $zero, 0xF30($s7)
    ctx->pc = 0x4c8608u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 3888), GPR_U32(ctx, 0));
    // 0x4c860c: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x4c860cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x4c8610: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4c8610u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4c8614: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x4C8614u;
    {
        const bool branch_taken_0x4c8614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C8618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8614u;
        // 0x4c8618: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8614) {
            ctx->pc = 0x4C86B4u;
            goto label_4c86b4;
        }
    }
    ctx->pc = 0x4C861Cu;
    // 0x4c861c: 0x0  nop
    ctx->pc = 0x4c861cu;
    // NOP
label_4c8620:
    // 0x4c8620: 0x3c17007f  lui         $s7, 0x7F
    ctx->pc = 0x4c8620u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)127 << 16));
    // 0x4c8624: 0x3c1e007f  lui         $fp, 0x7F
    ctx->pc = 0x4c8624u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)127 << 16));
    // 0x4c8628: 0x24710f34  addiu       $s1, $v1, 0xF34
    ctx->pc = 0x4c8628u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 3892));
    // 0x4c862c: 0x27c60f38  addiu       $a2, $fp, 0xF38
    ctx->pc = 0x4c862cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 3896));
    // 0x4c8630: 0x26f00f30  addiu       $s0, $s7, 0xF30
    ctx->pc = 0x4c8630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 3888));
    // 0x4c8634: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4c8634u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0F38u));
    // 0x4c8638: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4c8638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4c863c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4c863cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F30u));
    // 0x4c8640: 0x34840012  ori         $a0, $a0, 0x12
    ctx->pc = 0x4c8640u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)18);
    // 0x4c8644: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4c8644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c8648: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c8648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c864c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c864cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c8650: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x4c8650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x4c8654: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c8654u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c8658: 0x741824  and         $v1, $v1, $s4
    ctx->pc = 0x4c8658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x4c865c: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x4c865cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x4c8660: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c8660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4c8664: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4c8664u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4c8668: 0x34e3ffff  ori         $v1, $a3, 0xFFFF
    ctx->pc = 0x4c8668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4c866c: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x4c866cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x4c8670: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x4c8670u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x4c8674: 0x26d20f28  addiu       $s2, $s6, 0xF28
    ctx->pc = 0x4c8674u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 3880));
    // 0x4c8678: 0x86a20160  lh          $v0, 0x160($s5)
    ctx->pc = 0x4c8678u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 352)));
    // 0x4c867c: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4c867cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4c8680: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c8680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c8684: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4c8684u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4c8688: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4C8688u;
    SET_GPR_U32(ctx, 31, 0x4C8690u);
    ctx->pc = 0x4C868Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C8688u;
    // 0x4c868c: 0x86640000  lh          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4C8688u, 0x4C8690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C8690u;
label_4c8690:
    // 0x4c8690: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4c8690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8694: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4c8694u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4c8698: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4C8698u;
    SET_GPR_U32(ctx, 31, 0x4C86A0u);
    ctx->pc = 0x4C869Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C8698u;
    // 0x4c869c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4C8698u, 0x4C86A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C86A0u;
label_4c86a0:
    // 0x4c86a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c86a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c86a4: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x4c86a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c86a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4c86a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c86ac: 0xc12b8a8  jal         func_4AE2A0
    ctx->pc = 0x4C86ACu;
    SET_GPR_U32(ctx, 31, 0x4C86B4u);
    ctx->pc = 0x4C86B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C86ACu;
    // 0x4c86b0: 0x8e470000  lw          $a3, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE2A0u, 0x4C86ACu, 0x4C86B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C86B4u;
label_4c86b4:
    // 0x4c86b4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4c86b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4c86b8: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4c86b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4c86bc: 0x24910f34  addiu       $s1, $a0, 0xF34
    ctx->pc = 0x4c86bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 3892));
    // 0x4c86c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4c86c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c86c4: 0x26f00f30  addiu       $s0, $s7, 0xF30
    ctx->pc = 0x4c86c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 3888));
    // 0x4c86c8: 0x27d20f38  addiu       $s2, $fp, 0xF38
    ctx->pc = 0x4c86c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 3896));
    // 0x4c86cc: 0x24540f24  addiu       $s4, $v0, 0xF24
    ctx->pc = 0x4c86ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 3876));
    // 0x4c86d0: 0x26d30f28  addiu       $s3, $s6, 0xF28
    ctx->pc = 0x4c86d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 3880));
    // 0x4c86d4: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4c86d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4c86d8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4c86d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c86dc: 0x24e70f2c  addiu       $a3, $a3, 0xF2C
    ctx->pc = 0x4c86dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3884));
    // 0x4c86e0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4c86e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c86e4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x4c86e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c86e8: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x4c86e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c86ec: 0xc12b7ee  jal         func_4ADFB8
    ctx->pc = 0x4C86ECu;
    SET_GPR_U32(ctx, 31, 0x4C86F4u);
    ctx->pc = 0x4C86F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C86ECu;
    // 0x4c86f0: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADFB8u, 0x4C86ECu, 0x4C86F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C86F4u;
label_4c86f4:
    // 0x4c86f4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4c86f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c86f8: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4c86f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4c86fc: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4c86fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c8700: 0x248c0f40  addiu       $t4, $a0, 0xF40
    ctx->pc = 0x4c8700u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 3904));
    // 0x4c8704: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4c8704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c8708: 0x8d880000  lw          $t0, 0x0($t4)
    ctx->pc = 0x4c8708u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F0F40u));
    // 0x4c870c: 0x3c0dffff  lui         $t5, 0xFFFF
    ctx->pc = 0x4c870cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65535 << 16));
    // 0x4c8710: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c8710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c8714: 0x86260000  lh          $a2, 0x0($s1)
    ctx->pc = 0x4c8714u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c8718: 0x85050012  lh          $a1, 0x12($t0)
    ctx->pc = 0x4c8718u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 18)));
    // 0x4c871c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c871cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4c8720: 0x86470000  lh          $a3, 0x0($s2)
    ctx->pc = 0x4c8720u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c8724: 0x26a90010  addiu       $t1, $s5, 0x10
    ctx->pc = 0x4c8724u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x4c8728: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4c8728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4c872c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4c872cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c8730: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x4c8730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x4c8734: 0x26ab0014  addiu       $t3, $s5, 0x14
    ctx->pc = 0x4c8734u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
    // 0x4c8738: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c8738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c873c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c873cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c8740: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c8740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4c8744: 0x26aa0018  addiu       $t2, $s5, 0x18
    ctx->pc = 0x4c8744u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
    // 0x4c8748: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x4c8748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x4c874c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4c874cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c8750: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x4c8750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x4c8754: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c8754u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c8758: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4c8758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4c875c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4c875cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4c8760: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c8760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c8764: 0xcd3025  or          $a2, $a2, $t5
    ctx->pc = 0x4c8764u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 13));
    // 0x4c8768: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x4c8768u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x4c876c: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4c876cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x4c8770: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x4c8770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x4c8774: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x4c8774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x4c8778: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c8778u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c877c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4c877cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4c8780: 0xed3825  or          $a3, $a3, $t5
    ctx->pc = 0x4c8780u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 13));
    // 0x4c8784: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x4c8784u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x4c8788: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x4c8788u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x4c878c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4c878cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c8790: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x4c8790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x4c8794: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c8794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c8798: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4c8798u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x4c879c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4c879cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c87a0: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4c87a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c87a4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4c87a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4c87a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c87a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c87ac: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x4c87acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x4c87b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c87b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c87b4: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x4c87b4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x4c87b8: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4c87b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c87bc: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4c87bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c87c0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4c87c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4c87c4: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x4c87c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x4c87c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c87c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c87cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c87ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c87d0: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4c87d0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x4c87d4: 0x8d8c0000  lw          $t4, 0x0($t4)
    ctx->pc = 0x4c87d4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c87d8: 0x8582015e  lh          $v0, 0x15E($t4)
    ctx->pc = 0x4c87d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 350)));
    // 0x4c87dc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x4C87DCu;
    {
        const bool branch_taken_0x4c87dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C87E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C87DCu;
        // 0x4c87e0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c87dc) {
            ctx->pc = 0x4C8858u;
            goto label_4c8858;
        }
    }
    ctx->pc = 0x4C87E4u;
    // 0x4c87e4: 0x85820160  lh          $v0, 0x160($t4)
    ctx->pc = 0x4c87e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 352)));
    // 0x4c87e8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x4c87e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c87ec: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x4c87ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x4c87f0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4c87f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c87f4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c87f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4c87f8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4c87f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4c87fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c87fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c8800: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x4c8800u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x4c8804: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4c8804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c8808: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4c8808u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c880c: 0x96840000  lhu         $a0, 0x0($s4)
    ctx->pc = 0x4c880cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c8810: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x4c8810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x4c8814: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c8814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c8818: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4c8818u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4c881c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c881cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c8820: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4c8820u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c8824: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4c8824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4c8828: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x4c8828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x4c882c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c882cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c8830: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4c8830u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4c8834: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4c8834u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c8838: 0x82202b  sltu        $a0, $a0, $v0
    ctx->pc = 0x4c8838u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4c883c: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4C883Cu;
    {
        const bool branch_taken_0x4c883c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C8840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C883Cu;
        // 0x4c8840: 0xdfb10018  ld          $s1, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c883c) {
            ctx->pc = 0x4C885Cu;
            goto label_4c885c;
        }
    }
    ctx->pc = 0x4C8844u;
    // 0x4c8844: 0x26a301bc  addiu       $v1, $s5, 0x1BC
    ctx->pc = 0x4c8844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 444));
    // 0x4c8848: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4c8848u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c884c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c884cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c8850: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4c8850u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c8854: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4c8854u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4c8858:
    // 0x4c8858: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4c8858u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4c885c:
    // 0x4c885c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4c885cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c8860: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4c8860u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c8864: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4c8864u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c8868: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4c8868u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4c886c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4c886cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4c8870: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4c8870u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4c8874: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x4c8874u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4c8878: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4c8878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4c887c: 0x3e00008  jr          $ra
    ctx->pc = 0x4C887Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C8880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C887Cu;
        // 0x4c8880: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C887Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C8884u;
    // 0x4c8884: 0x0  nop
    ctx->pc = 0x4c8884u;
    // NOP
label_4c8888:
    // 0x4c8888: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c8888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c888c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x4c888cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4c8890: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c8890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c8894: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c8894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8898: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4c8898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4c889c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4c889cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4c88a0: 0xa60201c2  sh          $v0, 0x1C2($s0)
    ctx->pc = 0x4c88a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 450), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c88a4: 0x24a50f24  addiu       $a1, $a1, 0xF24
    ctx->pc = 0x4c88a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3876));
    // 0x4c88a8: 0x860201be  lh          $v0, 0x1BE($s0)
    ctx->pc = 0x4c88a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x4c88ac: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4c88acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4c88b0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4c88b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F24u));
    // 0x4c88b4: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4c88b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4c88b8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c88b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c88bc: 0x24c60f44  addiu       $a2, $a2, 0xF44
    ctx->pc = 0x4c88bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3908));
    // 0x4c88c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c88c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c88c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c88c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c88c8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4c88c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4c88cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c88ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c88d0: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4c88d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c88d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4c88d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4c88d8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c88d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c88dc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c88dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c88e0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4c88e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4c88e4: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4c88e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c88e8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c88e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c88ec: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4c88ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4c88f0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4c88f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4c88f4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4c88f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x4c88f8: 0x242171c0  addiu       $at, $at, 0x71C0
    ctx->pc = 0x4c88f8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 29120));
    // 0x4c88fc: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4c88fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4c8900: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4c8900u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4c8904: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x4c8904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c8908: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4c8908u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4c890c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x4c890cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4c8910: 0xa6030166  sh          $v1, 0x166($s0)
    ctx->pc = 0x4c8910u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 358), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c8914: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4c8914u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4c8918: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4c8918u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c891c: 0xa6030168  sh          $v1, 0x168($s0)
    ctx->pc = 0x4c891cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 360), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c8920: 0xc12b6a4  jal         func_4ADA90
    ctx->pc = 0x4C8920u;
    SET_GPR_U32(ctx, 31, 0x4C8928u);
    ctx->pc = 0x4C8924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C8920u;
    // 0x4c8924: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA90u, 0x4C8920u, 0x4C8928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C8928u;
label_4c8928:
    // 0x4c8928: 0x260301bc  addiu       $v1, $s0, 0x1BC
    ctx->pc = 0x4c8928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4c892c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4c892cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c8930: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c8930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8934: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4c8934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c8938: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c8938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c893c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c893cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c8940: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4c8940u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c8944: 0x8132254  j           func_4C8950
    ctx->pc = 0x4C8944u;
    ctx->pc = 0x4C8948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C8944u;
    // 0x4c8948: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8950u;
    goto label_4c8950;
    ctx->pc = 0x4C894Cu;
    // 0x4c894c: 0x0  nop
    ctx->pc = 0x4c894cu;
    // NOP
label_4c8950:
    // 0x4c8950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c8950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c8954: 0x3c18007f  lui         $t8, 0x7F
    ctx->pc = 0x4c8954u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)127 << 16));
    // 0x4c8958: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c8958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c895c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c895cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8960: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4c8960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4c8964: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4c8964u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4c8968: 0xaf000f30  sw          $zero, 0xF30($t8)
    ctx->pc = 0x4c8968u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F0F30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0F30u, _value); } while (0);
    // 0x4c896c: 0x25640f24  addiu       $a0, $t3, 0xF24
    ctx->pc = 0x4c896cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 3876));
    // 0x4c8970: 0x260e0166  addiu       $t6, $s0, 0x166
    ctx->pc = 0x4c8970u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 358));
    // 0x4c8974: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4c8974u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4c8978: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4c8978u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F24u));
    // 0x4c897c: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4c897cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4c8980: 0x85c20000  lh          $v0, 0x0($t6)
    ctx->pc = 0x4c8980u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4c8984: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c8984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c8988: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4c8988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4c898c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c898cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c8990: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4c8990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4c8994: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4c8994u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c8998: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C8998u;
    {
        const bool branch_taken_0x4c8998 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4C899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8998u;
        // 0x4c899c: 0x25850f28  addiu       $a1, $t4, 0xF28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 3880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8998) {
            ctx->pc = 0x4C89B0u;
            goto label_4c89b0;
        }
    }
    ctx->pc = 0x4C89A0u;
    // 0x4c89a0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4c89a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c89a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C89A4u;
    {
        const bool branch_taken_0x4c89a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C89A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C89A4u;
        // 0x4c89a8: 0x3444ffff  ori         $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c89a4) {
            ctx->pc = 0x4C89B8u;
            goto label_4c89b8;
        }
    }
    ctx->pc = 0x4C89ACu;
    // 0x4c89ac: 0x0  nop
    ctx->pc = 0x4c89acu;
    // NOP
label_4c89b0:
    // 0x4c89b0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4c89b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c89b4: 0x462024  and         $a0, $v0, $a2
    ctx->pc = 0x4c89b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_4c89b8:
    // 0x4c89b8: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4c89b8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4c89bc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c89bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c89c0: 0x25aa0f2c  addiu       $t2, $t5, 0xF2C
    ctx->pc = 0x4c89c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), 3884));
    // 0x4c89c4: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x4c89c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x4c89c8: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4c89c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F2Cu));
    // 0x4c89cc: 0x25680f24  addiu       $t0, $t3, 0xF24
    ctx->pc = 0x4c89ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), 3876));
    // 0x4c89d0: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4c89d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4c89d4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4c89d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4c89d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c89d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c89dc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c89dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c89e0: 0x95870f28  lhu         $a3, 0xF28($t4)
    ctx->pc = 0x4c89e0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 3880)));
    // 0x4c89e4: 0x85060000  lh          $a2, 0x0($t0)
    ctx->pc = 0x4c89e4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c89e8: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4c89e8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4c89ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c89ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c89f0: 0x72400  sll         $a0, $a3, 16
    ctx->pc = 0x4c89f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4c89f4: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4c89f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c89f8: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4c89f8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4c89fc: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4c89fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c8a00: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x4c8a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x4c8a04: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c8a04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c8a08: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c8a08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c8a0c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c8a0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c8a10: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4c8a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4c8a14: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c8a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c8a18: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4c8a18u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4c8a1c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c8a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c8a20: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4c8a20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c8a24: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4c8a24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4c8a28: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4c8a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4c8a2c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c8a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c8a30: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4c8a30u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4c8a34: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4c8a34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c8a38: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4c8a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4c8a3c: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x4c8a3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x4c8a40: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4c8a40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4c8a44: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4c8a44u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x4c8a48: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4c8a48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c8a4c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C8A4Cu;
    {
        const bool branch_taken_0x4c8a4c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4C8A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8A4Cu;
        // 0x4c8a50: 0x346400ff  ori         $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8a4c) {
            ctx->pc = 0x4C8A5Cu;
            goto label_4c8a5c;
        }
    }
    ctx->pc = 0x4C8A54u;
    // 0x4c8a54: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4c8a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4c8a58: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x4c8a58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4c8a5c:
    // 0x4c8a5c: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x4c8a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x4c8a60: 0x25a40f2c  addiu       $a0, $t5, 0xF2C
    ctx->pc = 0x4c8a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 3884));
    // 0x4c8a64: 0x25880f28  addiu       $t0, $t4, 0xF28
    ctx->pc = 0x4c8a64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), 3880));
    // 0x4c8a68: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x4c8a68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4c8a6c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4c8a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c8a70: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x4c8a70u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c8a74: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x4c8a74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c8a78: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4c8a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4c8a7c: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x4c8a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x4c8a80: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4c8a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4c8a84: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4c8a84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4c8a88: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x4c8a88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c8a8c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4C8A8Cu;
    {
        const bool branch_taken_0x4c8a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C8A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8A8Cu;
        // 0x4c8a90: 0x27040f30  addiu       $a0, $t8, 0xF30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 24), 3888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8a8c) {
            ctx->pc = 0x4C8AB8u;
            goto label_4c8ab8;
        }
    }
    ctx->pc = 0x4C8A94u;
    // 0x4c8a94: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4c8a94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4c8a98: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4c8a98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c8a9c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4c8a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c8aa0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4c8aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4c8aa4: 0xad600f24  sw          $zero, 0xF24($t3)
    ctx->pc = 0x4c8aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 3876), GPR_U32(ctx, 0));
    // 0x4c8aa8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4c8aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4c8aac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c8aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c8ab0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c8ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c8ab4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4c8ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_4c8ab8:
    // 0x4c8ab8: 0x25650f24  addiu       $a1, $t3, 0xF24
    ctx->pc = 0x4c8ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 3876));
    // 0x4c8abc: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4c8abcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4c8ac0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4c8ac0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c8ac4: 0x3c190073  lui         $t9, 0x73
    ctx->pc = 0x4c8ac4u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)115 << 16));
    // 0x4c8ac8: 0x2726d680  addiu       $a2, $t9, -0x2980
    ctx->pc = 0x4c8ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 25), 4294956672));
    // 0x4c8acc: 0x260f0168  addiu       $t7, $s0, 0x168
    ctx->pc = 0x4c8accu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 360));
    // 0x4c8ad0: 0xa5c20000  sh          $v0, 0x0($t6)
    ctx->pc = 0x4c8ad0u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c8ad4: 0x86040118  lh          $a0, 0x118($s0)
    ctx->pc = 0x4c8ad4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x4c8ad8: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4c8ad8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c8adc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4c8adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c8ae0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4c8ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4c8ae4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c8ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c8ae8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c8ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c8aec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c8aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c8af0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4c8af0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4c8af4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c8af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c8af8: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x4c8af8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c8afc: 0xa4c424a0  sh          $a0, 0x24A0($a2)
    ctx->pc = 0x4c8afcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9376), (uint16_t)GPR_U32(ctx, 4));
    // 0x4c8b00: 0x85e20000  lh          $v0, 0x0($t7)
    ctx->pc = 0x4c8b00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4c8b04: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c8b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c8b08: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c8b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c8b0c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4c8b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4c8b10: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4c8b10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c8b14: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C8B14u;
    {
        const bool branch_taken_0x4c8b14 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4C8B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8B14u;
        // 0x4c8b18: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8b14) {
            ctx->pc = 0x4C8B28u;
            goto label_4c8b28;
        }
    }
    ctx->pc = 0x4C8B1Cu;
    // 0x4c8b1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4C8B1Cu;
    {
        const bool branch_taken_0x4c8b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C8B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8B1Cu;
        // 0x4c8b20: 0x3444ffff  ori         $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8b1c) {
            ctx->pc = 0x4C8B2Cu;
            goto label_4c8b2c;
        }
    }
    ctx->pc = 0x4C8B24u;
    // 0x4c8b24: 0x0  nop
    ctx->pc = 0x4c8b24u;
    // NOP
label_4c8b28:
    // 0x4c8b28: 0x472024  and         $a0, $v0, $a3
    ctx->pc = 0x4c8b28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_4c8b2c:
    // 0x4c8b2c: 0x25aa0f2c  addiu       $t2, $t5, 0xF2C
    ctx->pc = 0x4c8b2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), 3884));
    // 0x4c8b30: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c8b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c8b34: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4c8b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c8b38: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x4c8b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x4c8b3c: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4c8b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4c8b40: 0x25680f24  addiu       $t0, $t3, 0xF24
    ctx->pc = 0x4c8b40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), 3876));
    // 0x4c8b44: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c8b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c8b48: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4c8b48u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4c8b4c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c8b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c8b50: 0x95870f28  lhu         $a3, 0xF28($t4)
    ctx->pc = 0x4c8b50u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 3880)));
    // 0x4c8b54: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4c8b54u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4c8b58: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c8b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c8b5c: 0x72c00  sll         $a1, $a3, 16
    ctx->pc = 0x4c8b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4c8b60: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4c8b60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c8b64: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4c8b64u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4c8b68: 0x85060000  lh          $a2, 0x0($t0)
    ctx->pc = 0x4c8b68u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c8b6c: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x4c8b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x4c8b70: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4c8b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c8b74: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c8b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c8b78: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c8b78u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c8b7c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c8b7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4c8b80: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4c8b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4c8b84: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c8b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c8b88: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4c8b88u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4c8b8c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c8b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c8b90: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4c8b90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c8b94: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4c8b94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4c8b98: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4c8b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4c8b9c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c8b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c8ba0: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4c8ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4c8ba4: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4c8ba4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c8ba8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4c8ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4c8bac: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x4c8bacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x4c8bb0: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x4c8bb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x4c8bb4: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4c8bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4c8bb8: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4c8bb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c8bbc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C8BBCu;
    {
        const bool branch_taken_0x4c8bbc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4C8BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8BBCu;
        // 0x4c8bc0: 0x346500ff  ori         $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8bbc) {
            ctx->pc = 0x4C8BCCu;
            goto label_4c8bcc;
        }
    }
    ctx->pc = 0x4C8BC4u;
    // 0x4c8bc4: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4c8bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4c8bc8: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x4c8bc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4c8bcc:
    // 0x4c8bcc: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x4c8bccu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x4c8bd0: 0x25a40f2c  addiu       $a0, $t5, 0xF2C
    ctx->pc = 0x4c8bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 3884));
    // 0x4c8bd4: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x4c8bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4c8bd8: 0x91830f28  lbu         $v1, 0xF28($t4)
    ctx->pc = 0x4c8bd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 3880)));
    // 0x4c8bdc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4c8bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c8be0: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x4c8be0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c8be4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4c8be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4c8be8: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x4c8be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x4c8bec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4c8becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4c8bf0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4c8bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4c8bf4: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x4c8bf4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c8bf8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4C8BF8u;
    {
        const bool branch_taken_0x4c8bf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C8BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8BF8u;
        // 0x4c8bfc: 0x27040f30  addiu       $a0, $t8, 0xF30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 24), 3888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8bf8) {
            ctx->pc = 0x4C8C24u;
            goto label_4c8c24;
        }
    }
    ctx->pc = 0x4C8C00u;
    // 0x4c8c00: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4c8c00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4c8c04: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4c8c04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c8c08: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4c8c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c8c0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4c8c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4c8c10: 0xad600f24  sw          $zero, 0xF24($t3)
    ctx->pc = 0x4c8c10u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 3876), GPR_U32(ctx, 0));
    // 0x4c8c14: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4c8c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4c8c18: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c8c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c8c1c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c8c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c8c20: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4c8c20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_4c8c24:
    // 0x4c8c24: 0x25640f24  addiu       $a0, $t3, 0xF24
    ctx->pc = 0x4c8c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 3876));
    // 0x4c8c28: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4c8c28u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4c8c2c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4c8c2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c8c30: 0x2728d680  addiu       $t0, $t9, -0x2980
    ctx->pc = 0x4c8c30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 25), 4294956672));
    // 0x4c8c34: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x4c8c34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4c8c38: 0xa5e20000  sh          $v0, 0x0($t7)
    ctx->pc = 0x4c8c38u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c8c3c: 0x8605011c  lh          $a1, 0x11C($s0)
    ctx->pc = 0x4c8c3cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x4c8c40: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4c8c40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c8c44: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4c8c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c8c48: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4c8c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4c8c4c: 0x87060f30  lh          $a2, 0xF30($t8)
    ctx->pc = 0x4c8c4cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 3888)));
    // 0x4c8c50: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c8c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c8c54: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c8c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c8c58: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c8c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c8c5c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4c8c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4c8c60: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4c8c60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c8c64: 0x10c9000a  beq         $a2, $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x4C8C64u;
    {
        const bool branch_taken_0x4c8c64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        ctx->pc = 0x4C8C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8C64u;
        // 0x4c8c68: 0xa50224a2  sh          $v0, 0x24A2($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 9378), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8c64) {
            ctx->pc = 0x4C8C90u;
            goto label_4c8c90;
        }
    }
    ctx->pc = 0x4C8C6Cu;
    // 0x4c8c6c: 0xc12b6bc  jal         func_4ADAF0
    ctx->pc = 0x4C8C6Cu;
    SET_GPR_U32(ctx, 31, 0x4C8C74u);
    ctx->pc = 0x4C8C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C8C6Cu;
    // 0x4c8c70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADAF0u, 0x4C8C6Cu, 0x4C8C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C8C74u;
label_4c8c74:
    // 0x4c8c74: 0xc12b94c  jal         func_4AE530
    ctx->pc = 0x4C8C74u;
    SET_GPR_U32(ctx, 31, 0x4C8C7Cu);
    ctx->pc = 0x4C8C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C8C74u;
    // 0x4c8c78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE530u, 0x4C8C74u, 0x4C8C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C8C7Cu;
label_4c8c7c:
    // 0x4c8c7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c8c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8c80: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4c8c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c8c84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c8c84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c8c88: 0x8132474  j           func_4C91D0
    ctx->pc = 0x4C8C88u;
    ctx->pc = 0x4C8C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C8C88u;
    // 0x4c8c8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C91D0u;
    goto label_4c91d0;
    ctx->pc = 0x4C8C90u;
label_4c8c90:
    // 0x4c8c90: 0x260301bc  addiu       $v1, $s0, 0x1BC
    ctx->pc = 0x4c8c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4c8c94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c8c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8c98: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4c8c98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c8c9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c8c9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c8ca0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4c8ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c8ca4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c8ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c8ca8: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4c8ca8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c8cac: 0x813232e  j           func_4C8CB8
    ctx->pc = 0x4C8CACu;
    ctx->pc = 0x4C8CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C8CACu;
    // 0x4c8cb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8CB8u;
    goto label_4c8cb8;
    ctx->pc = 0x4C8CB4u;
    // 0x4c8cb4: 0x0  nop
    ctx->pc = 0x4c8cb4u;
    // NOP
label_4c8cb8:
    // 0x4c8cb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c8cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c8cbc: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4c8cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4c8cc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c8cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c8cc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c8cc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8cc8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4c8cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4c8ccc: 0x24a50f24  addiu       $a1, $a1, 0xF24
    ctx->pc = 0x4c8cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3876));
    // 0x4c8cd0: 0x3c18ffff  lui         $t8, 0xFFFF
    ctx->pc = 0x4c8cd0u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)65535 << 16));
    // 0x4c8cd4: 0x860201b4  lh          $v0, 0x1B4($s0)
    ctx->pc = 0x4c8cd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x4c8cd8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4c8cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F24u));
    // 0x4c8cdc: 0x581025  or          $v0, $v0, $t8
    ctx->pc = 0x4c8cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 24));
    // 0x4c8ce0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c8ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c8ce4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c8ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c8ce8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4c8ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4c8cec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c8cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c8cf0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4c8cf0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c8cf4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4c8cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4c8cf8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c8cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c8cfc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c8cfcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c8d00: 0x581025  or          $v0, $v0, $t8
    ctx->pc = 0x4c8d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 24));
    // 0x4c8d04: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c8d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c8d08: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4c8d08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4c8d0c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4c8d0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c8d10: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C8D10u;
    {
        const bool branch_taken_0x4c8d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c8d10) {
            ctx->pc = 0x4C8D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C8D10u;
            // 0x4c8d14: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C8D28u;
            goto label_4c8d28;
        }
    }
    ctx->pc = 0x4C8D18u;
    // 0x4c8d18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c8d18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c8d1c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4c8d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c8d20: 0x81323a6  j           func_4C8E98
    ctx->pc = 0x4C8D20u;
    ctx->pc = 0x4C8D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C8D20u;
    // 0x4c8d24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8E98u;
    goto label_4c8e98;
    ctx->pc = 0x4C8D28u;
label_4c8d28:
    // 0x4c8d28: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4c8d28u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4c8d2c: 0x258c0f30  addiu       $t4, $t4, 0xF30
    ctx->pc = 0x4c8d2cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 3888));
    // 0x4c8d30: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4c8d30u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4c8d34: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x4c8d34u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0F30u));
    // 0x4c8d38: 0x581024  and         $v0, $v0, $t8
    ctx->pc = 0x4c8d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 24));
    // 0x4c8d3c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c8d3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c8d40: 0x25ad0f34  addiu       $t5, $t5, 0xF34
    ctx->pc = 0x4c8d40u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 3892));
    // 0x4c8d44: 0x581025  or          $v0, $v0, $t8
    ctx->pc = 0x4c8d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 24));
    // 0x4c8d48: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c8d48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c8d4c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4c8d4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4c8d50: 0x8da60000  lw          $a2, 0x0($t5)
    ctx->pc = 0x4c8d50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4c8d54: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4c8d54u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4c8d58: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c8d58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c8d5c: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4c8d5cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4c8d60: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c8d60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c8d64: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x4c8d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4c8d68: 0x25ce0f38  addiu       $t6, $t6, 0xF38
    ctx->pc = 0x4c8d68u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 3896));
    // 0x4c8d6c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4c8d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4c8d70: 0x8dc80000  lw          $t0, 0x0($t6)
    ctx->pc = 0x4c8d70u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F0F38u));
    // 0x4c8d74: 0x581024  and         $v0, $v0, $t8
    ctx->pc = 0x4c8d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 24));
    // 0x4c8d78: 0x8c6f0f48  lw          $t7, 0xF48($v1)
    ctx->pc = 0x4c8d78u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3912)));
    // 0x4c8d7c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c8d7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c8d80: 0x858a0000  lh          $t2, 0x0($t4)
    ctx->pc = 0x4c8d80u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c8d84: 0x581025  or          $v0, $v0, $t8
    ctx->pc = 0x4c8d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 24));
    // 0x4c8d88: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4c8d88u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4c8d8c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4c8d8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4c8d90: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4c8d90u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4c8d94: 0xada60000  sw          $a2, 0x0($t5)
    ctx->pc = 0x4c8d94u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 6));
    // 0x4c8d98: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c8d98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c8d9c: 0x256b0f28  addiu       $t3, $t3, 0xF28
    ctx->pc = 0x4c8d9cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 3880));
    // 0x4c8da0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4c8da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4c8da4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x4c8da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4c8da8: 0x346303e8  ori         $v1, $v1, 0x3E8
    ctx->pc = 0x4c8da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1000);
    // 0x4c8dac: 0x85a90000  lh          $t1, 0x0($t5)
    ctx->pc = 0x4c8dacu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4c8db0: 0x581024  and         $v0, $v0, $t8
    ctx->pc = 0x4c8db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 24));
    // 0x4c8db4: 0x8d670000  lw          $a3, 0x0($t3)
    ctx->pc = 0x4c8db4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c8db8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c8db8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c8dbc: 0x581025  or          $v0, $v0, $t8
    ctx->pc = 0x4c8dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 24));
    // 0x4c8dc0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4c8dc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4c8dc4: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4c8dc4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4c8dc8: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x4c8dc8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4c8dcc: 0xadc80000  sw          $t0, 0x0($t6)
    ctx->pc = 0x4c8dccu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 8));
    // 0x4c8dd0: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4c8dd0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4c8dd4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x4c8dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8dd8: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x4c8dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4c8ddc: 0x85c30000  lh          $v1, 0x0($t6)
    ctx->pc = 0x4c8ddcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4c8de0: 0x581024  and         $v0, $v0, $t8
    ctx->pc = 0x4c8de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 24));
    // 0x4c8de4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c8de4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c8de8: 0x1425023  subu        $t2, $t2, $v0
    ctx->pc = 0x4c8de8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x4c8dec: 0x1585025  or          $t2, $t2, $t8
    ctx->pc = 0x4c8decu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 24));
    // 0x4c8df0: 0xaa2824  and         $a1, $a1, $t2
    ctx->pc = 0x4c8df0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
    // 0x4c8df4: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4c8df4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4c8df8: 0x8de20004  lw          $v0, 0x4($t7)
    ctx->pc = 0x4c8df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
    // 0x4c8dfc: 0x581024  and         $v0, $v0, $t8
    ctx->pc = 0x4c8dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 24));
    // 0x4c8e00: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c8e00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c8e04: 0x1224823  subu        $t1, $t1, $v0
    ctx->pc = 0x4c8e04u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4c8e08: 0x1384825  or          $t1, $t1, $t8
    ctx->pc = 0x4c8e08u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 24));
    // 0x4c8e0c: 0xc93024  and         $a2, $a2, $t1
    ctx->pc = 0x4c8e0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 9));
    // 0x4c8e10: 0xada60000  sw          $a2, 0x0($t5)
    ctx->pc = 0x4c8e10u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 6));
    // 0x4c8e14: 0x8de20008  lw          $v0, 0x8($t7)
    ctx->pc = 0x4c8e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x4c8e18: 0xad670000  sw          $a3, 0x0($t3)
    ctx->pc = 0x4c8e18u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 7));
    // 0x4c8e1c: 0x581024  and         $v0, $v0, $t8
    ctx->pc = 0x4c8e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 24));
    // 0x4c8e20: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c8e20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c8e24: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4c8e24u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4c8e28: 0x781825  or          $v1, $v1, $t8
    ctx->pc = 0x4c8e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 24));
    // 0x4c8e2c: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4c8e2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4c8e30: 0xadc80000  sw          $t0, 0x0($t6)
    ctx->pc = 0x4c8e30u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 8));
    // 0x4c8e34: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4C8E34u;
    SET_GPR_U32(ctx, 31, 0x4C8E3Cu);
    ctx->pc = 0x4C8E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C8E34u;
    // 0x4c8e38: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4C8E34u, 0x4C8E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C8E3Cu;
label_4c8e3c:
    // 0x4c8e3c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4C8E3Cu;
    {
        const bool branch_taken_0x4c8e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C8E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8E3Cu;
        // 0x4c8e40: 0x24030060  addiu       $v1, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8e3c) {
            ctx->pc = 0x4C8E58u;
            goto label_4c8e58;
        }
    }
    ctx->pc = 0x4C8E44u;
    // 0x4c8e44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c8e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8e48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c8e48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c8e4c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4c8e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c8e50: 0x81323a6  j           func_4C8E98
    ctx->pc = 0x4C8E50u;
    ctx->pc = 0x4C8E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C8E50u;
    // 0x4c8e54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8E98u;
    goto label_4c8e98;
    ctx->pc = 0x4C8E58u;
label_4c8e58:
    // 0x4c8e58: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x4c8e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x4c8e5c: 0xa602015c  sh          $v0, 0x15C($s0)
    ctx->pc = 0x4c8e5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 348), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c8e60: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x4c8e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4c8e64: 0xa6030158  sh          $v1, 0x158($s0)
    ctx->pc = 0x4c8e64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 344), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c8e68: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x4c8e68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x4c8e6c: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4C8E6Cu;
    SET_GPR_U32(ctx, 31, 0x4C8E74u);
    ctx->pc = 0x4C8E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C8E6Cu;
    // 0x4c8e70: 0xa482fa44  sh          $v0, -0x5BC($a0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294965828), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4C8E6Cu, 0x4C8E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C8E74u;
label_4c8e74:
    // 0x4c8e74: 0x260301bc  addiu       $v1, $s0, 0x1BC
    ctx->pc = 0x4c8e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4c8e78: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4c8e78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c8e7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c8e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8e80: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4c8e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c8e84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c8e84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c8e88: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c8e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c8e8c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4c8e8cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c8e90: 0x81323a6  j           func_4C8E98
    ctx->pc = 0x4C8E90u;
    ctx->pc = 0x4C8E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C8E90u;
    // 0x4c8e94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8E98u;
    goto label_4c8e98;
    ctx->pc = 0x4C8E98u;
label_4c8e98:
    // 0x4c8e98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4c8e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4c8e9c: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4c8e9cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4c8ea0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c8ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c8ea4: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4c8ea4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4c8ea8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c8ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c8eac: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4c8eacu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4c8eb0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c8eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4c8eb4: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4c8eb4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4c8eb8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4c8eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4c8ebc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4c8ebcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8ec0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4c8ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4c8ec4: 0x26520f30  addiu       $s2, $s2, 0xF30
    ctx->pc = 0x4c8ec4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3888));
    // 0x4c8ec8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4c8ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4c8ecc: 0x26310f34  addiu       $s1, $s1, 0xF34
    ctx->pc = 0x4c8eccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3892));
    // 0x4c8ed0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4c8ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4c8ed4: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4c8ed4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4c8ed8: 0x25290f38  addiu       $t1, $t1, 0xF38
    ctx->pc = 0x4c8ed8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3896));
    // 0x4c8edc: 0x258c0f48  addiu       $t4, $t4, 0xF48
    ctx->pc = 0x4c8edcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 3912));
    // 0x4c8ee0: 0x86620130  lh          $v0, 0x130($s3)
    ctx->pc = 0x4c8ee0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x4c8ee4: 0x266d0010  addiu       $t5, $s3, 0x10
    ctx->pc = 0x4c8ee4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x4c8ee8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4c8ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F30u));
    // 0x4c8eec: 0x266e0014  addiu       $t6, $s3, 0x14
    ctx->pc = 0x4c8eecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x4c8ef0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4c8ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4c8ef4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4c8ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0F34u));
    // 0x4c8ef8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c8ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c8efc: 0x266f0018  addiu       $t7, $s3, 0x18
    ctx->pc = 0x4c8efcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x4c8f00: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c8f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c8f04: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c8f04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4c8f08: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4c8f08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4c8f0c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c8f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c8f10: 0x3c0a0073  lui         $t2, 0x73
    ctx->pc = 0x4c8f10u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)115 << 16));
    // 0x4c8f14: 0x86620132  lh          $v0, 0x132($s3)
    ctx->pc = 0x4c8f14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 306)));
    // 0x4c8f18: 0x254ad680  addiu       $t2, $t2, -0x2980
    ctx->pc = 0x4c8f18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294956672));
    // 0x4c8f1c: 0x8d8b0000  lw          $t3, 0x0($t4)
    ctx->pc = 0x4c8f1cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c8f20: 0x2555249c  addiu       $s5, $t2, 0x249C
    ctx->pc = 0x4c8f20u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 10), 9372));
    // 0x4c8f24: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4c8f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4c8f28: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x4c8f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c8f2c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4c8f2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4c8f30: 0x25542494  addiu       $s4, $t2, 0x2494
    ctx->pc = 0x4c8f30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 10), 9364));
    // 0x4c8f34: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4c8f34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x4c8f38: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c8f38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4c8f3c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c8f3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c8f40: 0x254a2498  addiu       $t2, $t2, 0x2498
    ctx->pc = 0x4c8f40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 9368));
    // 0x4c8f44: 0x86620134  lh          $v0, 0x134($s3)
    ctx->pc = 0x4c8f44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 308)));
    // 0x4c8f48: 0x86460000  lh          $a2, 0x0($s2)
    ctx->pc = 0x4c8f48u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c8f4c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4c8f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4c8f50: 0x86280000  lh          $t0, 0x0($s1)
    ctx->pc = 0x4c8f50u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c8f54: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4c8f54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4c8f58: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x4c8f58u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x4c8f5c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c8f5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c8f60: 0x8d620050  lw          $v0, 0x50($t3)
    ctx->pc = 0x4c8f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 80)));
    // 0x4c8f64: 0x85270000  lh          $a3, 0x0($t1)
    ctx->pc = 0x4c8f64u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c8f68: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4c8f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4c8f6c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c8f6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c8f70: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4c8f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4c8f74: 0xd03025  or          $a2, $a2, $s0
    ctx->pc = 0x4c8f74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 16));
    // 0x4c8f78: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4c8f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4c8f7c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4c8f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4c8f80: 0x8d620054  lw          $v0, 0x54($t3)
    ctx->pc = 0x4c8f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 84)));
    // 0x4c8f84: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4c8f84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c8f88: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4c8f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4c8f8c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c8f8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c8f90: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4c8f90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4c8f94: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x4c8f94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4c8f98: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c8f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c8f9c: 0x1104025  or          $t0, $t0, $s0
    ctx->pc = 0x4c8f9cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 16));
    // 0x4c8fa0: 0x882024  and         $a0, $a0, $t0
    ctx->pc = 0x4c8fa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x4c8fa4: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4c8fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x4c8fa8: 0x8d620058  lw          $v0, 0x58($t3)
    ctx->pc = 0x4c8fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 88)));
    // 0x4c8fac: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4c8facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4c8fb0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c8fb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c8fb4: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4c8fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4c8fb8: 0xf03825  or          $a3, $a3, $s0
    ctx->pc = 0x4c8fb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 16));
    // 0x4c8fbc: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x4c8fbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x4c8fc0: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x4c8fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x4c8fc4: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x4c8fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4c8fc8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4c8fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4c8fcc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c8fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c8fd0: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x4c8fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x4c8fd4: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4c8fd4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c8fd8: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x4c8fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4c8fdc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4c8fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4c8fe0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4c8fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4c8fe4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c8fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c8fe8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c8fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c8fec: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x4c8fecu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x4c8ff0: 0x95230000  lhu         $v1, 0x0($t1)
    ctx->pc = 0x4c8ff0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c8ff4: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x4c8ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4c8ff8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4c8ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4c8ffc: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4c8ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4c9000: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c9000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c9004: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c9004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c9008: 0xade20000  sw          $v0, 0x0($t7)
    ctx->pc = 0x4c9008u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
    // 0x4c900c: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x4c900cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c9010: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4c9010u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c9014: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4c9014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c9018: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x4c9018u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c901c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4c901cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4c9020: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x4c9020u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c9024: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c9024u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c9028: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4c9028u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4c902c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4c902cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4c9030: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x4c9030u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c9034: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4c9034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4c9038: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4c9038u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4c903c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4c903cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4c9040: 0xae480000  sw          $t0, 0x0($s2)
    ctx->pc = 0x4c9040u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 8));
    // 0x4c9044: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4c9044u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4c9048: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4c9048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4c904c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4c904cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4c9050: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c9050u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c9054: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4c9054u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4c9058: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x4c9058u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x4c905c: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x4c905cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x4c9060: 0xae270000  sw          $a3, 0x0($s1)
    ctx->pc = 0x4c9060u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
    // 0x4c9064: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4c9064u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4c9068: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x4c9068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4c906c: 0x85240000  lh          $a0, 0x0($t1)
    ctx->pc = 0x4c906cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c9070: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4c9070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4c9074: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4c9074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c9078: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c9078u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c907c: 0x86460000  lh          $a2, 0x0($s2)
    ctx->pc = 0x4c907cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c9080: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4c9080u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4c9084: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c9084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c9088: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x4c9088u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x4c908c: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x4c908cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c9090: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4c9090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4c9094: 0x63023  negu        $a2, $a2
    ctx->pc = 0x4c9094u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x4c9098: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4c9098u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4c909c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c909cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c90a0: 0x52823  negu        $a1, $a1
    ctx->pc = 0x4c90a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x4c90a4: 0xd03025  or          $a2, $a2, $s0
    ctx->pc = 0x4c90a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 16));
    // 0x4c90a8: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4c90a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c90ac: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x4c90acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x4c90b0: 0x1064024  and         $t0, $t0, $a2
    ctx->pc = 0x4c90b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x4c90b4: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x4c90b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x4c90b8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4c90b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4c90bc: 0xae480000  sw          $t0, 0x0($s2)
    ctx->pc = 0x4c90bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 8));
    // 0x4c90c0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4c90c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4c90c4: 0xae270000  sw          $a3, 0x0($s1)
    ctx->pc = 0x4c90c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
    // 0x4c90c8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c90c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c90cc: 0x96470000  lhu         $a3, 0x0($s2)
    ctx->pc = 0x4c90ccu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c90d0: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4c90d0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4c90d4: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x4c90d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4c90d8: 0x96260000  lhu         $a2, 0x0($s1)
    ctx->pc = 0x4c90d8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c90dc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4c90dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4c90e0: 0x95250000  lhu         $a1, 0x0($t1)
    ctx->pc = 0x4c90e0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c90e4: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4c90e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c90e8: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x4c90e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4c90ec: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x4c90ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c90f0: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4c90f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4c90f4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4c90f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4c90f8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c90f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c90fc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c90fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c9100: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x4c9100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x4c9104: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4c9104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4c9108: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4c9108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4c910c: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x4c910cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x4c9110: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4c9110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4c9114: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4c9114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4c9118: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x4c9118u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x4c911c: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4c911cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4c9120: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4C9120u;
    SET_GPR_U32(ctx, 31, 0x4C9128u);
    ctx->pc = 0x4C9124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C9120u;
    // 0x4c9124: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4C9120u, 0x4C9128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C9128u;
label_4c9128:
    // 0x4c9128: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4c9128u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4c912c: 0x25290f24  addiu       $t1, $t1, 0xF24
    ctx->pc = 0x4c912cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3876));
    // 0x4c9130: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x4c9130u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c9134: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4c9134u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F24u));
    // 0x4c9138: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c9138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c913c: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x4c913cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c9140: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x4c9140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x4c9144: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c9144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c9148: 0x1104024  and         $t0, $t0, $s0
    ctx->pc = 0x4c9148u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 16));
    // 0x4c914c: 0x30640020  andi        $a0, $v1, 0x20
    ctx->pc = 0x4c914cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x4c9150: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c9150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c9154: 0xf03824  and         $a3, $a3, $s0
    ctx->pc = 0x4c9154u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 16));
    // 0x4c9158: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x4c9158u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x4c915c: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x4c915cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x4c9160: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x4c9160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c9164: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4c9164u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4c9168: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4c9168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c916c: 0xae480000  sw          $t0, 0x0($s2)
    ctx->pc = 0x4c916cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 8));
    // 0x4c9170: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x4c9170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c9174: 0xc127d62  jal         func_49F588
    ctx->pc = 0x4C9174u;
    SET_GPR_U32(ctx, 31, 0x4C917Cu);
    ctx->pc = 0x4C9178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C9174u;
    // 0x4c9178: 0xae270000  sw          $a3, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F588u, 0x4C9174u, 0x4C917Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C917Cu;
label_4c917c:
    // 0x4c917c: 0xc127bf2  jal         func_49EFC8
    ctx->pc = 0x4C917Cu;
    SET_GPR_U32(ctx, 31, 0x4C9184u);
    ctx->pc = 0x4C9180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C917Cu;
    // 0x4c9180: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFC8u, 0x4C917Cu, 0x4C9184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C9184u;
label_4c9184:
    // 0x4c9184: 0xc1324a2  jal         func_4C9288
    ctx->pc = 0x4C9184u;
    SET_GPR_U32(ctx, 31, 0x4C918Cu);
    ctx->pc = 0x4C9188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C9184u;
    // 0x4c9188: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C9288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C9288u, 0x4C9184u, 0x4C918Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C918Cu;
label_4c918c:
    // 0x4c918c: 0x26630120  addiu       $v1, $s3, 0x120
    ctx->pc = 0x4c918cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
    // 0x4c9190: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4c9190u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c9194: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4c9194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c9198: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x4c9198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x4c919c: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4C919Cu;
    SET_GPR_U32(ctx, 31, 0x4C91A4u);
    ctx->pc = 0x4C91A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C919Cu;
    // 0x4c91a0: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4C919Cu, 0x4C91A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C91A4u;
label_4c91a4:
    // 0x4c91a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4c91a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c91a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c91a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c91ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c91acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c91b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c91b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c91b4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c91b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c91b8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c91b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c91bc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4c91bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c91c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4c91c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c91c4: 0x8132474  j           func_4C91D0
    ctx->pc = 0x4C91C4u;
    ctx->pc = 0x4C91C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C91C4u;
    // 0x4c91c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C91D0u;
    goto label_4c91d0;
    ctx->pc = 0x4C91CCu;
    // 0x4c91cc: 0x0  nop
    ctx->pc = 0x4c91ccu;
    // NOP
label_4c91d0:
    // 0x4c91d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c91d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4c91d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c91d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c91d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c91d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c91dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c91dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4c91e0: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4C91E0u;
    SET_GPR_U32(ctx, 31, 0x4C91E8u);
    ctx->pc = 0x4C91E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C91E0u;
    // 0x4c91e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4C91E0u, 0x4C91E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C91E8u;
label_4c91e8:
    // 0x4c91e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c91e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c91ec: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x4C91ECu;
    {
        const bool branch_taken_0x4c91ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C91F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C91ECu;
        // 0x4c91f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c91ec) {
            ctx->pc = 0x4C9270u;
            goto label_4c9270;
        }
    }
    ctx->pc = 0x4C91F4u;
    // 0x4c91f4: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4C91F4u;
    SET_GPR_U32(ctx, 31, 0x4C91FCu);
    ctx->pc = 0x4C91F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C91F4u;
    // 0x4c91f8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4C91F4u, 0x4C91FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C91FCu;
label_4c91fc:
    // 0x4c91fc: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4c91fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4c9200: 0x2466d680  addiu       $a2, $v1, -0x2980
    ctx->pc = 0x4c9200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x4c9204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c9204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c9208: 0x1451000f  bne         $v0, $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x4C9208u;
    {
        const bool branch_taken_0x4c9208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x4C920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9208u;
        // 0x4c920c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9208) {
            ctx->pc = 0x4C9248u;
            goto label_4c9248;
        }
    }
    ctx->pc = 0x4C9210u;
    // 0x4c9210: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4c9210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4c9214: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x4c9214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x4c9218: 0xa4c223c4  sh          $v0, 0x23C4($a2)
    ctx->pc = 0x4c9218u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9156), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c921c: 0xa4c3232e  sh          $v1, 0x232E($a2)
    ctx->pc = 0x4c921cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9006), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c9220: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4C9220u;
    SET_GPR_U32(ctx, 31, 0x4C9228u);
    ctx->pc = 0x4C9224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C9220u;
    // 0x4c9224: 0xa4c0232c  sh          $zero, 0x232C($a2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 6), 9004), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4C9220u, 0x4C9228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C9228u;
label_4c9228:
    // 0x4c9228: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4C9228u;
    SET_GPR_U32(ctx, 31, 0x4C9230u);
    ctx->pc = 0x4C922Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C9228u;
    // 0x4c922c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4C9228u, 0x4C9230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C9230u;
label_4c9230:
    // 0x4c9230: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4C9230u;
    SET_GPR_U32(ctx, 31, 0x4C9238u);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4C9230u, 0x4C9238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C9238u;
label_4c9238:
    // 0x4c9238: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4C9238u;
    SET_GPR_U32(ctx, 31, 0x4C9240u);
    ctx->pc = 0x4C923Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C9238u;
    // 0x4c923c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4C9238u, 0x4C9240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C9240u;
label_4c9240:
    // 0x4c9240: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4C9240u;
    {
        const bool branch_taken_0x4c9240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C9244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9240u;
        // 0x4c9244: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9240) {
            ctx->pc = 0x4C9274u;
            goto label_4c9274;
        }
    }
    ctx->pc = 0x4C9248u;
label_4c9248:
    // 0x4c9248: 0xc1280fa  jal         func_4A03E8
    ctx->pc = 0x4C9248u;
    SET_GPR_U32(ctx, 31, 0x4C9250u);
    ctx->pc = 0x4C924Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C9248u;
    // 0x4c924c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A03E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A03E8u, 0x4C9248u, 0x4C9250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C9250u;
label_4c9250:
    // 0x4c9250: 0x14510007  bne         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4C9250u;
    {
        const bool branch_taken_0x4c9250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x4C9254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9250u;
        // 0x4c9254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9250) {
            ctx->pc = 0x4C9270u;
            goto label_4c9270;
        }
    }
    ctx->pc = 0x4C9258u;
    // 0x4c9258: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x4c9258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x4c925c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4c925cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4c9260: 0xc122f26  jal         func_48BC98
    ctx->pc = 0x4C9260u;
    SET_GPR_U32(ctx, 31, 0x4C9268u);
    ctx->pc = 0x4C9264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C9260u;
    // 0x4c9264: 0xa443f9ae  sh          $v1, -0x652($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294965678), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BC98u, 0x4C9260u, 0x4C9268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C9268u;
label_4c9268:
    // 0x4c9268: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4C9268u;
    SET_GPR_U32(ctx, 31, 0x4C9270u);
    ctx->pc = 0x4C926Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C9268u;
    // 0x4c926c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4C9268u, 0x4C9270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C9270u;
label_4c9270:
    // 0x4c9270: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c9270u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4c9274:
    // 0x4c9274: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c9274u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c9278: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c9278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c927c: 0x3e00008  jr          $ra
    ctx->pc = 0x4C927Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C9280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C927Cu;
        // 0x4c9280: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C927Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C9284u;
    // 0x4c9284: 0x0  nop
    ctx->pc = 0x4c9284u;
    // NOP
    ctx->pc = 0x4c9288u;
}
