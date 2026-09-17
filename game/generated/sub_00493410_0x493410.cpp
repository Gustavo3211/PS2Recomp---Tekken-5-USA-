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

// Function: sub_00493410
// Address: 0x493410 - 0x494b10
void sub_00493410_0x493410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00493410_0x493410");
#endif

    switch (ctx->pc) {
        case 0x493458u: goto label_493458;
        case 0x493498u: goto label_493498;
        case 0x4934c4u: goto label_4934c4;
        case 0x4934d8u: goto label_4934d8;
        case 0x493548u: goto label_493548;
        case 0x493574u: goto label_493574;
        case 0x4935f0u: goto label_4935f0;
        case 0x493780u: goto label_493780;
        case 0x493798u: goto label_493798;
        case 0x493928u: goto label_493928;
        case 0x493a30u: goto label_493a30;
        case 0x493a84u: goto label_493a84;
        case 0x493d60u: goto label_493d60;
        case 0x493d78u: goto label_493d78;
        case 0x493dccu: goto label_493dcc;
        case 0x4940a8u: goto label_4940a8;
        case 0x4940d4u: goto label_4940d4;
        case 0x494238u: goto label_494238;
        case 0x49428cu: goto label_49428c;
        case 0x4942f4u: goto label_4942f4;
        case 0x494578u: goto label_494578;
        case 0x494590u: goto label_494590;
        case 0x4945e4u: goto label_4945e4;
        case 0x49464cu: goto label_49464c;
        case 0x4948d0u: goto label_4948d0;
        case 0x49491cu: goto label_49491c;
        case 0x494a18u: goto label_494a18;
        case 0x494af0u: goto label_494af0;
        case 0x494af8u: goto label_494af8;
        case 0x494b00u: goto label_494b00;
        case 0x494b08u: goto label_494b08;
        default: break;
    }

    ctx->pc = 0x493410u;

    // 0x493410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x493410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x493414: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x493414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x493418: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x493418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x49341c: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x49341cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x493420: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x493420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x493424: 0x2610d680  addiu       $s0, $s0, -0x2980
    ctx->pc = 0x493424u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x493428: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x493428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x49342c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x49342cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x493430: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x493430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x493434: 0x860222b8  lh          $v0, 0x22B8($s0)
    ctx->pc = 0x493434u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72F938u));
    // 0x493438: 0x8e0321f4  lw          $v1, 0x21F4($s0)
    ctx->pc = 0x493438u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x72F874u));
    // 0x49343c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x49343cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x493440: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x493440u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x493444: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x493444u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x493448: 0x8e310880  lw          $s1, 0x880($s1)
    ctx->pc = 0x493448u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2176)));
    // 0x49344c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x49344cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493450: 0xc126cf2  jal         func_49B3C8
    ctx->pc = 0x493450u;
    SET_GPR_U32(ctx, 31, 0x493458u);
    ctx->pc = 0x493454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x493450u;
    // 0x493454: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49B3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49B3C8u, 0x493450u, 0x493458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493458u;
label_493458:
    // 0x493458: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x493458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x49345c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x49345cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x493460: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x493460u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x493464: 0x960222ba  lhu         $v0, 0x22BA($s0)
    ctx->pc = 0x493464u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8890)));
    // 0x493468: 0xa6220008  sh          $v0, 0x8($s1)
    ctx->pc = 0x493468u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x49346c: 0x960322bc  lhu         $v1, 0x22BC($s0)
    ctx->pc = 0x49346cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8892)));
    // 0x493470: 0xa623000a  sh          $v1, 0xA($s1)
    ctx->pc = 0x493470u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x493474: 0x960222be  lhu         $v0, 0x22BE($s0)
    ctx->pc = 0x493474u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8894)));
    // 0x493478: 0xa632000e  sh          $s2, 0xE($s1)
    ctx->pc = 0x493478u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 18));
    // 0x49347c: 0xa622000c  sh          $v0, 0xC($s1)
    ctx->pc = 0x49347cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x493480: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x493480u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x493484: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x493484u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x493488: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x493488u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49348c: 0x8124c80  j           func_493200
    ctx->pc = 0x49348Cu;
    ctx->pc = 0x493490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49348Cu;
    // 0x493490: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x493200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x493200u, 0x49348Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x493494u;
    // 0x493494: 0x0  nop
    ctx->pc = 0x493494u;
    // NOP
label_493498:
    // 0x493498: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x493498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x49349c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x49349cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4934a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4934a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4934a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4934a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4934a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4934a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4934ac: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4934acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4934b0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4934b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4934b4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4934b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4934b8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4934b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x4934bc: 0xc12462c  jal         func_4918B0
    ctx->pc = 0x4934BCu;
    SET_GPR_U32(ctx, 31, 0x4934C4u);
    ctx->pc = 0x4934C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4934BCu;
    // 0x4934c0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4918B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4918B0u, 0x4934BCu, 0x4934C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4934C4u;
label_4934c4:
    // 0x4934c4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4934c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4934c8: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4934c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4934cc: 0x244500f0  addiu       $a1, $v0, 0xF0
    ctx->pc = 0x4934ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x4934d0: 0x24670880  addiu       $a3, $v1, 0x880
    ctx->pc = 0x4934d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 2176));
    // 0x4934d4: 0x248608d0  addiu       $a2, $a0, 0x8D0
    ctx->pc = 0x4934d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 2256));
label_4934d8:
    // 0x4934d8: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x4934d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x4934dc: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x4934dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x4934e0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4934e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x4934e4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4934e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4934e8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4934e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4934ec: 0x2a64000a  slti        $a0, $s3, 0xA
    ctx->pc = 0x4934ecu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x4934f0: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4934F0u;
    {
        const bool branch_taken_0x4934f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4934F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4934F0u;
        // 0x4934f4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4934f0) {
            ctx->pc = 0x4934D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4934d8;
        }
    }
    ctx->pc = 0x4934F8u;
    // 0x4934f8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4934f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4934fc: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x4934fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x493500: 0x245408d0  addiu       $s4, $v0, 0x8D0
    ctx->pc = 0x493500u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 2256));
    // 0x493504: 0x2402006f  addiu       $v0, $zero, 0x6F
    ctx->pc = 0x493504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x493508: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x493508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x49350c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x49350cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493510: 0x24760a10  addiu       $s6, $v1, 0xA10
    ctx->pc = 0x493510u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 2576));
    // 0x493514: 0x1482000c  bne         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x493514u;
    {
        const bool branch_taken_0x493514 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x493518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493514u;
        // 0x493518: 0x26950004  addiu       $s5, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493514) {
            ctx->pc = 0x493548u;
            goto label_493548;
        }
    }
    ctx->pc = 0x49351Cu;
    // 0x49351c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49351cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x493520: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x493520u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x493524: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x493524u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x493528: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x493528u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49352c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x49352cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x493530: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x493530u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x493534: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x493534u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x493538: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x493538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x49353c: 0x8124c9a  j           func_493268
    ctx->pc = 0x49353Cu;
    ctx->pc = 0x493540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49353Cu;
    // 0x493540: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x493268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x493268u, 0x49353Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x493544u;
    // 0x493544: 0x0  nop
    ctx->pc = 0x493544u;
    // NOP
label_493548:
    // 0x493548: 0x1380c0  sll         $s0, $s3, 3
    ctx->pc = 0x493548u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x49354c: 0x139100  sll         $s2, $s3, 4
    ctx->pc = 0x49354cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x493550: 0x2168021  addu        $s0, $s0, $s6
    ctx->pc = 0x493550u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x493554: 0x2548821  addu        $s1, $s2, $s4
    ctx->pc = 0x493554u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x493558: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x493558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49355c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x49355cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x493560: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x493560u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x493564: 0x2559021  addu        $s2, $s2, $s5
    ctx->pc = 0x493564u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x493568: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x493568u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x49356c: 0xc126cf2  jal         func_49B3C8
    ctx->pc = 0x49356Cu;
    SET_GPR_U32(ctx, 31, 0x493574u);
    ctx->pc = 0x493570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49356Cu;
    // 0x493570: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49B3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49B3C8u, 0x49356Cu, 0x493574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493574u;
label_493574:
    // 0x493574: 0x92060007  lbu         $a2, 0x7($s0)
    ctx->pc = 0x493574u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x493578: 0x92050004  lbu         $a1, 0x4($s0)
    ctx->pc = 0x493578u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x49357c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x49357cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x493580: 0x92040005  lbu         $a0, 0x5($s0)
    ctx->pc = 0x493580u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x493584: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x493584u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x493588: 0x92030006  lbu         $v1, 0x6($s0)
    ctx->pc = 0x493588u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x49358c: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x49358cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x493590: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x493590u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x493594: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x493594u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x493598: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x493598u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x49359c: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x49359cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    // 0x4935a0: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x4935a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x4935a4: 0x63603  sra         $a2, $a2, 24
    ctx->pc = 0x4935a4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 24));
    // 0x4935a8: 0x2a67000a  slti        $a3, $s3, 0xA
    ctx->pc = 0x4935a8u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x4935ac: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4935acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4935b0: 0xa626000e  sh          $a2, 0xE($s1)
    ctx->pc = 0x4935b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 6));
    // 0x4935b4: 0xa6250008  sh          $a1, 0x8($s1)
    ctx->pc = 0x4935b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 5));
    // 0x4935b8: 0xa624000a  sh          $a0, 0xA($s1)
    ctx->pc = 0x4935b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 4));
    // 0x4935bc: 0x14e0ffe2  bnez        $a3, . + 4 + (-0x1E << 2)
    ctx->pc = 0x4935BCu;
    {
        const bool branch_taken_0x4935bc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x4935C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4935BCu;
        // 0x4935c0: 0xa623000c  sh          $v1, 0xC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4935bc) {
            ctx->pc = 0x493548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_493548;
        }
    }
    ctx->pc = 0x4935C4u;
    // 0x4935c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4935c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4935c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4935c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4935cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4935ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4935d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4935d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4935d4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4935d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4935d8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4935d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4935dc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4935dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4935e0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4935e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4935e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4935E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4935E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4935E4u;
        // 0x4935e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4935E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4935ECu;
    // 0x4935ec: 0x0  nop
    ctx->pc = 0x4935ecu;
    // NOP
label_4935f0:
    // 0x4935f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4935f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4935f4: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4935f4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4935f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4935f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4935fc: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4935fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x493600: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x493600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x493604: 0x258c0abc  addiu       $t4, $t4, 0xABC
    ctx->pc = 0x493604u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2748));
    // 0x493608: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x493608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x49360c: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x49360cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x493610: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x493610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x493614: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x493614u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x493618: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x493618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x49361c: 0x25ce0ac0  addiu       $t6, $t6, 0xAC0
    ctx->pc = 0x49361cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2752));
    // 0x493620: 0x26100ac4  addiu       $s0, $s0, 0xAC4
    ctx->pc = 0x493620u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2756));
    // 0x493624: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x493624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x493628: 0x8482011a  lh          $v0, 0x11A($a0)
    ctx->pc = 0x493628u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x49362c: 0x2463d680  addiu       $v1, $v1, -0x2980
    ctx->pc = 0x49362cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x493630: 0x8d880000  lw          $t0, 0x0($t4)
    ctx->pc = 0x493630u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F0ABCu));
    // 0x493634: 0x24722494  addiu       $s2, $v1, 0x2494
    ctx->pc = 0x493634u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 9364));
    // 0x493638: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x493638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x49363c: 0x8dc90000  lw          $t1, 0x0($t6)
    ctx->pc = 0x49363cu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x7F0AC0u));
    // 0x493640: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x493640u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x493644: 0x2474249c  addiu       $s4, $v1, 0x249C
    ctx->pc = 0x493644u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 9372));
    // 0x493648: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x493648u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x49364c: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x49364cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x493650: 0xad880000  sw          $t0, 0x0($t4)
    ctx->pc = 0x493650u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 8));
    // 0x493654: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x493654u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x493658: 0x24732498  addiu       $s3, $v1, 0x2498
    ctx->pc = 0x493658u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 9368));
    // 0x49365c: 0x8482011e  lh          $v0, 0x11E($a0)
    ctx->pc = 0x49365cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 286)));
    // 0x493660: 0x95860000  lhu         $a2, 0x0($t4)
    ctx->pc = 0x493660u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x493664: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x493664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x493668: 0x8e0b0000  lw          $t3, 0x0($s0)
    ctx->pc = 0x493668u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49366c: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x49366cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x493670: 0x63c00  sll         $a3, $a2, 16
    ctx->pc = 0x493670u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x493674: 0xadc90000  sw          $t1, 0x0($t6)
    ctx->pc = 0x493674u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 9));
    // 0x493678: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x493678u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x49367c: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x49367cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x493680: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x493680u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x493684: 0x84820122  lh          $v0, 0x122($a0)
    ctx->pc = 0x493684u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 290)));
    // 0x493688: 0x95c50000  lhu         $a1, 0x0($t6)
    ctx->pc = 0x493688u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x49368c: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x49368cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x493690: 0xa4662324  sh          $a2, 0x2324($v1)
    ctx->pc = 0x493690u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8996), (uint16_t)GPR_U32(ctx, 6));
    // 0x493694: 0x1625824  and         $t3, $t3, $v0
    ctx->pc = 0x493694u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x493698: 0xa4652326  sh          $a1, 0x2326($v1)
    ctx->pc = 0x493698u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8998), (uint16_t)GPR_U32(ctx, 5));
    // 0x49369c: 0xae0b0000  sw          $t3, 0x0($s0)
    ctx->pc = 0x49369cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 11));
    // 0x4936a0: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x4936a0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x4936a4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4936a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4936a8: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x4936a8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4936ac: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4936acu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4936b0: 0x8e4d0000  lw          $t5, 0x0($s2)
    ctx->pc = 0x4936b0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4936b4: 0xa4662328  sh          $a2, 0x2328($v1)
    ctx->pc = 0x4936b4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 9000), (uint16_t)GPR_U32(ctx, 6));
    // 0x4936b8: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x4936b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4936bc: 0x1aa6825  or          $t5, $t5, $t2
    ctx->pc = 0x4936bcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 10));
    // 0x4936c0: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x4936c0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x4936c4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x4936c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4936c8: 0x8e6f0000  lw          $t7, 0x0($s3)
    ctx->pc = 0x4936c8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4936cc: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4936ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4936d0: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x4936d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4936d4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4936d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4936d8: 0x1ea7825  or          $t7, $t7, $t2
    ctx->pc = 0x4936d8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 10));
    // 0x4936dc: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x4936dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4936e0: 0x22a8825  or          $s1, $s1, $t2
    ctx->pc = 0x4936e0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 10));
    // 0x4936e4: 0xea3825  or          $a3, $a3, $t2
    ctx->pc = 0x4936e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 10));
    // 0x4936e8: 0x1074024  and         $t0, $t0, $a3
    ctx->pc = 0x4936e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x4936ec: 0xad880000  sw          $t0, 0x0($t4)
    ctx->pc = 0x4936ecu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 8));
    // 0x4936f0: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x4936f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x4936f4: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x4936f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4936f8: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4936f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4936fc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4936fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x493700: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x493700u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x493704: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x493704u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x493708: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x493708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49370c: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x49370cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
    // 0x493710: 0x1a36824  and         $t5, $t5, $v1
    ctx->pc = 0x493710u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
    // 0x493714: 0x1254824  and         $t1, $t1, $a1
    ctx->pc = 0x493714u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
    // 0x493718: 0xadc90000  sw          $t1, 0x0($t6)
    ctx->pc = 0x493718u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 9));
    // 0x49371c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x49371cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x493720: 0x95c30000  lhu         $v1, 0x0($t6)
    ctx->pc = 0x493720u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x493724: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x493724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x493728: 0xae4d0000  sw          $t5, 0x0($s2)
    ctx->pc = 0x493728u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 13));
    // 0x49372c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49372cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x493730: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x493730u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x493734: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x493734u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x493738: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x493738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49373c: 0xca3025  or          $a2, $a2, $t2
    ctx->pc = 0x49373cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 10));
    // 0x493740: 0x1e37824  and         $t7, $t7, $v1
    ctx->pc = 0x493740u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 3));
    // 0x493744: 0x1665824  and         $t3, $t3, $a2
    ctx->pc = 0x493744u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 6));
    // 0x493748: 0xae6f0000  sw          $t7, 0x0($s3)
    ctx->pc = 0x493748u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 15));
    // 0x49374c: 0xae0b0000  sw          $t3, 0x0($s0)
    ctx->pc = 0x49374cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 11));
    // 0x493750: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x493750u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x493754: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x493754u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x493758: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x493758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49375c: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x49375cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x493760: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x493760u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x493764: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x493764u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x493768: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x493768u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49376c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x49376cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x493770: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x493770u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x493774: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x493774u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x493778: 0x3e00008  jr          $ra
    ctx->pc = 0x493778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493778u;
        // 0x49377c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x493778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x493780u;
label_493780:
    // 0x493780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x493780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x493784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x493784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x493788: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x493788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49378c: 0x8124d7c  j           func_4935F0
    ctx->pc = 0x49378Cu;
    ctx->pc = 0x493790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49378Cu;
    // 0x493790: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4935F0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_4935f0;
    ctx->pc = 0x493794u;
    // 0x493794: 0x0  nop
    ctx->pc = 0x493794u;
    // NOP
label_493798:
    // 0x493798: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x493798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x49379c: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x49379cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4937a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4937a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4937a4: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4937a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4937a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4937a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4937ac: 0x258c0abc  addiu       $t4, $t4, 0xABC
    ctx->pc = 0x4937acu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2748));
    // 0x4937b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4937b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4937b4: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4937b4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4937b8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4937b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4937bc: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4937bcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4937c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4937c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4937c4: 0x25ce0ac0  addiu       $t6, $t6, 0xAC0
    ctx->pc = 0x4937c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2752));
    // 0x4937c8: 0x26100ac4  addiu       $s0, $s0, 0xAC4
    ctx->pc = 0x4937c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2756));
    // 0x4937cc: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4937ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4937d0: 0x8482011a  lh          $v0, 0x11A($a0)
    ctx->pc = 0x4937d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x4937d4: 0x2463d680  addiu       $v1, $v1, -0x2980
    ctx->pc = 0x4937d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x4937d8: 0x8d880000  lw          $t0, 0x0($t4)
    ctx->pc = 0x4937d8u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F0ABCu));
    // 0x4937dc: 0x24722494  addiu       $s2, $v1, 0x2494
    ctx->pc = 0x4937dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 9364));
    // 0x4937e0: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4937e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4937e4: 0x8dc90000  lw          $t1, 0x0($t6)
    ctx->pc = 0x4937e4u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x7F0AC0u));
    // 0x4937e8: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4937e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4937ec: 0x2474249c  addiu       $s4, $v1, 0x249C
    ctx->pc = 0x4937ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 9372));
    // 0x4937f0: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4937f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4937f4: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4937f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4937f8: 0xad880000  sw          $t0, 0x0($t4)
    ctx->pc = 0x4937f8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 8));
    // 0x4937fc: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4937fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x493800: 0x24732498  addiu       $s3, $v1, 0x2498
    ctx->pc = 0x493800u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 9368));
    // 0x493804: 0x8482011e  lh          $v0, 0x11E($a0)
    ctx->pc = 0x493804u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 286)));
    // 0x493808: 0x95860000  lhu         $a2, 0x0($t4)
    ctx->pc = 0x493808u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x49380c: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x49380cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x493810: 0x8e0b0000  lw          $t3, 0x0($s0)
    ctx->pc = 0x493810u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x493814: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x493814u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x493818: 0x63c00  sll         $a3, $a2, 16
    ctx->pc = 0x493818u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x49381c: 0xadc90000  sw          $t1, 0x0($t6)
    ctx->pc = 0x49381cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 9));
    // 0x493820: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x493820u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x493824: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x493824u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x493828: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x493828u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x49382c: 0x84820122  lh          $v0, 0x122($a0)
    ctx->pc = 0x49382cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 290)));
    // 0x493830: 0x95c50000  lhu         $a1, 0x0($t6)
    ctx->pc = 0x493830u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x493834: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x493834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x493838: 0xa4662324  sh          $a2, 0x2324($v1)
    ctx->pc = 0x493838u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8996), (uint16_t)GPR_U32(ctx, 6));
    // 0x49383c: 0x1625824  and         $t3, $t3, $v0
    ctx->pc = 0x49383cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x493840: 0xa4652326  sh          $a1, 0x2326($v1)
    ctx->pc = 0x493840u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8998), (uint16_t)GPR_U32(ctx, 5));
    // 0x493844: 0xae0b0000  sw          $t3, 0x0($s0)
    ctx->pc = 0x493844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 11));
    // 0x493848: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x493848u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x49384c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x49384cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x493850: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x493850u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x493854: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x493854u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x493858: 0x8e4d0000  lw          $t5, 0x0($s2)
    ctx->pc = 0x493858u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x49385c: 0xa4662328  sh          $a2, 0x2328($v1)
    ctx->pc = 0x49385cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 9000), (uint16_t)GPR_U32(ctx, 6));
    // 0x493860: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x493860u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x493864: 0x1aa6825  or          $t5, $t5, $t2
    ctx->pc = 0x493864u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 10));
    // 0x493868: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x493868u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x49386c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x49386cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x493870: 0x8e6f0000  lw          $t7, 0x0($s3)
    ctx->pc = 0x493870u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x493874: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x493874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x493878: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x493878u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x49387c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49387cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x493880: 0x1ea7825  or          $t7, $t7, $t2
    ctx->pc = 0x493880u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 10));
    // 0x493884: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x493884u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x493888: 0x22a8825  or          $s1, $s1, $t2
    ctx->pc = 0x493888u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 10));
    // 0x49388c: 0xea3825  or          $a3, $a3, $t2
    ctx->pc = 0x49388cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 10));
    // 0x493890: 0x1074024  and         $t0, $t0, $a3
    ctx->pc = 0x493890u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x493894: 0xad880000  sw          $t0, 0x0($t4)
    ctx->pc = 0x493894u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 8));
    // 0x493898: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x493898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x49389c: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x49389cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4938a0: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4938a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4938a4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4938a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4938a8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4938a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4938ac: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x4938acu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4938b0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4938b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4938b4: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x4938b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
    // 0x4938b8: 0x1a36824  and         $t5, $t5, $v1
    ctx->pc = 0x4938b8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
    // 0x4938bc: 0x1254824  and         $t1, $t1, $a1
    ctx->pc = 0x4938bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
    // 0x4938c0: 0xadc90000  sw          $t1, 0x0($t6)
    ctx->pc = 0x4938c0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 9));
    // 0x4938c4: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x4938c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x4938c8: 0x95c30000  lhu         $v1, 0x0($t6)
    ctx->pc = 0x4938c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4938cc: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4938ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4938d0: 0xae4d0000  sw          $t5, 0x0($s2)
    ctx->pc = 0x4938d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 13));
    // 0x4938d4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4938d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4938d8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4938d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4938dc: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x4938dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4938e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4938e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4938e4: 0xca3025  or          $a2, $a2, $t2
    ctx->pc = 0x4938e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 10));
    // 0x4938e8: 0x1e37824  and         $t7, $t7, $v1
    ctx->pc = 0x4938e8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 3));
    // 0x4938ec: 0x1665824  and         $t3, $t3, $a2
    ctx->pc = 0x4938ecu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 6));
    // 0x4938f0: 0xae6f0000  sw          $t7, 0x0($s3)
    ctx->pc = 0x4938f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 15));
    // 0x4938f4: 0xae0b0000  sw          $t3, 0x0($s0)
    ctx->pc = 0x4938f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 11));
    // 0x4938f8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4938f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4938fc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4938fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x493900: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x493900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x493904: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x493904u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x493908: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x493908u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x49390c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49390cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x493910: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x493910u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x493914: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x493914u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x493918: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x493918u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49391c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x49391cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x493920: 0x3e00008  jr          $ra
    ctx->pc = 0x493920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x493924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493920u;
        // 0x493924: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x493920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x493928u;
label_493928:
    // 0x493928: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x493928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49392c: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x49392cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x493930: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x493930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x493934: 0x3c080073  lui         $t0, 0x73
    ctx->pc = 0x493934u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)115 << 16));
    // 0x493938: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x493938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x49393c: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x49393cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x493940: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x493940u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x493944: 0x254a0abc  addiu       $t2, $t2, 0xABC
    ctx->pc = 0x493944u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2748));
    // 0x493948: 0x256b0ac0  addiu       $t3, $t3, 0xAC0
    ctx->pc = 0x493948u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2752));
    // 0x49394c: 0x258c0ac4  addiu       $t4, $t4, 0xAC4
    ctx->pc = 0x49394cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2756));
    // 0x493950: 0x2508d680  addiu       $t0, $t0, -0x2980
    ctx->pc = 0x493950u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956672));
    // 0x493954: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x493954u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0ABCu));
    // 0x493958: 0x85092328  lh          $t1, 0x2328($t0)
    ctx->pc = 0x493958u;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x72F9A8u));
    // 0x49395c: 0x3c0dffff  lui         $t5, 0xFFFF
    ctx->pc = 0x49395cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65535 << 16));
    // 0x493960: 0x85032324  lh          $v1, 0x2324($t0)
    ctx->pc = 0x493960u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x72F9A4u));
    // 0x493964: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x493964u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x493968: 0x85022326  lh          $v0, 0x2326($t0)
    ctx->pc = 0x493968u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72F9A6u));
    // 0x49396c: 0x12d4825  or          $t1, $t1, $t5
    ctx->pc = 0x49396cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 13));
    // 0x493970: 0x8d660000  lw          $a2, 0x0($t3)
    ctx->pc = 0x493970u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0AC0u));
    // 0x493974: 0x6d1825  or          $v1, $v1, $t5
    ctx->pc = 0x493974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 13));
    // 0x493978: 0x8d870000  lw          $a3, 0x0($t4)
    ctx->pc = 0x493978u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F0AC4u));
    // 0x49397c: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x49397cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x493980: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x493980u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x493984: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x493984u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x493988: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x493988u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x49398c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x49398cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x493990: 0xe93824  and         $a3, $a3, $t1
    ctx->pc = 0x493990u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 9));
    // 0x493994: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x493994u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x493998: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x493998u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49399c: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x49399cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x4939a0: 0xad870000  sw          $a3, 0x0($t4)
    ctx->pc = 0x4939a0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 7));
    // 0x4939a4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4939a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4939a8: 0x25d0011a  addiu       $s0, $t6, 0x11A
    ctx->pc = 0x4939a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 14), 282));
    // 0x4939ac: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4939acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4939b0: 0x86090000  lh          $t1, 0x0($s0)
    ctx->pc = 0x4939b0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4939b4: 0x25cf011e  addiu       $t7, $t6, 0x11E
    ctx->pc = 0x4939b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 286));
    // 0x4939b8: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4939b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4939bc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4939bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4939c0: 0x85630000  lh          $v1, 0x0($t3)
    ctx->pc = 0x4939c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4939c4: 0x25ce0122  addiu       $t6, $t6, 0x122
    ctx->pc = 0x4939c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 290));
    // 0x4939c8: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x4939c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x4939cc: 0x85880000  lh          $t0, 0x0($t4)
    ctx->pc = 0x4939ccu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4939d0: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x4939d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x4939d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4939d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4939d8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4939d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4939dc: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x4939dcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x4939e0: 0x85e20000  lh          $v0, 0x0($t7)
    ctx->pc = 0x4939e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4939e4: 0x95450000  lhu         $a1, 0x0($t2)
    ctx->pc = 0x4939e4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4939e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4939e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4939ec: 0x6d1825  or          $v1, $v1, $t5
    ctx->pc = 0x4939ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 13));
    // 0x4939f0: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4939f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4939f4: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x4939f4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x4939f8: 0x85c20000  lh          $v0, 0x0($t6)
    ctx->pc = 0x4939f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4939fc: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x4939fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x493a00: 0x10d4025  or          $t0, $t0, $t5
    ctx->pc = 0x493a00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 13));
    // 0x493a04: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x493a04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x493a08: 0xad870000  sw          $a3, 0x0($t4)
    ctx->pc = 0x493a08u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 7));
    // 0x493a0c: 0xa6050000  sh          $a1, 0x0($s0)
    ctx->pc = 0x493a0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x493a10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x493a10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x493a14: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x493a14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x493a18: 0xa5e20000  sh          $v0, 0x0($t7)
    ctx->pc = 0x493a18u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x493a1c: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x493a1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x493a20: 0xa5c30000  sh          $v1, 0x0($t6)
    ctx->pc = 0x493a20u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x493a24: 0x8124de6  j           func_493798
    ctx->pc = 0x493A24u;
    ctx->pc = 0x493A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x493A24u;
    // 0x493a28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x493798u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_493798;
    ctx->pc = 0x493A2Cu;
    // 0x493a2c: 0x0  nop
    ctx->pc = 0x493a2cu;
    // NOP
label_493a30:
    // 0x493a30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x493a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x493a34: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x493a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x493a38: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x493a38u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x493a3c: 0x26d60abc  addiu       $s6, $s6, 0xABC
    ctx->pc = 0x493a3cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2748));
    // 0x493a40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x493a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x493a44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x493a44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493a48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x493a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x493a4c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x493a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x493a50: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x493a50u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x493a54: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x493a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x493a58: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x493a58u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x493a5c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x493a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x493a60: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x493a60u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x493a64: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x493a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x493a68: 0x3c15007f  lui         $s5, 0x7F
    ctx->pc = 0x493a68u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
    // 0x493a6c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x493a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x493a70: 0x26170010  addiu       $s7, $s0, 0x10
    ctx->pc = 0x493a70u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x493a74: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x493a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x493a78: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x493a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x493a7c: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x493A7Cu;
    SET_GPR_U32(ctx, 31, 0x493A84u);
    ctx->pc = 0x493A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x493A7Cu;
    // 0x493a80: 0x26730ac0  addiu       $s3, $s3, 0xAC0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x493A7Cu, 0x493A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493A84u;
label_493a84:
    // 0x493a84: 0x8603011a  lh          $v1, 0x11A($s0)
    ctx->pc = 0x493a84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 282)));
    // 0x493a88: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x493a88u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x493a8c: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x493a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x493a90: 0x26940ac4  addiu       $s4, $s4, 0xAC4
    ctx->pc = 0x493a90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2756));
    // 0x493a94: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x493a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x493a98: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x493a98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x493a9c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x493a9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x493aa0: 0x26b50ab0  addiu       $s5, $s5, 0xAB0
    ctx->pc = 0x493aa0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2736));
    // 0x493aa4: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x493aa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x493aa8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x493aa8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x493aac: 0xaec50000  sw          $a1, 0x0($s6)
    ctx->pc = 0x493aacu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 5));
    // 0x493ab0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x493ab0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x493ab4: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x493ab4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x493ab8: 0x26520ab4  addiu       $s2, $s2, 0xAB4
    ctx->pc = 0x493ab8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2740));
    // 0x493abc: 0x8603011e  lh          $v1, 0x11E($s0)
    ctx->pc = 0x493abcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 286)));
    // 0x493ac0: 0x26310ab8  addiu       $s1, $s1, 0xAB8
    ctx->pc = 0x493ac0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2744));
    // 0x493ac4: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x493ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x493ac8: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x493ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x493acc: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x493accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x493ad0: 0x8eaa0000  lw          $t2, 0x0($s5)
    ctx->pc = 0x493ad0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x493ad4: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x493ad4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x493ad8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x493ad8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x493adc: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x493adcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x493ae0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x493ae0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x493ae4: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x493ae4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x493ae8: 0x2484d680  addiu       $a0, $a0, -0x2980
    ctx->pc = 0x493ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956672));
    // 0x493aec: 0x86030122  lh          $v1, 0x122($s0)
    ctx->pc = 0x493aecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 290)));
    // 0x493af0: 0x26180014  addiu       $t8, $s0, 0x14
    ctx->pc = 0x493af0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x493af4: 0x8e490000  lw          $t1, 0x0($s2)
    ctx->pc = 0x493af4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x493af8: 0x26190018  addiu       $t9, $s0, 0x18
    ctx->pc = 0x493af8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x493afc: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x493afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x493b00: 0x8e2b0000  lw          $t3, 0x0($s1)
    ctx->pc = 0x493b00u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x493b04: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x493b04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x493b08: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x493b08u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x493b0c: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x493b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x493b10: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x493b10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x493b14: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x493b14u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x493b18: 0x249e2498  addiu       $fp, $a0, 0x2498
    ctx->pc = 0x493b18u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 9368));
    // 0x493b1c: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x493b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x493b20: 0x86cc0000  lh          $t4, 0x0($s6)
    ctx->pc = 0x493b20u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x493b24: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x493b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x493b28: 0x866e0000  lh          $t6, 0x0($s3)
    ctx->pc = 0x493b28u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x493b2c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x493b2cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x493b30: 0x868f0000  lh          $t7, 0x0($s4)
    ctx->pc = 0x493b30u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x493b34: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x493b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x493b38: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x493b38u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x493b3c: 0xaeaa0000  sw          $t2, 0x0($s5)
    ctx->pc = 0x493b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 10));
    // 0x493b40: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x493b40u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x493b44: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x493b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x493b48: 0x86ad0000  lh          $t5, 0x0($s5)
    ctx->pc = 0x493b48u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x493b4c: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x493b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x493b50: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x493b50u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x493b54: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x493b54u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x493b58: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x493b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x493b5c: 0x1886025  or          $t4, $t4, $t0
    ctx->pc = 0x493b5cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 8));
    // 0x493b60: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x493b60u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x493b64: 0xac2824  and         $a1, $a1, $t4
    ctx->pc = 0x493b64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 12));
    // 0x493b68: 0xae490000  sw          $t1, 0x0($s2)
    ctx->pc = 0x493b68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 9));
    // 0x493b6c: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x493b6cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x493b70: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x493b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x493b74: 0x864c0000  lh          $t4, 0x0($s2)
    ctx->pc = 0x493b74u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x493b78: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x493b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x493b7c: 0xaec50000  sw          $a1, 0x0($s6)
    ctx->pc = 0x493b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 5));
    // 0x493b80: 0x1cc7021  addu        $t6, $t6, $t4
    ctx->pc = 0x493b80u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x493b84: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x493b84u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x493b88: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x493b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x493b8c: 0x1c87025  or          $t6, $t6, $t0
    ctx->pc = 0x493b8cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 8));
    // 0x493b90: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x493b90u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x493b94: 0xce3024  and         $a2, $a2, $t6
    ctx->pc = 0x493b94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 14));
    // 0x493b98: 0xae2b0000  sw          $t3, 0x0($s1)
    ctx->pc = 0x493b98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 11));
    // 0x493b9c: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x493b9cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x493ba0: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x493ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x493ba4: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x493ba4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x493ba8: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x493ba8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x493bac: 0x1e57821  addu        $t7, $t7, $a1
    ctx->pc = 0x493bacu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 5)));
    // 0x493bb0: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x493bb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x493bb4: 0x1e87825  or          $t7, $t7, $t0
    ctx->pc = 0x493bb4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 8));
    // 0x493bb8: 0xa4822324  sh          $v0, 0x2324($a0)
    ctx->pc = 0x493bb8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8996), (uint16_t)GPR_U32(ctx, 2));
    // 0x493bbc: 0xef3824  and         $a3, $a3, $t7
    ctx->pc = 0x493bbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 15));
    // 0x493bc0: 0xa4832326  sh          $v1, 0x2326($a0)
    ctx->pc = 0x493bc0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8998), (uint16_t)GPR_U32(ctx, 3));
    // 0x493bc4: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x493bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x493bc8: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x493bc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x493bcc: 0xa4822328  sh          $v0, 0x2328($a0)
    ctx->pc = 0x493bccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 9000), (uint16_t)GPR_U32(ctx, 2));
    // 0x493bd0: 0x86030130  lh          $v1, 0x130($s0)
    ctx->pc = 0x493bd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x493bd4: 0x1a36821  addu        $t5, $t5, $v1
    ctx->pc = 0x493bd4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x493bd8: 0x1a86825  or          $t5, $t5, $t0
    ctx->pc = 0x493bd8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 8));
    // 0x493bdc: 0x14d5024  and         $t2, $t2, $t5
    ctx->pc = 0x493bdcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 13));
    // 0x493be0: 0xaeaa0000  sw          $t2, 0x0($s5)
    ctx->pc = 0x493be0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 10));
    // 0x493be4: 0x86020132  lh          $v0, 0x132($s0)
    ctx->pc = 0x493be4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 306)));
    // 0x493be8: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x493be8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x493bec: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x493becu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x493bf0: 0x1886025  or          $t4, $t4, $t0
    ctx->pc = 0x493bf0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 8));
    // 0x493bf4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x493bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x493bf8: 0x12c4824  and         $t1, $t1, $t4
    ctx->pc = 0x493bf8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 12));
    // 0x493bfc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x493bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x493c00: 0xae490000  sw          $t1, 0x0($s2)
    ctx->pc = 0x493c00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 9));
    // 0x493c04: 0x86020134  lh          $v0, 0x134($s0)
    ctx->pc = 0x493c04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x493c08: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x493c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x493c0c: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x493c0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x493c10: 0x1655824  and         $t3, $t3, $a1
    ctx->pc = 0x493c10u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 5));
    // 0x493c14: 0xae2b0000  sw          $t3, 0x0($s1)
    ctx->pc = 0x493c14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 11));
    // 0x493c18: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x493c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x493c1c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x493c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x493c20: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x493c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x493c24: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x493c24u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x493c28: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x493c28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x493c2c: 0x8f020000  lw          $v0, 0x0($t8)
    ctx->pc = 0x493c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x493c30: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x493c30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x493c34: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x493c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x493c38: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x493c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x493c3c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x493c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x493c40: 0xaf020000  sw          $v0, 0x0($t8)
    ctx->pc = 0x493c40u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
    // 0x493c44: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x493c44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x493c48: 0x8f220000  lw          $v0, 0x0($t9)
    ctx->pc = 0x493c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x493c4c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x493c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x493c50: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x493c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x493c54: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x493c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x493c58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x493c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x493c5c: 0xaf220000  sw          $v0, 0x0($t9)
    ctx->pc = 0x493c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 2));
    // 0x493c60: 0x86a30000  lh          $v1, 0x0($s5)
    ctx->pc = 0x493c60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x493c64: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x493c64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x493c68: 0x86c50000  lh          $a1, 0x0($s6)
    ctx->pc = 0x493c68u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x493c6c: 0x86660000  lh          $a2, 0x0($s3)
    ctx->pc = 0x493c6cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x493c70: 0x86290000  lh          $t1, 0x0($s1)
    ctx->pc = 0x493c70u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x493c74: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x493c74u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x493c78: 0x86870000  lh          $a3, 0x0($s4)
    ctx->pc = 0x493c78u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x493c7c: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x493c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x493c80: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x493c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x493c84: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x493c84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x493c88: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x493c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x493c8c: 0xe93823  subu        $a3, $a3, $t1
    ctx->pc = 0x493c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x493c90: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x493c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x493c94: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x493c94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x493c98: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x493c98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x493c9c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x493c9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x493ca0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x493ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x493ca4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x493ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x493ca8: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x493ca8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x493cac: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x493cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x493cb0: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x493cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x493cb4: 0xaec40000  sw          $a0, 0x0($s6)
    ctx->pc = 0x493cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 4));
    // 0x493cb8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x493cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x493cbc: 0x3c090073  lui         $t1, 0x73
    ctx->pc = 0x493cbcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)115 << 16));
    // 0x493cc0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x493cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x493cc4: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x493cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x493cc8: 0x2442fb14  addiu       $v0, $v0, -0x4EC
    ctx->pc = 0x493cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966036));
    // 0x493ccc: 0x2529fb1c  addiu       $t1, $t1, -0x4E4
    ctx->pc = 0x493cccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966044));
    // 0x493cd0: 0x96c50000  lhu         $a1, 0x0($s6)
    ctx->pc = 0x493cd0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x493cd4: 0x96660000  lhu         $a2, 0x0($s3)
    ctx->pc = 0x493cd4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x493cd8: 0x96870000  lhu         $a3, 0x0($s4)
    ctx->pc = 0x493cd8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x493cdc: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x493cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x493ce0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x493ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x493ce4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x493ce4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x493ce8: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x493ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x493cec: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x493cecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x493cf0: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x493cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x493cf4: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x493cf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x493cf8: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x493cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x493cfc: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x493cfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x493d00: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x493d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x493d04: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x493d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x493d08: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x493d08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x493d0c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x493d0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x493d10: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x493d10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x493d14: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x493d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x493d18: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x493d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x493d1c: 0x24a5fb14  addiu       $a1, $a1, -0x4EC
    ctx->pc = 0x493d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966036));
    // 0x493d20: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x493d20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x493d24: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x493d24u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x493d28: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x493d28u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x493d2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x493d2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x493d30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x493d30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x493d34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x493d34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x493d38: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x493d38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x493d3c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x493d3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x493d40: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x493d40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x493d44: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x493d44u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x493d48: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x493d48u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x493d4c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x493d4cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x493d50: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x493d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x493d54: 0x3e00008  jr          $ra
    ctx->pc = 0x493D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x493D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493D54u;
        // 0x493d58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x493D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x493D5Cu;
    // 0x493d5c: 0x0  nop
    ctx->pc = 0x493d5cu;
    // NOP
label_493d60:
    // 0x493d60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x493d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x493d64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x493d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x493d68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x493d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x493d6c: 0x8124e8c  j           func_493A30
    ctx->pc = 0x493D6Cu;
    ctx->pc = 0x493D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x493D6Cu;
    // 0x493d70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x493A30u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_493a30;
    ctx->pc = 0x493D74u;
    // 0x493d74: 0x0  nop
    ctx->pc = 0x493d74u;
    // NOP
label_493d78:
    // 0x493d78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x493d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x493d7c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x493d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x493d80: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x493d80u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x493d84: 0x26d60abc  addiu       $s6, $s6, 0xABC
    ctx->pc = 0x493d84u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2748));
    // 0x493d88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x493d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x493d8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x493d8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493d90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x493d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x493d94: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x493d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x493d98: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x493d98u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x493d9c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x493d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x493da0: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x493da0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x493da4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x493da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x493da8: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x493da8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x493dac: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x493dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x493db0: 0x3c15007f  lui         $s5, 0x7F
    ctx->pc = 0x493db0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
    // 0x493db4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x493db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x493db8: 0x26170010  addiu       $s7, $s0, 0x10
    ctx->pc = 0x493db8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x493dbc: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x493dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x493dc0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x493dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x493dc4: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x493DC4u;
    SET_GPR_U32(ctx, 31, 0x493DCCu);
    ctx->pc = 0x493DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x493DC4u;
    // 0x493dc8: 0x26730ac0  addiu       $s3, $s3, 0xAC0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x493DC4u, 0x493DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493DCCu;
label_493dcc:
    // 0x493dcc: 0x8603011a  lh          $v1, 0x11A($s0)
    ctx->pc = 0x493dccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 282)));
    // 0x493dd0: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x493dd0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x493dd4: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x493dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x493dd8: 0x26940ac4  addiu       $s4, $s4, 0xAC4
    ctx->pc = 0x493dd8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2756));
    // 0x493ddc: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x493ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x493de0: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x493de0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x493de4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x493de4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x493de8: 0x26b50ab0  addiu       $s5, $s5, 0xAB0
    ctx->pc = 0x493de8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2736));
    // 0x493dec: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x493decu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x493df0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x493df0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x493df4: 0xaec50000  sw          $a1, 0x0($s6)
    ctx->pc = 0x493df4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 5));
    // 0x493df8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x493df8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x493dfc: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x493dfcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x493e00: 0x26520ab4  addiu       $s2, $s2, 0xAB4
    ctx->pc = 0x493e00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2740));
    // 0x493e04: 0x8603011e  lh          $v1, 0x11E($s0)
    ctx->pc = 0x493e04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 286)));
    // 0x493e08: 0x26310ab8  addiu       $s1, $s1, 0xAB8
    ctx->pc = 0x493e08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2744));
    // 0x493e0c: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x493e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x493e10: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x493e10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x493e14: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x493e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x493e18: 0x8eaa0000  lw          $t2, 0x0($s5)
    ctx->pc = 0x493e18u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x493e1c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x493e1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x493e20: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x493e20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x493e24: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x493e24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x493e28: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x493e28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x493e2c: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x493e2cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x493e30: 0x2484d680  addiu       $a0, $a0, -0x2980
    ctx->pc = 0x493e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956672));
    // 0x493e34: 0x86030122  lh          $v1, 0x122($s0)
    ctx->pc = 0x493e34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 290)));
    // 0x493e38: 0x26180014  addiu       $t8, $s0, 0x14
    ctx->pc = 0x493e38u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x493e3c: 0x8e490000  lw          $t1, 0x0($s2)
    ctx->pc = 0x493e3cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x493e40: 0x26190018  addiu       $t9, $s0, 0x18
    ctx->pc = 0x493e40u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x493e44: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x493e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x493e48: 0x8e2b0000  lw          $t3, 0x0($s1)
    ctx->pc = 0x493e48u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x493e4c: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x493e4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x493e50: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x493e50u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x493e54: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x493e54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x493e58: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x493e58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x493e5c: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x493e5cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x493e60: 0x249e2498  addiu       $fp, $a0, 0x2498
    ctx->pc = 0x493e60u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 9368));
    // 0x493e64: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x493e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x493e68: 0x86cc0000  lh          $t4, 0x0($s6)
    ctx->pc = 0x493e68u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x493e6c: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x493e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x493e70: 0x866e0000  lh          $t6, 0x0($s3)
    ctx->pc = 0x493e70u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x493e74: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x493e74u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x493e78: 0x868f0000  lh          $t7, 0x0($s4)
    ctx->pc = 0x493e78u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x493e7c: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x493e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x493e80: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x493e80u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x493e84: 0xaeaa0000  sw          $t2, 0x0($s5)
    ctx->pc = 0x493e84u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 10));
    // 0x493e88: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x493e88u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x493e8c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x493e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x493e90: 0x86ad0000  lh          $t5, 0x0($s5)
    ctx->pc = 0x493e90u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x493e94: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x493e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x493e98: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x493e98u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x493e9c: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x493e9cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x493ea0: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x493ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x493ea4: 0x1886025  or          $t4, $t4, $t0
    ctx->pc = 0x493ea4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 8));
    // 0x493ea8: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x493ea8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x493eac: 0xac2824  and         $a1, $a1, $t4
    ctx->pc = 0x493eacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 12));
    // 0x493eb0: 0xae490000  sw          $t1, 0x0($s2)
    ctx->pc = 0x493eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 9));
    // 0x493eb4: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x493eb4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x493eb8: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x493eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x493ebc: 0x864c0000  lh          $t4, 0x0($s2)
    ctx->pc = 0x493ebcu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x493ec0: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x493ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x493ec4: 0xaec50000  sw          $a1, 0x0($s6)
    ctx->pc = 0x493ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 5));
    // 0x493ec8: 0x1cc7021  addu        $t6, $t6, $t4
    ctx->pc = 0x493ec8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x493ecc: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x493eccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x493ed0: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x493ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x493ed4: 0x1c87025  or          $t6, $t6, $t0
    ctx->pc = 0x493ed4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 8));
    // 0x493ed8: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x493ed8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x493edc: 0xce3024  and         $a2, $a2, $t6
    ctx->pc = 0x493edcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 14));
    // 0x493ee0: 0xae2b0000  sw          $t3, 0x0($s1)
    ctx->pc = 0x493ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 11));
    // 0x493ee4: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x493ee4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x493ee8: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x493ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x493eec: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x493eecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x493ef0: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x493ef0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x493ef4: 0x1e57821  addu        $t7, $t7, $a1
    ctx->pc = 0x493ef4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 5)));
    // 0x493ef8: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x493ef8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x493efc: 0x1e87825  or          $t7, $t7, $t0
    ctx->pc = 0x493efcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 8));
    // 0x493f00: 0xa4822324  sh          $v0, 0x2324($a0)
    ctx->pc = 0x493f00u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8996), (uint16_t)GPR_U32(ctx, 2));
    // 0x493f04: 0xef3824  and         $a3, $a3, $t7
    ctx->pc = 0x493f04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 15));
    // 0x493f08: 0xa4832326  sh          $v1, 0x2326($a0)
    ctx->pc = 0x493f08u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8998), (uint16_t)GPR_U32(ctx, 3));
    // 0x493f0c: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x493f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x493f10: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x493f10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x493f14: 0xa4822328  sh          $v0, 0x2328($a0)
    ctx->pc = 0x493f14u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 9000), (uint16_t)GPR_U32(ctx, 2));
    // 0x493f18: 0x86030130  lh          $v1, 0x130($s0)
    ctx->pc = 0x493f18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x493f1c: 0x1a36821  addu        $t5, $t5, $v1
    ctx->pc = 0x493f1cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x493f20: 0x1a86825  or          $t5, $t5, $t0
    ctx->pc = 0x493f20u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 8));
    // 0x493f24: 0x14d5024  and         $t2, $t2, $t5
    ctx->pc = 0x493f24u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 13));
    // 0x493f28: 0xaeaa0000  sw          $t2, 0x0($s5)
    ctx->pc = 0x493f28u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 10));
    // 0x493f2c: 0x86020132  lh          $v0, 0x132($s0)
    ctx->pc = 0x493f2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 306)));
    // 0x493f30: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x493f30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x493f34: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x493f34u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x493f38: 0x1886025  or          $t4, $t4, $t0
    ctx->pc = 0x493f38u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 8));
    // 0x493f3c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x493f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x493f40: 0x12c4824  and         $t1, $t1, $t4
    ctx->pc = 0x493f40u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 12));
    // 0x493f44: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x493f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x493f48: 0xae490000  sw          $t1, 0x0($s2)
    ctx->pc = 0x493f48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 9));
    // 0x493f4c: 0x86020134  lh          $v0, 0x134($s0)
    ctx->pc = 0x493f4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x493f50: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x493f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x493f54: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x493f54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x493f58: 0x1655824  and         $t3, $t3, $a1
    ctx->pc = 0x493f58u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 5));
    // 0x493f5c: 0xae2b0000  sw          $t3, 0x0($s1)
    ctx->pc = 0x493f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 11));
    // 0x493f60: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x493f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x493f64: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x493f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x493f68: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x493f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x493f6c: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x493f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x493f70: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x493f70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x493f74: 0x8f020000  lw          $v0, 0x0($t8)
    ctx->pc = 0x493f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x493f78: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x493f78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x493f7c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x493f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x493f80: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x493f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x493f84: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x493f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x493f88: 0xaf020000  sw          $v0, 0x0($t8)
    ctx->pc = 0x493f88u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
    // 0x493f8c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x493f8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x493f90: 0x8f220000  lw          $v0, 0x0($t9)
    ctx->pc = 0x493f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x493f94: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x493f94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x493f98: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x493f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x493f9c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x493f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x493fa0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x493fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x493fa4: 0xaf220000  sw          $v0, 0x0($t9)
    ctx->pc = 0x493fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 2));
    // 0x493fa8: 0x86a30000  lh          $v1, 0x0($s5)
    ctx->pc = 0x493fa8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x493fac: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x493facu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x493fb0: 0x86c50000  lh          $a1, 0x0($s6)
    ctx->pc = 0x493fb0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x493fb4: 0x86660000  lh          $a2, 0x0($s3)
    ctx->pc = 0x493fb4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x493fb8: 0x86290000  lh          $t1, 0x0($s1)
    ctx->pc = 0x493fb8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x493fbc: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x493fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x493fc0: 0x86870000  lh          $a3, 0x0($s4)
    ctx->pc = 0x493fc0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x493fc4: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x493fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x493fc8: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x493fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x493fcc: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x493fccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x493fd0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x493fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x493fd4: 0xe93823  subu        $a3, $a3, $t1
    ctx->pc = 0x493fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x493fd8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x493fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x493fdc: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x493fdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x493fe0: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x493fe0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x493fe4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x493fe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x493fe8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x493fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x493fec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x493fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x493ff0: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x493ff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x493ff4: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x493ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x493ff8: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x493ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x493ffc: 0xaec40000  sw          $a0, 0x0($s6)
    ctx->pc = 0x493ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 4));
    // 0x494000: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x494000u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x494004: 0x3c090073  lui         $t1, 0x73
    ctx->pc = 0x494004u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)115 << 16));
    // 0x494008: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x494008u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x49400c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x49400cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x494010: 0x2442fb14  addiu       $v0, $v0, -0x4EC
    ctx->pc = 0x494010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966036));
    // 0x494014: 0x2529fb1c  addiu       $t1, $t1, -0x4E4
    ctx->pc = 0x494014u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966044));
    // 0x494018: 0x96c50000  lhu         $a1, 0x0($s6)
    ctx->pc = 0x494018u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x49401c: 0x96660000  lhu         $a2, 0x0($s3)
    ctx->pc = 0x49401cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x494020: 0x96870000  lhu         $a3, 0x0($s4)
    ctx->pc = 0x494020u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x494024: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x494024u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x494028: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x494028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49402c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x49402cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x494030: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x494030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x494034: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x494034u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x494038: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x494038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x49403c: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x49403cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x494040: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x494040u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x494044: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x494044u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x494048: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x494048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x49404c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x49404cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x494050: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x494050u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x494054: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x494054u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x494058: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x494058u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x49405c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x49405cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x494060: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x494060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x494064: 0x24a5fb14  addiu       $a1, $a1, -0x4EC
    ctx->pc = 0x494064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966036));
    // 0x494068: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x494068u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x49406c: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x49406cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x494070: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x494070u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x494074: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x494074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x494078: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x494078u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49407c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x49407cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x494080: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x494080u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x494084: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x494084u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x494088: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x494088u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x49408c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x49408cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x494090: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x494090u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x494094: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x494094u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x494098: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x494098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x49409c: 0x3e00008  jr          $ra
    ctx->pc = 0x49409Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4940A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49409Cu;
        // 0x4940a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49409Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4940A4u;
    // 0x4940a4: 0x0  nop
    ctx->pc = 0x4940a4u;
    // NOP
label_4940a8:
    // 0x4940a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4940a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4940ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4940acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4940b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4940b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4940b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4940b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4940b8: 0x2611011e  addiu       $s1, $s0, 0x11E
    ctx->pc = 0x4940b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 286));
    // 0x4940bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4940bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4940c0: 0x26120122  addiu       $s2, $s0, 0x122
    ctx->pc = 0x4940c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 290));
    // 0x4940c4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4940c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4940c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4940c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4940cc: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4940CCu;
    SET_GPR_U32(ctx, 31, 0x4940D4u);
    ctx->pc = 0x4940D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4940CCu;
    // 0x4940d0: 0x2613011a  addiu       $s3, $s0, 0x11A (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 282));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4940CCu, 0x4940D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4940D4u;
label_4940d4:
    // 0x4940d4: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4940d4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4940d8: 0x3c070073  lui         $a3, 0x73
    ctx->pc = 0x4940d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)115 << 16));
    // 0x4940dc: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4940dcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4940e0: 0x3c0f007f  lui         $t7, 0x7F
    ctx->pc = 0x4940e0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)127 << 16));
    // 0x4940e4: 0x25ad0abc  addiu       $t5, $t5, 0xABC
    ctx->pc = 0x4940e4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2748));
    // 0x4940e8: 0x25ce0ac0  addiu       $t6, $t6, 0xAC0
    ctx->pc = 0x4940e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2752));
    // 0x4940ec: 0x25ef0ac4  addiu       $t7, $t7, 0xAC4
    ctx->pc = 0x4940ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2756));
    // 0x4940f0: 0x24e7d680  addiu       $a3, $a3, -0x2980
    ctx->pc = 0x4940f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956672));
    // 0x4940f4: 0x84e92328  lh          $t1, 0x2328($a3)
    ctx->pc = 0x4940f4u;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x72F9A8u));
    // 0x4940f8: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4940f8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4940fc: 0x84e42324  lh          $a0, 0x2324($a3)
    ctx->pc = 0x4940fcu;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x72F9A4u));
    // 0x494100: 0x84e32326  lh          $v1, 0x2326($a3)
    ctx->pc = 0x494100u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x72F9A6u));
    // 0x494104: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x494104u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x494108: 0x8da50000  lw          $a1, 0x0($t5)
    ctx->pc = 0x494108u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0ABCu));
    // 0x49410c: 0x8a2025  or          $a0, $a0, $t2
    ctx->pc = 0x49410cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 10));
    // 0x494110: 0x8dc60000  lw          $a2, 0x0($t6)
    ctx->pc = 0x494110u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0AC0u));
    // 0x494114: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x494114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x494118: 0x8de80000  lw          $t0, 0x0($t7)
    ctx->pc = 0x494118u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F0AC4u));
    // 0x49411c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x49411cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x494120: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x494120u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x494124: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x494124u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x494128: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x494128u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x49412c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x49412cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x494130: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x494130u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
    // 0x494134: 0xada50000  sw          $a1, 0x0($t5)
    ctx->pc = 0x494134u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 5));
    // 0x494138: 0xadc60000  sw          $a2, 0x0($t6)
    ctx->pc = 0x494138u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 6));
    // 0x49413c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x49413cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x494140: 0xade80000  sw          $t0, 0x0($t7)
    ctx->pc = 0x494140u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 8));
    // 0x494144: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x494144u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x494148: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x494148u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x49414c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49414cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x494150: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x494150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x494154: 0x85a70000  lh          $a3, 0x0($t5)
    ctx->pc = 0x494154u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x494158: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x494158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x49415c: 0x85c90000  lh          $t1, 0x0($t6)
    ctx->pc = 0x49415cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x494160: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x494160u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x494164: 0x85ec0000  lh          $t4, 0x0($t7)
    ctx->pc = 0x494164u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x494168: 0xe33823  subu        $a3, $a3, $v1
    ctx->pc = 0x494168u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x49416c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49416cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x494170: 0xea3825  or          $a3, $a3, $t2
    ctx->pc = 0x494170u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 10));
    // 0x494174: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x494174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x494178: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x494178u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x49417c: 0xada50000  sw          $a1, 0x0($t5)
    ctx->pc = 0x49417cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 5));
    // 0x494180: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x494180u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x494184: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x494184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x494188: 0x85ab0000  lh          $t3, 0x0($t5)
    ctx->pc = 0x494188u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x49418c: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x49418cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x494190: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x494190u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x494194: 0x1234823  subu        $t1, $t1, $v1
    ctx->pc = 0x494194u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x494198: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x494198u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x49419c: 0xc93024  and         $a2, $a2, $t1
    ctx->pc = 0x49419cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 9));
    // 0x4941a0: 0xadc60000  sw          $a2, 0x0($t6)
    ctx->pc = 0x4941a0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 6));
    // 0x4941a4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4941a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4941a8: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x4941a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x4941ac: 0x85c70000  lh          $a3, 0x0($t6)
    ctx->pc = 0x4941acu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4941b0: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x4941b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x4941b4: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4941b4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4941b8: 0x1836023  subu        $t4, $t4, $v1
    ctx->pc = 0x4941b8u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x4941bc: 0x18a6025  or          $t4, $t4, $t2
    ctx->pc = 0x4941bcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 10));
    // 0x4941c0: 0x10c4024  and         $t0, $t0, $t4
    ctx->pc = 0x4941c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 12));
    // 0x4941c4: 0xade80000  sw          $t0, 0x0($t7)
    ctx->pc = 0x4941c4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 8));
    // 0x4941c8: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4941c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4941cc: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4941ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4941d0: 0x85e30000  lh          $v1, 0x0($t7)
    ctx->pc = 0x4941d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4941d4: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x4941d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x4941d8: 0x16a5825  or          $t3, $t3, $t2
    ctx->pc = 0x4941d8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x4941dc: 0xab2824  and         $a1, $a1, $t3
    ctx->pc = 0x4941dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 11));
    // 0x4941e0: 0xada50000  sw          $a1, 0x0($t5)
    ctx->pc = 0x4941e0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 5));
    // 0x4941e4: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4941e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4941e8: 0x95a50000  lhu         $a1, 0x0($t5)
    ctx->pc = 0x4941e8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4941ec: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4941ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4941f0: 0xea3825  or          $a3, $a3, $t2
    ctx->pc = 0x4941f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 10));
    // 0x4941f4: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x4941f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x4941f8: 0xadc60000  sw          $a2, 0x0($t6)
    ctx->pc = 0x4941f8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 6));
    // 0x4941fc: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4941fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x494200: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x494200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x494204: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x494204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x494208: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x494208u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x49420c: 0xade80000  sw          $t0, 0x0($t7)
    ctx->pc = 0x49420cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 8));
    // 0x494210: 0xa6650000  sh          $a1, 0x0($s3)
    ctx->pc = 0x494210u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x494214: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x494214u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x494218: 0x95c20000  lhu         $v0, 0x0($t6)
    ctx->pc = 0x494218u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x49421c: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x49421cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x494220: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x494220u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x494224: 0x95e30000  lhu         $v1, 0x0($t7)
    ctx->pc = 0x494224u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x494228: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x494228u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x49422c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x49422cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x494230: 0x8124f5e  j           func_493D78
    ctx->pc = 0x494230u;
    ctx->pc = 0x494234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x494230u;
    // 0x494234: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x493D78u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_493d78;
    ctx->pc = 0x494238u;
label_494238:
    // 0x494238: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x494238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x49423c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x49423cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x494240: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x494240u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x494244: 0x26940abc  addiu       $s4, $s4, 0xABC
    ctx->pc = 0x494244u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2748));
    // 0x494248: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x494248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x49424c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x49424cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x494250: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x494250u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x494254: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x494254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x494258: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x494258u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x49425c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x49425cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x494260: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x494260u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x494264: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x494264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x494268: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x494268u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49426c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x49426cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x494270: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x494270u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x494274: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x494274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x494278: 0x3c17007f  lui         $s7, 0x7F
    ctx->pc = 0x494278u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)127 << 16));
    // 0x49427c: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x49427cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x494280: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x494280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x494284: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x494284u;
    SET_GPR_U32(ctx, 31, 0x49428Cu);
    ctx->pc = 0x494288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x494284u;
    // 0x494288: 0x26310ac0  addiu       $s1, $s1, 0xAC0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x494284u, 0x49428Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49428Cu;
label_49428c:
    // 0x49428c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x49428cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x494290: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x494290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x494294: 0x86a4011a  lh          $a0, 0x11A($s5)
    ctx->pc = 0x494294u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 282)));
    // 0x494298: 0x26520ac4  addiu       $s2, $s2, 0xAC4
    ctx->pc = 0x494298u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2756));
    // 0x49429c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49429cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4942a0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4942a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4942a4: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x4942a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x4942a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4942a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4942ac: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4942acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4942b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4942b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4942b4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4942b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x4942b8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4942b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4942bc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4942bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4942c0: 0x26f70ab0  addiu       $s7, $s7, 0xAB0
    ctx->pc = 0x4942c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 2736));
    // 0x4942c4: 0x86a2011e  lh          $v0, 0x11E($s5)
    ctx->pc = 0x4942c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 286)));
    // 0x4942c8: 0x26d60ab4  addiu       $s6, $s6, 0xAB4
    ctx->pc = 0x4942c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2740));
    // 0x4942cc: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x4942ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4942d0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4942d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4942d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4942d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4942d8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4942d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4942dc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4942dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4942e0: 0x86a20122  lh          $v0, 0x122($s5)
    ctx->pc = 0x4942e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 290)));
    // 0x4942e4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4942e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4942e8: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4942e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4942ec: 0xc12a8b8  jal         func_4AA2E0
    ctx->pc = 0x4942ECu;
    SET_GPR_U32(ctx, 31, 0x4942F4u);
    ctx->pc = 0x4942F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4942ECu;
    // 0x4942f0: 0xae470000  sw          $a3, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA2E0u, 0x4942ECu, 0x4942F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4942F4u;
label_4942f4:
    // 0x4942f4: 0x8fc20050  lw          $v0, 0x50($fp)
    ctx->pc = 0x4942f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 80)));
    // 0x4942f8: 0x8ee80000  lw          $t0, 0x0($s7)
    ctx->pc = 0x4942f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4942fc: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4942fcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x494300: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x494300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x494304: 0x8ecb0000  lw          $t3, 0x0($s6)
    ctx->pc = 0x494304u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x494308: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x494308u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x49430c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x49430cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x494310: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x494310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x494314: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x494314u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x494318: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x494318u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x49431c: 0x25ce0ab8  addiu       $t6, $t6, 0xAB8
    ctx->pc = 0x49431cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2744));
    // 0x494320: 0xaee80000  sw          $t0, 0x0($s7)
    ctx->pc = 0x494320u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 8));
    // 0x494324: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x494324u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x494328: 0x3c0f0073  lui         $t7, 0x73
    ctx->pc = 0x494328u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)115 << 16));
    // 0x49432c: 0x8fc20054  lw          $v0, 0x54($fp)
    ctx->pc = 0x49432cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 84)));
    // 0x494330: 0x25efd680  addiu       $t7, $t7, -0x2980
    ctx->pc = 0x494330u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294956672));
    // 0x494334: 0x86f30000  lh          $s3, 0x0($s7)
    ctx->pc = 0x494334u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x494338: 0x25f8249c  addiu       $t8, $t7, 0x249C
    ctx->pc = 0x494338u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 15), 9372));
    // 0x49433c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x49433cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x494340: 0x8dc90000  lw          $t1, 0x0($t6)
    ctx->pc = 0x494340u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x494344: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x494344u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x494348: 0x86870000  lh          $a3, 0x0($s4)
    ctx->pc = 0x494348u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x49434c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x49434cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x494350: 0x86260000  lh          $a2, 0x0($s1)
    ctx->pc = 0x494350u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x494354: 0x1625824  and         $t3, $t3, $v0
    ctx->pc = 0x494354u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x494358: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x494358u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x49435c: 0xaecb0000  sw          $t3, 0x0($s6)
    ctx->pc = 0x49435cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 11));
    // 0x494360: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x494360u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x494364: 0xf33821  addu        $a3, $a3, $s3
    ctx->pc = 0x494364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
    // 0x494368: 0x8fc20058  lw          $v0, 0x58($fp)
    ctx->pc = 0x494368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 88)));
    // 0x49436c: 0xf03825  or          $a3, $a3, $s0
    ctx->pc = 0x49436cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 16));
    // 0x494370: 0x86cd0000  lh          $t5, 0x0($s6)
    ctx->pc = 0x494370u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x494374: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x494374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x494378: 0x864a0000  lh          $t2, 0x0($s2)
    ctx->pc = 0x494378u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x49437c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49437cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x494380: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x494380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x494384: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x494384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x494388: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x494388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49438c: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x49438cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x494390: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x494390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x494394: 0xadc90000  sw          $t1, 0x0($t6)
    ctx->pc = 0x494394u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 9));
    // 0x494398: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x494398u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x49439c: 0xcd3021  addu        $a2, $a2, $t5
    ctx->pc = 0x49439cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x4943a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4943a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4943a4: 0x85cc0000  lh          $t4, 0x0($t6)
    ctx->pc = 0x4943a4u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4943a8: 0xd03025  or          $a2, $a2, $s0
    ctx->pc = 0x4943a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 16));
    // 0x4943ac: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4943acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4943b0: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4943b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4943b4: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x4943b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x4943b8: 0x26a60014  addiu       $a2, $s5, 0x14
    ctx->pc = 0x4943b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
    // 0x4943bc: 0x14c5021  addu        $t2, $t2, $t4
    ctx->pc = 0x4943bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x4943c0: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4943c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4943c4: 0x1505025  or          $t2, $t2, $s0
    ctx->pc = 0x4943c4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 16));
    // 0x4943c8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4943c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4943cc: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4943ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x4943d0: 0xaa2824  and         $a1, $a1, $t2
    ctx->pc = 0x4943d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
    // 0x4943d4: 0x26a70018  addiu       $a3, $s5, 0x18
    ctx->pc = 0x4943d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
    // 0x4943d8: 0x25ea2494  addiu       $t2, $t7, 0x2494
    ctx->pc = 0x4943d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 15), 9364));
    // 0x4943dc: 0x96840000  lhu         $a0, 0x0($s4)
    ctx->pc = 0x4943dcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4943e0: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x4943e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x4943e4: 0x26a50010  addiu       $a1, $s5, 0x10
    ctx->pc = 0x4943e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x4943e8: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4943e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4943ec: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4943ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4943f0: 0xa5e42324  sh          $a0, 0x2324($t7)
    ctx->pc = 0x4943f0u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 8996), (uint16_t)GPR_U32(ctx, 4));
    // 0x4943f4: 0xa5e22326  sh          $v0, 0x2326($t7)
    ctx->pc = 0x4943f4u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 8998), (uint16_t)GPR_U32(ctx, 2));
    // 0x4943f8: 0xa5e32328  sh          $v1, 0x2328($t7)
    ctx->pc = 0x4943f8u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 9000), (uint16_t)GPR_U32(ctx, 3));
    // 0x4943fc: 0x25ef2498  addiu       $t7, $t7, 0x2498
    ctx->pc = 0x4943fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 9368));
    // 0x494400: 0x86a20130  lh          $v0, 0x130($s5)
    ctx->pc = 0x494400u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 304)));
    // 0x494404: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x494404u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x494408: 0x2709825  or          $s3, $s3, $s0
    ctx->pc = 0x494408u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 16));
    // 0x49440c: 0x1134024  and         $t0, $t0, $s3
    ctx->pc = 0x49440cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 19));
    // 0x494410: 0xaee80000  sw          $t0, 0x0($s7)
    ctx->pc = 0x494410u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 8));
    // 0x494414: 0x86a20132  lh          $v0, 0x132($s5)
    ctx->pc = 0x494414u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 306)));
    // 0x494418: 0x96e30000  lhu         $v1, 0x0($s7)
    ctx->pc = 0x494418u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x49441c: 0x1a26821  addu        $t5, $t5, $v0
    ctx->pc = 0x49441cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x494420: 0x1b06825  or          $t5, $t5, $s0
    ctx->pc = 0x494420u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 16));
    // 0x494424: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x494424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x494428: 0x16d5824  and         $t3, $t3, $t5
    ctx->pc = 0x494428u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 13));
    // 0x49442c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49442cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x494430: 0xaecb0000  sw          $t3, 0x0($s6)
    ctx->pc = 0x494430u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 11));
    // 0x494434: 0x86a20134  lh          $v0, 0x134($s5)
    ctx->pc = 0x494434u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 308)));
    // 0x494438: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x494438u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x49443c: 0x1906025  or          $t4, $t4, $s0
    ctx->pc = 0x49443cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 16));
    // 0x494440: 0x12c4824  and         $t1, $t1, $t4
    ctx->pc = 0x494440u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 12));
    // 0x494444: 0xadc90000  sw          $t1, 0x0($t6)
    ctx->pc = 0x494444u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 9));
    // 0x494448: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x494448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49444c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x49444cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x494450: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x494450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x494454: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x494454u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x494458: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x494458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49445c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x49445cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x494460: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x494460u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x494464: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x494464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x494468: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x494468u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x49446c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x49446cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x494470: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x494470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x494474: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x494474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x494478: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x494478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49447c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49447cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x494480: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x494480u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x494484: 0x95c30000  lhu         $v1, 0x0($t6)
    ctx->pc = 0x494484u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x494488: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x494488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49448c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x49448cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x494490: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x494490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x494494: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x494494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x494498: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x494498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49449c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x49449cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4944a0: 0x86e30000  lh          $v1, 0x0($s7)
    ctx->pc = 0x4944a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4944a4: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x4944a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4944a8: 0x86850000  lh          $a1, 0x0($s4)
    ctx->pc = 0x4944a8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4944ac: 0x86260000  lh          $a2, 0x0($s1)
    ctx->pc = 0x4944acu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4944b0: 0x86470000  lh          $a3, 0x0($s2)
    ctx->pc = 0x4944b0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4944b4: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x4944b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4944b8: 0x85c80000  lh          $t0, 0x0($t6)
    ctx->pc = 0x4944b8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4944bc: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x4944bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4944c0: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x4944c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4944c4: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x4944c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x4944c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4944c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4944cc: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x4944ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x4944d0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4944d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4944d4: 0xd03025  or          $a2, $a2, $s0
    ctx->pc = 0x4944d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 16));
    // 0x4944d8: 0xf03825  or          $a3, $a3, $s0
    ctx->pc = 0x4944d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 16));
    // 0x4944dc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4944dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4944e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4944e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4944e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4944e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4944e8: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4944e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4944ec: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4944ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4944f0: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4944f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4944f4: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x4944f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x4944f8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4944f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4944fc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4944fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x494500: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x494500u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x494504: 0x96850000  lhu         $a1, 0x0($s4)
    ctx->pc = 0x494504u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x494508: 0x96260000  lhu         $a2, 0x0($s1)
    ctx->pc = 0x494508u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49450c: 0x96470000  lhu         $a3, 0x0($s2)
    ctx->pc = 0x49450cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x494510: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x494510u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x494514: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x494514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x494518: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x494518u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x49451c: 0x8de30000  lw          $v1, 0x0($t7)
    ctx->pc = 0x49451cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x494520: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x494520u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x494524: 0x8f020000  lw          $v0, 0x0($t8)
    ctx->pc = 0x494524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x494528: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x494528u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x49452c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x49452cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x494530: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x494530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x494534: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x494534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x494538: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x494538u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49453c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x49453cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x494540: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x494540u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x494544: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x494544u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x494548: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x494548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x49454c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x49454cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x494550: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x494550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x494554: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x494554u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x494558: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x494558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x49455c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x49455cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x494560: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x494560u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x494564: 0xade30000  sw          $v1, 0x0($t7)
    ctx->pc = 0x494564u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 3));
    // 0x494568: 0xaf020000  sw          $v0, 0x0($t8)
    ctx->pc = 0x494568u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
    // 0x49456c: 0x3e00008  jr          $ra
    ctx->pc = 0x49456Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x494570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49456Cu;
        // 0x494570: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49456Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x494574u;
    // 0x494574: 0x0  nop
    ctx->pc = 0x494574u;
    // NOP
label_494578:
    // 0x494578: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x494578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49457c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49457cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x494580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x494580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x494584: 0x812508e  j           func_494238
    ctx->pc = 0x494584u;
    ctx->pc = 0x494588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x494584u;
    // 0x494588: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x494238u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_494238;
    ctx->pc = 0x49458Cu;
    // 0x49458c: 0x0  nop
    ctx->pc = 0x49458cu;
    // NOP
label_494590:
    // 0x494590: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x494590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x494594: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x494594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x494598: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x494598u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x49459c: 0x26940abc  addiu       $s4, $s4, 0xABC
    ctx->pc = 0x49459cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2748));
    // 0x4945a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4945a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4945a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4945a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4945a8: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4945a8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4945ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4945acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4945b0: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4945b0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4945b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4945b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4945b8: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4945b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4945bc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4945bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4945c0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4945c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4945c4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4945c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4945c8: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x4945c8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x4945cc: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4945ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4945d0: 0x3c17007f  lui         $s7, 0x7F
    ctx->pc = 0x4945d0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)127 << 16));
    // 0x4945d4: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4945d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4945d8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4945d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4945dc: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4945DCu;
    SET_GPR_U32(ctx, 31, 0x4945E4u);
    ctx->pc = 0x4945E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4945DCu;
    // 0x4945e0: 0x26310ac0  addiu       $s1, $s1, 0xAC0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4945DCu, 0x4945E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4945E4u;
label_4945e4:
    // 0x4945e4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x4945e4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4945e8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4945e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4945ec: 0x86a4011a  lh          $a0, 0x11A($s5)
    ctx->pc = 0x4945ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 282)));
    // 0x4945f0: 0x26520ac4  addiu       $s2, $s2, 0xAC4
    ctx->pc = 0x4945f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2756));
    // 0x4945f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4945f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4945f8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4945f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4945fc: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x4945fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x494600: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x494600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x494604: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x494604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x494608: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x494608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49460c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x49460cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x494610: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x494610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x494614: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x494614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x494618: 0x26f70ab0  addiu       $s7, $s7, 0xAB0
    ctx->pc = 0x494618u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 2736));
    // 0x49461c: 0x86a2011e  lh          $v0, 0x11E($s5)
    ctx->pc = 0x49461cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 286)));
    // 0x494620: 0x26d60ab4  addiu       $s6, $s6, 0xAB4
    ctx->pc = 0x494620u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2740));
    // 0x494624: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x494624u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x494628: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x494628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x49462c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49462cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x494630: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x494630u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x494634: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x494634u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x494638: 0x86a20122  lh          $v0, 0x122($s5)
    ctx->pc = 0x494638u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 290)));
    // 0x49463c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x49463cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x494640: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x494640u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x494644: 0xc12a8b8  jal         func_4AA2E0
    ctx->pc = 0x494644u;
    SET_GPR_U32(ctx, 31, 0x49464Cu);
    ctx->pc = 0x494648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x494644u;
    // 0x494648: 0xae470000  sw          $a3, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA2E0u, 0x494644u, 0x49464Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49464Cu;
label_49464c:
    // 0x49464c: 0x8fc20050  lw          $v0, 0x50($fp)
    ctx->pc = 0x49464cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 80)));
    // 0x494650: 0x8ee80000  lw          $t0, 0x0($s7)
    ctx->pc = 0x494650u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x494654: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x494654u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x494658: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x494658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x49465c: 0x8ecb0000  lw          $t3, 0x0($s6)
    ctx->pc = 0x49465cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x494660: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x494660u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x494664: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x494664u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x494668: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x494668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x49466c: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x49466cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x494670: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x494670u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x494674: 0x25ce0ab8  addiu       $t6, $t6, 0xAB8
    ctx->pc = 0x494674u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2744));
    // 0x494678: 0xaee80000  sw          $t0, 0x0($s7)
    ctx->pc = 0x494678u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 8));
    // 0x49467c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x49467cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x494680: 0x3c0f0073  lui         $t7, 0x73
    ctx->pc = 0x494680u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)115 << 16));
    // 0x494684: 0x8fc20054  lw          $v0, 0x54($fp)
    ctx->pc = 0x494684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 84)));
    // 0x494688: 0x25efd680  addiu       $t7, $t7, -0x2980
    ctx->pc = 0x494688u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294956672));
    // 0x49468c: 0x86f30000  lh          $s3, 0x0($s7)
    ctx->pc = 0x49468cu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x494690: 0x25f8249c  addiu       $t8, $t7, 0x249C
    ctx->pc = 0x494690u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 15), 9372));
    // 0x494694: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x494694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x494698: 0x8dc90000  lw          $t1, 0x0($t6)
    ctx->pc = 0x494698u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x49469c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49469cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4946a0: 0x86870000  lh          $a3, 0x0($s4)
    ctx->pc = 0x4946a0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4946a4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4946a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4946a8: 0x86260000  lh          $a2, 0x0($s1)
    ctx->pc = 0x4946a8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4946ac: 0x1625824  and         $t3, $t3, $v0
    ctx->pc = 0x4946acu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x4946b0: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4946b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4946b4: 0xaecb0000  sw          $t3, 0x0($s6)
    ctx->pc = 0x4946b4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 11));
    // 0x4946b8: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x4946b8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x4946bc: 0xf33821  addu        $a3, $a3, $s3
    ctx->pc = 0x4946bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
    // 0x4946c0: 0x8fc20058  lw          $v0, 0x58($fp)
    ctx->pc = 0x4946c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 88)));
    // 0x4946c4: 0xf03825  or          $a3, $a3, $s0
    ctx->pc = 0x4946c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 16));
    // 0x4946c8: 0x86cd0000  lh          $t5, 0x0($s6)
    ctx->pc = 0x4946c8u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4946cc: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4946ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4946d0: 0x864a0000  lh          $t2, 0x0($s2)
    ctx->pc = 0x4946d0u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4946d4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4946d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4946d8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4946d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4946dc: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4946dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4946e0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4946e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4946e4: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x4946e4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4946e8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4946e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4946ec: 0xadc90000  sw          $t1, 0x0($t6)
    ctx->pc = 0x4946ecu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 9));
    // 0x4946f0: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4946f0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4946f4: 0xcd3021  addu        $a2, $a2, $t5
    ctx->pc = 0x4946f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x4946f8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4946f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4946fc: 0x85cc0000  lh          $t4, 0x0($t6)
    ctx->pc = 0x4946fcu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x494700: 0xd03025  or          $a2, $a2, $s0
    ctx->pc = 0x494700u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 16));
    // 0x494704: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x494704u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x494708: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x494708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x49470c: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x49470cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x494710: 0x26a60014  addiu       $a2, $s5, 0x14
    ctx->pc = 0x494710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
    // 0x494714: 0x14c5021  addu        $t2, $t2, $t4
    ctx->pc = 0x494714u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x494718: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x494718u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x49471c: 0x1505025  or          $t2, $t2, $s0
    ctx->pc = 0x49471cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 16));
    // 0x494720: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x494720u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x494724: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x494724u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x494728: 0xaa2824  and         $a1, $a1, $t2
    ctx->pc = 0x494728u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
    // 0x49472c: 0x26a70018  addiu       $a3, $s5, 0x18
    ctx->pc = 0x49472cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
    // 0x494730: 0x25ea2494  addiu       $t2, $t7, 0x2494
    ctx->pc = 0x494730u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 15), 9364));
    // 0x494734: 0x96840000  lhu         $a0, 0x0($s4)
    ctx->pc = 0x494734u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x494738: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x494738u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x49473c: 0x26a50010  addiu       $a1, $s5, 0x10
    ctx->pc = 0x49473cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x494740: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x494740u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x494744: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x494744u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x494748: 0xa5e42324  sh          $a0, 0x2324($t7)
    ctx->pc = 0x494748u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 8996), (uint16_t)GPR_U32(ctx, 4));
    // 0x49474c: 0xa5e22326  sh          $v0, 0x2326($t7)
    ctx->pc = 0x49474cu;
    WRITE16(ADD32(GPR_U32(ctx, 15), 8998), (uint16_t)GPR_U32(ctx, 2));
    // 0x494750: 0xa5e32328  sh          $v1, 0x2328($t7)
    ctx->pc = 0x494750u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 9000), (uint16_t)GPR_U32(ctx, 3));
    // 0x494754: 0x25ef2498  addiu       $t7, $t7, 0x2498
    ctx->pc = 0x494754u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 9368));
    // 0x494758: 0x86a20130  lh          $v0, 0x130($s5)
    ctx->pc = 0x494758u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 304)));
    // 0x49475c: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x49475cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x494760: 0x2709825  or          $s3, $s3, $s0
    ctx->pc = 0x494760u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 16));
    // 0x494764: 0x1134024  and         $t0, $t0, $s3
    ctx->pc = 0x494764u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 19));
    // 0x494768: 0xaee80000  sw          $t0, 0x0($s7)
    ctx->pc = 0x494768u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 8));
    // 0x49476c: 0x86a20132  lh          $v0, 0x132($s5)
    ctx->pc = 0x49476cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 306)));
    // 0x494770: 0x96e30000  lhu         $v1, 0x0($s7)
    ctx->pc = 0x494770u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x494774: 0x1a26821  addu        $t5, $t5, $v0
    ctx->pc = 0x494774u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x494778: 0x1b06825  or          $t5, $t5, $s0
    ctx->pc = 0x494778u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 16));
    // 0x49477c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x49477cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x494780: 0x16d5824  and         $t3, $t3, $t5
    ctx->pc = 0x494780u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 13));
    // 0x494784: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x494784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x494788: 0xaecb0000  sw          $t3, 0x0($s6)
    ctx->pc = 0x494788u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 11));
    // 0x49478c: 0x86a20134  lh          $v0, 0x134($s5)
    ctx->pc = 0x49478cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 308)));
    // 0x494790: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x494790u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x494794: 0x1906025  or          $t4, $t4, $s0
    ctx->pc = 0x494794u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 16));
    // 0x494798: 0x12c4824  and         $t1, $t1, $t4
    ctx->pc = 0x494798u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 12));
    // 0x49479c: 0xadc90000  sw          $t1, 0x0($t6)
    ctx->pc = 0x49479cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 9));
    // 0x4947a0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4947a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4947a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4947a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4947a8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4947a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4947ac: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4947acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4947b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4947b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4947b4: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4947b4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4947b8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4947b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4947bc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4947bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4947c0: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x4947c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4947c4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4947c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4947c8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4947c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4947cc: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4947ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4947d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4947d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4947d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4947d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4947d8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4947d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4947dc: 0x95c30000  lhu         $v1, 0x0($t6)
    ctx->pc = 0x4947dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4947e0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4947e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4947e4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4947e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4947e8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4947e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4947ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4947ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4947f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4947f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4947f4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4947f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4947f8: 0x86e30000  lh          $v1, 0x0($s7)
    ctx->pc = 0x4947f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4947fc: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x4947fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x494800: 0x86850000  lh          $a1, 0x0($s4)
    ctx->pc = 0x494800u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x494804: 0x86260000  lh          $a2, 0x0($s1)
    ctx->pc = 0x494804u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x494808: 0x86470000  lh          $a3, 0x0($s2)
    ctx->pc = 0x494808u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x49480c: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x49480cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x494810: 0x85c80000  lh          $t0, 0x0($t6)
    ctx->pc = 0x494810u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x494814: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x494814u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x494818: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x494818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x49481c: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x49481cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x494820: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x494820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x494824: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x494824u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x494828: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x494828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x49482c: 0xd03025  or          $a2, $a2, $s0
    ctx->pc = 0x49482cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 16));
    // 0x494830: 0xf03825  or          $a3, $a3, $s0
    ctx->pc = 0x494830u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 16));
    // 0x494834: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x494834u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x494838: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x494838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49483c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49483cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x494840: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x494840u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x494844: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x494844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x494848: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x494848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x49484c: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x49484cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x494850: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x494850u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x494854: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x494854u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x494858: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x494858u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49485c: 0x96850000  lhu         $a1, 0x0($s4)
    ctx->pc = 0x49485cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x494860: 0x96260000  lhu         $a2, 0x0($s1)
    ctx->pc = 0x494860u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x494864: 0x96470000  lhu         $a3, 0x0($s2)
    ctx->pc = 0x494864u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x494868: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x494868u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x49486c: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x49486cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x494870: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x494870u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x494874: 0x8de30000  lw          $v1, 0x0($t7)
    ctx->pc = 0x494874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x494878: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x494878u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x49487c: 0x8f020000  lw          $v0, 0x0($t8)
    ctx->pc = 0x49487cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x494880: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x494880u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x494884: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x494884u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x494888: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x494888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x49488c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x49488cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x494890: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x494890u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x494894: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x494894u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x494898: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x494898u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x49489c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x49489cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4948a0: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4948a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4948a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4948a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4948a8: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4948a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4948ac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4948acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4948b0: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4948b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4948b4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4948b4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4948b8: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x4948b8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x4948bc: 0xade30000  sw          $v1, 0x0($t7)
    ctx->pc = 0x4948bcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 3));
    // 0x4948c0: 0xaf020000  sw          $v0, 0x0($t8)
    ctx->pc = 0x4948c0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
    // 0x4948c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4948C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4948C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4948C4u;
        // 0x4948c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4948C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4948CCu;
    // 0x4948cc: 0x0  nop
    ctx->pc = 0x4948ccu;
    // NOP
label_4948d0:
    // 0x4948d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4948d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4948d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4948d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4948d8: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4948d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4948dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4948dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4948e0: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4948e0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4948e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4948e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4948e8: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4948e8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4948ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4948ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4948f0: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4948f0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4948f4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4948f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4948f8: 0x26310abc  addiu       $s1, $s1, 0xABC
    ctx->pc = 0x4948f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2748));
    // 0x4948fc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4948fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x494900: 0x26520ac0  addiu       $s2, $s2, 0xAC0
    ctx->pc = 0x494900u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2752));
    // 0x494904: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x494904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x494908: 0x26730ac4  addiu       $s3, $s3, 0xAC4
    ctx->pc = 0x494908u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2756));
    // 0x49490c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x49490cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x494910: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x494910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x494914: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x494914u;
    SET_GPR_U32(ctx, 31, 0x49491Cu);
    ctx->pc = 0x494918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x494914u;
    // 0x494918: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x494914u, 0x49491Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49491Cu;
label_49491c:
    // 0x49491c: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x49491cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x494920: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x494920u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x494924: 0x24a5d680  addiu       $a1, $a1, -0x2980
    ctx->pc = 0x494924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956672));
    // 0x494928: 0x8e490000  lw          $t1, 0x0($s2)
    ctx->pc = 0x494928u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x49492c: 0x84a62328  lh          $a2, 0x2328($a1)
    ctx->pc = 0x49492cu;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x72F9A8u));
    // 0x494930: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x494930u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x494934: 0x8e6a0000  lw          $t2, 0x0($s3)
    ctx->pc = 0x494934u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x494938: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x494938u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x49493c: 0x84a42324  lh          $a0, 0x2324($a1)
    ctx->pc = 0x49493cu;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x72F9A4u));
    // 0x494940: 0xd03025  or          $a2, $a2, $s0
    ctx->pc = 0x494940u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 16));
    // 0x494944: 0x84a32326  lh          $v1, 0x2326($a1)
    ctx->pc = 0x494944u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x72F9A6u));
    // 0x494948: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x494948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49494c: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x49494cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x494950: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x494950u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x494954: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x494954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x494958: 0x1465024  and         $t2, $t2, $a2
    ctx->pc = 0x494958u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 6));
    // 0x49495c: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x49495cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x494960: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x494960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x494964: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x494964u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x494968: 0xae270000  sw          $a3, 0x0($s1)
    ctx->pc = 0x494968u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
    // 0x49496c: 0xae490000  sw          $t1, 0x0($s2)
    ctx->pc = 0x49496cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 9));
    // 0x494970: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x494970u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x494974: 0xae6a0000  sw          $t2, 0x0($s3)
    ctx->pc = 0x494974u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 10));
    // 0x494978: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x494978u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x49497c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x49497cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x494980: 0x2456000c  addiu       $s6, $v0, 0xC
    ctx->pc = 0x494980u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x494984: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x494984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x494988: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x494988u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x49498c: 0x86280000  lh          $t0, 0x0($s1)
    ctx->pc = 0x49498cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x494990: 0x24550014  addiu       $s5, $v0, 0x14
    ctx->pc = 0x494990u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x494994: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x494994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x494998: 0x864b0000  lh          $t3, 0x0($s2)
    ctx->pc = 0x494998u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x49499c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x49499cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4949a0: 0x866c0000  lh          $t4, 0x0($s3)
    ctx->pc = 0x4949a0u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4949a4: 0x1034023  subu        $t0, $t0, $v1
    ctx->pc = 0x4949a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x4949a8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4949a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4949ac: 0x1104025  or          $t0, $t0, $s0
    ctx->pc = 0x4949acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 16));
    // 0x4949b0: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x4949b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x4949b4: 0xae270000  sw          $a3, 0x0($s1)
    ctx->pc = 0x4949b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
    // 0x4949b8: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x4949b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x4949bc: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x4949bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x4949c0: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4949c0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4949c4: 0x1635823  subu        $t3, $t3, $v1
    ctx->pc = 0x4949c4u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x4949c8: 0x1705825  or          $t3, $t3, $s0
    ctx->pc = 0x4949c8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 16));
    // 0x4949cc: 0x12b4824  and         $t1, $t1, $t3
    ctx->pc = 0x4949ccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 11));
    // 0x4949d0: 0xae490000  sw          $t1, 0x0($s2)
    ctx->pc = 0x4949d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 9));
    // 0x4949d4: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x4949d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x4949d8: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x4949d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x4949dc: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4949dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4949e0: 0x1836023  subu        $t4, $t4, $v1
    ctx->pc = 0x4949e0u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x4949e4: 0x1906025  or          $t4, $t4, $s0
    ctx->pc = 0x4949e4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 16));
    // 0x4949e8: 0x14c5024  and         $t2, $t2, $t4
    ctx->pc = 0x4949e8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 12));
    // 0x4949ec: 0xae6a0000  sw          $t2, 0x0($s3)
    ctx->pc = 0x4949ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 10));
    // 0x4949f0: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x4949f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4949f4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4949f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4949f8: 0xa6c20000  sh          $v0, 0x0($s6)
    ctx->pc = 0x4949f8u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4949fc: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x4949fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x494a00: 0x31823  negu        $v1, $v1
    ctx->pc = 0x494a00u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x494a04: 0xa6830000  sh          $v1, 0x0($s4)
    ctx->pc = 0x494a04u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x494a08: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x494a08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x494a0c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x494a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x494a10: 0xc12a878  jal         func_4AA1E0
    ctx->pc = 0x494A10u;
    SET_GPR_U32(ctx, 31, 0x494A18u);
    ctx->pc = 0x494A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x494A10u;
    // 0x494a14: 0xa6a20000  sh          $v0, 0x0($s5) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA1E0u, 0x494A10u, 0x494A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494A18u;
label_494a18:
    // 0x494a18: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x494a18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x494a1c: 0x26e9011a  addiu       $t1, $s7, 0x11A
    ctx->pc = 0x494a1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 23), 282));
    // 0x494a20: 0x26ea011e  addiu       $t2, $s7, 0x11E
    ctx->pc = 0x494a20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 23), 286));
    // 0x494a24: 0x21023  negu        $v0, $v0
    ctx->pc = 0x494a24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x494a28: 0x26eb0122  addiu       $t3, $s7, 0x122
    ctx->pc = 0x494a28u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 23), 290));
    // 0x494a2c: 0xa6c20000  sh          $v0, 0x0($s6)
    ctx->pc = 0x494a2cu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x494a30: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x494a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x494a34: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x494a34u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x494a38: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x494a38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x494a3c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x494a3cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x494a40: 0x21023  negu        $v0, $v0
    ctx->pc = 0x494a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x494a44: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x494a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x494a48: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x494a48u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x494a4c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x494a4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x494a50: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x494a50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x494a54: 0x31823  negu        $v1, $v1
    ctx->pc = 0x494a54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x494a58: 0xa6a30000  sh          $v1, 0x0($s5)
    ctx->pc = 0x494a58u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x494a5c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x494a5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x494a60: 0x85250000  lh          $a1, 0x0($t1)
    ctx->pc = 0x494a60u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x494a64: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x494a64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x494a68: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x494a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x494a6c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x494a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x494a70: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x494a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x494a74: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x494a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x494a78: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x494a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x494a7c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x494a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x494a80: 0x86470000  lh          $a3, 0x0($s2)
    ctx->pc = 0x494a80u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x494a84: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x494a84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x494a88: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x494a88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x494a8c: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x494a8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x494a90: 0x86660000  lh          $a2, 0x0($s3)
    ctx->pc = 0x494a90u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x494a94: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x494a94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x494a98: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x494a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x494a9c: 0xf03825  or          $a3, $a3, $s0
    ctx->pc = 0x494a9cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 16));
    // 0x494aa0: 0x96280000  lhu         $t0, 0x0($s1)
    ctx->pc = 0x494aa0u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x494aa4: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x494aa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x494aa8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x494aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x494aac: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x494aacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x494ab0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x494ab0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x494ab4: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x494ab4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x494ab8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x494ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x494abc: 0xd03025  or          $a2, $a2, $s0
    ctx->pc = 0x494abcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 16));
    // 0x494ac0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x494ac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x494ac4: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x494ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x494ac8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x494ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x494acc: 0xa5280000  sh          $t0, 0x0($t1)
    ctx->pc = 0x494accu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x494ad0: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x494ad0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x494ad4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x494ad4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x494ad8: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x494ad8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x494adc: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x494adcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x494ae0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x494ae0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x494ae4: 0xa5630000  sh          $v1, 0x0($t3)
    ctx->pc = 0x494ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x494ae8: 0x8125164  j           func_494590
    ctx->pc = 0x494AE8u;
    ctx->pc = 0x494AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x494AE8u;
    // 0x494aec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x494590u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_494590;
    ctx->pc = 0x494AF0u;
label_494af0:
    // 0x494af0: 0x3e00008  jr          $ra
    ctx->pc = 0x494AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x494AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x494AF8u;
label_494af8:
    // 0x494af8: 0x3e00008  jr          $ra
    ctx->pc = 0x494AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x494AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x494B00u;
label_494b00:
    // 0x494b00: 0x3e00008  jr          $ra
    ctx->pc = 0x494B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x494B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x494B08u;
label_494b08:
    // 0x494b08: 0x3e00008  jr          $ra
    ctx->pc = 0x494B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x494B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x494B10u;
}
