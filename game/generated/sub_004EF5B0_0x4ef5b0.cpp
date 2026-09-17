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

// Function: sub_004EF5B0
// Address: 0x4ef5b0 - 0x4ef720
void sub_004EF5B0_0x4ef5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EF5B0_0x4ef5b0");
#endif

    ctx->pc = 0x4ef5b0u;

    // 0x4ef5b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ef5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ef5b4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4ef5b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ef5b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ef5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ef5bc: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ef5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ef5c0: 0x24481210  addiu       $t0, $v0, 0x1210
    ctx->pc = 0x4ef5c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4624));
    // 0x4ef5c4: 0x24ea0014  addiu       $t2, $a3, 0x14
    ctx->pc = 0x4ef5c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x4ef5c8: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4ef5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F1210u));
    // 0x4ef5cc: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4ef5ccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4ef5d0: 0x85420002  lh          $v0, 0x2($t2)
    ctx->pc = 0x4ef5d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x4ef5d4: 0x24ec011e  addiu       $t4, $a3, 0x11E
    ctx->pc = 0x4ef5d4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 286));
    // 0x4ef5d8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4ef5d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4ef5dc: 0x24ee0128  addiu       $t6, $a3, 0x128
    ctx->pc = 0x4ef5dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), 296));
    // 0x4ef5e0: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4ef5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4ef5e4: 0x24eb015e  addiu       $t3, $a3, 0x15E
    ctx->pc = 0x4ef5e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 350));
    // 0x4ef5e8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4ef5e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4ef5ec: 0x1c0302d  daddu       $a2, $t6, $zero
    ctx->pc = 0x4ef5ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ef5f0: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4ef5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x4ef5f4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4ef5f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4ef5f8: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4ef5f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ef5fc: 0x85830000  lh          $v1, 0x0($t4)
    ctx->pc = 0x4ef5fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4ef600: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4ef600u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4ef604: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4ef604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4ef608: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4ef608u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4ef60c: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4ef60cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x4ef610: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4ef610u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ef614: 0x24420280  addiu       $v0, $v0, 0x280
    ctx->pc = 0x4ef614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x4ef618: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4EF618u;
    {
        const bool branch_taken_0x4ef618 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4EF61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF618u;
        // 0x4ef61c: 0x24ed01bc  addiu       $t5, $a3, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ef618) {
            ctx->pc = 0x4EF650u;
            goto label_4ef650;
        }
    }
    ctx->pc = 0x4EF620u;
    // 0x4ef620: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4ef620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ef624: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ef624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ef628: 0x2442fc00  addiu       $v0, $v0, -0x400
    ctx->pc = 0x4ef628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966272));
    // 0x4ef62c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4ef62cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4ef630: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4ef630u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4ef634: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4ef634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ef638: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4ef638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4ef63c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4ef63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4ef640: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4ef640u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x4ef644: 0x813bec8  j           func_4EFB20
    ctx->pc = 0x4EF644u;
    ctx->pc = 0x4EF648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EF644u;
    // 0x4ef648: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EFB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EFB20u, 0x4EF644u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4EF64Cu;
    // 0x4ef64c: 0x0  nop
    ctx->pc = 0x4ef64cu;
    // NOP
label_4ef650:
    // 0x4ef650: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ef650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ef654: 0x240504ef  addiu       $a1, $zero, 0x4EF
    ctx->pc = 0x4ef654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1263));
    // 0x4ef658: 0x8c431228  lw          $v1, 0x1228($v0)
    ctx->pc = 0x4ef658u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1228u));
    // 0x4ef65c: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x4ef65cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x4ef660: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ef660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ef664: 0x24630160  addiu       $v1, $v1, 0x160
    ctx->pc = 0x4ef664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 352));
    // 0x4ef668: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4ef668u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ef66c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4ef66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4ef670: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4ef670u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ef674: 0xa4e5000c  sh          $a1, 0xC($a3)
    ctx->pc = 0x4ef674u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x4ef678: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x4ef678u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4ef67c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4ef67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4ef680: 0xa5620000  sh          $v0, 0x0($t3)
    ctx->pc = 0x4ef680u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ef684: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x4ef684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4ef688: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x4ef688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x4ef68c: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4ef68cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4ef690: 0xa4e3011a  sh          $v1, 0x11A($a3)
    ctx->pc = 0x4ef690u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 282), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ef694: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4ef694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4ef698: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4ef698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ef69c: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x4ef69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x4ef6a0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ef6a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ef6a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ef6a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ef6a8: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4ef6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4ef6ac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ef6acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ef6b0: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4ef6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4ef6b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ef6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ef6b8: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4ef6b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ef6bc: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x4ef6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x4ef6c0: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4ef6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4ef6c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ef6c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ef6c8: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4ef6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4ef6cc: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4ef6ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ef6d0: 0xa5820000  sh          $v0, 0x0($t4)
    ctx->pc = 0x4ef6d0u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ef6d4: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x4ef6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x4ef6d8: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x4ef6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x4ef6dc: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4ef6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4ef6e0: 0xa4e30122  sh          $v1, 0x122($a3)
    ctx->pc = 0x4ef6e0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 290), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ef6e4: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x4ef6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4ef6e8: 0x24450003  addiu       $a1, $v0, 0x3
    ctx->pc = 0x4ef6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x4ef6ec: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x4ef6ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4ef6f0: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x4ef6f0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x4ef6f4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4ef6f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x4ef6f8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4ef6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4ef6fc: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4ef6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4ef700: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x4ef700u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x4ef704: 0xace60124  sw          $a2, 0x124($a3)
    ctx->pc = 0x4ef704u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 292), GPR_U32(ctx, 6));
    // 0x4ef708: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x4ef708u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4ef70c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4ef70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4ef710: 0xa5a20000  sh          $v0, 0x0($t5)
    ctx->pc = 0x4ef710u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ef714: 0x813bdc8  j           func_4EF720
    ctx->pc = 0x4EF714u;
    ctx->pc = 0x4EF718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EF714u;
    // 0x4ef718: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EF720u;
    sub_004EF720_0x4ef720(rdram, ctx, runtime); return;
    ctx->pc = 0x4EF71Cu;
    // 0x4ef71c: 0x0  nop
    ctx->pc = 0x4ef71cu;
    // NOP
    ctx->pc = 0x4ef720u;
}
