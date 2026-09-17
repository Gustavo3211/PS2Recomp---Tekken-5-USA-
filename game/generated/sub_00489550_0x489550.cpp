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

// Function: sub_00489550
// Address: 0x489550 - 0x489990
void sub_00489550_0x489550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00489550_0x489550");
#endif

    switch (ctx->pc) {
        case 0x4895d8u: goto label_4895d8;
        case 0x489614u: goto label_489614;
        default: break;
    }

    ctx->pc = 0x489550u;

    // 0x489550: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x489550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x489554: 0x3c02007c  lui         $v0, 0x7C
    ctx->pc = 0x489554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)124 << 16));
    // 0x489558: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x489558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x48955c: 0x24475b14  addiu       $a3, $v0, 0x5B14
    ctx->pc = 0x48955cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 23316));
    // 0x489560: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x489560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x489564: 0x3c03007c  lui         $v1, 0x7C
    ctx->pc = 0x489564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)124 << 16));
    // 0x489568: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x489568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x48956c: 0x24665b08  addiu       $a2, $v1, 0x5B08
    ctx->pc = 0x48956cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 23304));
    // 0x489570: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x489570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x489574: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x489574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x489578: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x489578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x48957c: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x48957cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x489580: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x489580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x489584: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x489584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x489588: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x489588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x48958c: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x48958cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x489590: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x489590u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7C5B14u));
    // 0x489594: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x489594u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7C5B08u));
    // 0x489598: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x489598u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48959c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x48959cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4895a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4895a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4895a4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4895a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7C5B14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7C5B14u, _value); } while (0);
    // 0x4895a8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x4895a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x4895ac: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4895acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4895b0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4895b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4895b4: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4895b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4895b8: 0x44000e9  bltz        $v0, . + 4 + (0xE9 << 2)
    ctx->pc = 0x4895B8u;
    {
        const bool branch_taken_0x4895b8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4895BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4895B8u;
        // 0x4895bc: 0x3c03007c  lui         $v1, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)124 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4895b8) {
            ctx->pc = 0x489960u;
            goto label_489960;
        }
    }
    ctx->pc = 0x4895C0u;
    // 0x4895c0: 0x3c04007c  lui         $a0, 0x7C
    ctx->pc = 0x4895c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)124 << 16));
    // 0x4895c4: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x4895c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4895c8: 0x24775b18  addiu       $s7, $v1, 0x5B18
    ctx->pc = 0x4895c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 23320));
    // 0x4895cc: 0x24995b1c  addiu       $t9, $a0, 0x5B1C
    ctx->pc = 0x4895ccu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 4), 23324));
    // 0x4895d0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x4895d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4895d4: 0x0  nop
    ctx->pc = 0x4895d4u;
    // NOP
label_4895d8:
    // 0x4895d8: 0x3c04007c  lui         $a0, 0x7C
    ctx->pc = 0x4895d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)124 << 16));
    // 0x4895dc: 0x24845b00  addiu       $a0, $a0, 0x5B00
    ctx->pc = 0x4895dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23296));
    // 0x4895e0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4895e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7C5B00u));
    // 0x4895e4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x4895e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4895e8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4895e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4895ec: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x4895ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x4895f0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4895f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4895f4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4895f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x4895f8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4895f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4895fc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4895fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x489600: 0x3c04007c  lui         $a0, 0x7C
    ctx->pc = 0x489600u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)124 << 16));
    // 0x489604: 0x24845b00  addiu       $a0, $a0, 0x5B00
    ctx->pc = 0x489604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23296));
    // 0x489608: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x489608u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7C5B00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7C5B00u, _value); } while (0);
    // 0x48960c: 0xc13e654  jal         func_4F9950
    ctx->pc = 0x48960Cu;
    SET_GPR_U32(ctx, 31, 0x489614u);
    ctx->pc = 0x489610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48960Cu;
    // 0x489610: 0x7fb90020  sq          $t9, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9950u, 0x48960Cu, 0x489614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489614u;
label_489614:
    // 0x489614: 0x3c04007c  lui         $a0, 0x7C
    ctx->pc = 0x489614u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)124 << 16));
    // 0x489618: 0x24845b00  addiu       $a0, $a0, 0x5B00
    ctx->pc = 0x489618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23296));
    // 0x48961c: 0x24424000  addiu       $v0, $v0, 0x4000
    ctx->pc = 0x48961cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16384));
    // 0x489620: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x489620u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x7C5B00u));
    // 0x489624: 0x7bb90020  lq          $t9, 0x20($sp)
    ctx->pc = 0x489624u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x489628: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x489628u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x48962c: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x48962cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x489630: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x489630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x489634: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x489634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x489638: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x489638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x48963c: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x48963cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x489640: 0xaf240000  sw          $a0, 0x0($t9)
    ctx->pc = 0x489640u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 4));
    // 0x489644: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x489644u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x489648: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x489648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x48964c: 0x24a40002  addiu       $a0, $a1, 0x2
    ctx->pc = 0x48964cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x489650: 0x24a60004  addiu       $a2, $a1, 0x4
    ctx->pc = 0x489650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x489654: 0xa4433e00  sh          $v1, 0x3E00($v0)
    ctx->pc = 0x489654u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 15872), (uint16_t)GPR_U32(ctx, 3));
    // 0x489658: 0x24a70006  addiu       $a3, $a1, 0x6
    ctx->pc = 0x489658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x48965c: 0xafc50000  sw          $a1, 0x0($fp)
    ctx->pc = 0x48965cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 5));
    // 0x489660: 0x24a80008  addiu       $t0, $a1, 0x8
    ctx->pc = 0x489660u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x489664: 0x24a9000a  addiu       $t1, $a1, 0xA
    ctx->pc = 0x489664u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
    // 0x489668: 0x24aa000c  addiu       $t2, $a1, 0xC
    ctx->pc = 0x489668u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x48966c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x48966cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x489670: 0x24ab000e  addiu       $t3, $a1, 0xE
    ctx->pc = 0x489670u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 14));
    // 0x489674: 0x8f230000  lw          $v1, 0x0($t9)
    ctx->pc = 0x489674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x489678: 0x24ac0010  addiu       $t4, $a1, 0x10
    ctx->pc = 0x489678u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x48967c: 0x24ad0012  addiu       $t5, $a1, 0x12
    ctx->pc = 0x48967cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 18));
    // 0x489680: 0x24ae0014  addiu       $t6, $a1, 0x14
    ctx->pc = 0x489680u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x489684: 0xa4623e00  sh          $v0, 0x3E00($v1)
    ctx->pc = 0x489684u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 15872), (uint16_t)GPR_U32(ctx, 2));
    // 0x489688: 0x24af0016  addiu       $t7, $a1, 0x16
    ctx->pc = 0x489688u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), 22));
    // 0x48968c: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x48968cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x489690: 0x24b00018  addiu       $s0, $a1, 0x18
    ctx->pc = 0x489690u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x489694: 0x24b1001c  addiu       $s1, $a1, 0x1C
    ctx->pc = 0x489694u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
    // 0x489698: 0x24b2001e  addiu       $s2, $a1, 0x1E
    ctx->pc = 0x489698u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 30));
    // 0x48969c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x48969cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4896a0: 0x24a4001a  addiu       $a0, $a1, 0x1A
    ctx->pc = 0x4896a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 26));
    // 0x4896a4: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x4896a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4896a8: 0x24b30020  addiu       $s3, $a1, 0x20
    ctx->pc = 0x4896a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x4896ac: 0x24b40022  addiu       $s4, $a1, 0x22
    ctx->pc = 0x4896acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 34));
    // 0x4896b0: 0x24b50024  addiu       $s5, $a1, 0x24
    ctx->pc = 0x4896b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
    // 0x4896b4: 0xa4623a00  sh          $v0, 0x3A00($v1)
    ctx->pc = 0x4896b4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14848), (uint16_t)GPR_U32(ctx, 2));
    // 0x4896b8: 0x24b60028  addiu       $s6, $a1, 0x28
    ctx->pc = 0x4896b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
    // 0x4896bc: 0xafc60000  sw          $a2, 0x0($fp)
    ctx->pc = 0x4896bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 6));
    // 0x4896c0: 0x24b8002a  addiu       $t8, $a1, 0x2A
    ctx->pc = 0x4896c0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 5), 42));
    // 0x4896c4: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4896c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4896c8: 0x24a60026  addiu       $a2, $a1, 0x26
    ctx->pc = 0x4896c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 38));
    // 0x4896cc: 0x8f230000  lw          $v1, 0x0($t9)
    ctx->pc = 0x4896ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x4896d0: 0xa4623a00  sh          $v0, 0x3A00($v1)
    ctx->pc = 0x4896d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14848), (uint16_t)GPR_U32(ctx, 2));
    // 0x4896d4: 0x24a2002c  addiu       $v0, $a1, 0x2C
    ctx->pc = 0x4896d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 44));
    // 0x4896d8: 0xafc70000  sw          $a3, 0x0($fp)
    ctx->pc = 0x4896d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 7));
    // 0x4896dc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4896dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4896e0: 0x24a2002e  addiu       $v0, $a1, 0x2E
    ctx->pc = 0x4896e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 46));
    // 0x4896e4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4896e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x4896e8: 0x24a20032  addiu       $v0, $a1, 0x32
    ctx->pc = 0x4896e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 50));
    // 0x4896ec: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x4896ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4896f0: 0x94e70000  lhu         $a3, 0x0($a3)
    ctx->pc = 0x4896f0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4896f4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x4896f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x4896f8: 0x24a20034  addiu       $v0, $a1, 0x34
    ctx->pc = 0x4896f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 52));
    // 0x4896fc: 0xa7a70030  sh          $a3, 0x30($sp)
    ctx->pc = 0x4896fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 7));
    // 0x489700: 0x24a70030  addiu       $a3, $a1, 0x30
    ctx->pc = 0x489700u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x489704: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x489704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x489708: 0x97a20030  lhu         $v0, 0x30($sp)
    ctx->pc = 0x489708u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48970c: 0xa4623600  sh          $v0, 0x3600($v1)
    ctx->pc = 0x48970cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 13824), (uint16_t)GPR_U32(ctx, 2));
    // 0x489710: 0x24a30036  addiu       $v1, $a1, 0x36
    ctx->pc = 0x489710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 54));
    // 0x489714: 0x24a20038  addiu       $v0, $a1, 0x38
    ctx->pc = 0x489714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 56));
    // 0x489718: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x489718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x48971c: 0xafc80000  sw          $t0, 0x0($fp)
    ctx->pc = 0x48971cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 8));
    // 0x489720: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x489720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x489724: 0x24a2003a  addiu       $v0, $a1, 0x3A
    ctx->pc = 0x489724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 58));
    // 0x489728: 0x8f230000  lw          $v1, 0x0($t9)
    ctx->pc = 0x489728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x48972c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x48972cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x489730: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x489730u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x489734: 0x24a8003c  addiu       $t0, $a1, 0x3C
    ctx->pc = 0x489734u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x489738: 0x24a5003e  addiu       $a1, $a1, 0x3E
    ctx->pc = 0x489738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 62));
    // 0x48973c: 0xa4623600  sh          $v0, 0x3600($v1)
    ctx->pc = 0x48973cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 13824), (uint16_t)GPR_U32(ctx, 2));
    // 0x489740: 0xafc90000  sw          $t1, 0x0($fp)
    ctx->pc = 0x489740u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 9));
    // 0x489744: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x489744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x489748: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x489748u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x48974c: 0xa4623200  sh          $v0, 0x3200($v1)
    ctx->pc = 0x48974cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12800), (uint16_t)GPR_U32(ctx, 2));
    // 0x489750: 0xafca0000  sw          $t2, 0x0($fp)
    ctx->pc = 0x489750u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 10));
    // 0x489754: 0x8f230000  lw          $v1, 0x0($t9)
    ctx->pc = 0x489754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x489758: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x489758u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x48975c: 0xa4623200  sh          $v0, 0x3200($v1)
    ctx->pc = 0x48975cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12800), (uint16_t)GPR_U32(ctx, 2));
    // 0x489760: 0xafcb0000  sw          $t3, 0x0($fp)
    ctx->pc = 0x489760u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 11));
    // 0x489764: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x489764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x489768: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x489768u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x48976c: 0xa4622e00  sh          $v0, 0x2E00($v1)
    ctx->pc = 0x48976cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 11776), (uint16_t)GPR_U32(ctx, 2));
    // 0x489770: 0xafcc0000  sw          $t4, 0x0($fp)
    ctx->pc = 0x489770u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 12));
    // 0x489774: 0x8f230000  lw          $v1, 0x0($t9)
    ctx->pc = 0x489774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x489778: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x489778u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x48977c: 0xa4622e00  sh          $v0, 0x2E00($v1)
    ctx->pc = 0x48977cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 11776), (uint16_t)GPR_U32(ctx, 2));
    // 0x489780: 0xafcd0000  sw          $t5, 0x0($fp)
    ctx->pc = 0x489780u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 13));
    // 0x489784: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x489784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x489788: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x489788u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x48978c: 0xa4622a00  sh          $v0, 0x2A00($v1)
    ctx->pc = 0x48978cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10752), (uint16_t)GPR_U32(ctx, 2));
    // 0x489790: 0xafce0000  sw          $t6, 0x0($fp)
    ctx->pc = 0x489790u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 14));
    // 0x489794: 0x8f230000  lw          $v1, 0x0($t9)
    ctx->pc = 0x489794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x489798: 0x95c20000  lhu         $v0, 0x0($t6)
    ctx->pc = 0x489798u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x48979c: 0xa4622a00  sh          $v0, 0x2A00($v1)
    ctx->pc = 0x48979cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10752), (uint16_t)GPR_U32(ctx, 2));
    // 0x4897a0: 0xafcf0000  sw          $t7, 0x0($fp)
    ctx->pc = 0x4897a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 15));
    // 0x4897a4: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x4897a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4897a8: 0x95e20000  lhu         $v0, 0x0($t7)
    ctx->pc = 0x4897a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4897ac: 0xa4622600  sh          $v0, 0x2600($v1)
    ctx->pc = 0x4897acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 9728), (uint16_t)GPR_U32(ctx, 2));
    // 0x4897b0: 0xafd00000  sw          $s0, 0x0($fp)
    ctx->pc = 0x4897b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 16));
    // 0x4897b4: 0x8f230000  lw          $v1, 0x0($t9)
    ctx->pc = 0x4897b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x4897b8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4897b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4897bc: 0xa4622600  sh          $v0, 0x2600($v1)
    ctx->pc = 0x4897bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 9728), (uint16_t)GPR_U32(ctx, 2));
    // 0x4897c0: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x4897c0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x4897c4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4897c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4897c8: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x4897c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4897cc: 0xa4622200  sh          $v0, 0x2200($v1)
    ctx->pc = 0x4897ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8704), (uint16_t)GPR_U32(ctx, 2));
    // 0x4897d0: 0xafd10000  sw          $s1, 0x0($fp)
    ctx->pc = 0x4897d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 17));
    // 0x4897d4: 0x8f230000  lw          $v1, 0x0($t9)
    ctx->pc = 0x4897d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x4897d8: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4897d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4897dc: 0xa4622200  sh          $v0, 0x2200($v1)
    ctx->pc = 0x4897dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8704), (uint16_t)GPR_U32(ctx, 2));
    // 0x4897e0: 0xafd20000  sw          $s2, 0x0($fp)
    ctx->pc = 0x4897e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 18));
    // 0x4897e4: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x4897e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4897e8: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4897e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4897ec: 0xa4621e00  sh          $v0, 0x1E00($v1)
    ctx->pc = 0x4897ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 7680), (uint16_t)GPR_U32(ctx, 2));
    // 0x4897f0: 0xafd30000  sw          $s3, 0x0($fp)
    ctx->pc = 0x4897f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 19));
    // 0x4897f4: 0x8f230000  lw          $v1, 0x0($t9)
    ctx->pc = 0x4897f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x4897f8: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4897f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4897fc: 0xa4621e00  sh          $v0, 0x1E00($v1)
    ctx->pc = 0x4897fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 7680), (uint16_t)GPR_U32(ctx, 2));
    // 0x489800: 0xafd40000  sw          $s4, 0x0($fp)
    ctx->pc = 0x489800u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 20));
    // 0x489804: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x489804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x489808: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x489808u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x48980c: 0xa4621a00  sh          $v0, 0x1A00($v1)
    ctx->pc = 0x48980cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6656), (uint16_t)GPR_U32(ctx, 2));
    // 0x489810: 0xafd50000  sw          $s5, 0x0($fp)
    ctx->pc = 0x489810u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 21));
    // 0x489814: 0x8f230000  lw          $v1, 0x0($t9)
    ctx->pc = 0x489814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x489818: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x489818u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x48981c: 0xa4621a00  sh          $v0, 0x1A00($v1)
    ctx->pc = 0x48981cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6656), (uint16_t)GPR_U32(ctx, 2));
    // 0x489820: 0xafc60000  sw          $a2, 0x0($fp)
    ctx->pc = 0x489820u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 6));
    // 0x489824: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x489824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x489828: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x489828u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x48982c: 0xa4621600  sh          $v0, 0x1600($v1)
    ctx->pc = 0x48982cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5632), (uint16_t)GPR_U32(ctx, 2));
    // 0x489830: 0xafd60000  sw          $s6, 0x0($fp)
    ctx->pc = 0x489830u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 22));
    // 0x489834: 0x8f230000  lw          $v1, 0x0($t9)
    ctx->pc = 0x489834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x489838: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x489838u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x48983c: 0xa4621600  sh          $v0, 0x1600($v1)
    ctx->pc = 0x48983cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5632), (uint16_t)GPR_U32(ctx, 2));
    // 0x489840: 0xafd80000  sw          $t8, 0x0($fp)
    ctx->pc = 0x489840u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 24));
    // 0x489844: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x489844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x489848: 0x97020000  lhu         $v0, 0x0($t8)
    ctx->pc = 0x489848u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x48984c: 0xa4621200  sh          $v0, 0x1200($v1)
    ctx->pc = 0x48984cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4608), (uint16_t)GPR_U32(ctx, 2));
    // 0x489850: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x489850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x489854: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x489854u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x489858: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x489858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48985c: 0x8f230000  lw          $v1, 0x0($t9)
    ctx->pc = 0x48985cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x489860: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x489860u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x489864: 0xa4621200  sh          $v0, 0x1200($v1)
    ctx->pc = 0x489864u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4608), (uint16_t)GPR_U32(ctx, 2));
    // 0x489868: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x489868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x48986c: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x48986cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x489870: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x489870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x489874: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x489874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x489878: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x489878u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x48987c: 0xa4620e00  sh          $v0, 0xE00($v1)
    ctx->pc = 0x48987cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 3584), (uint16_t)GPR_U32(ctx, 2));
    // 0x489880: 0xafc70000  sw          $a3, 0x0($fp)
    ctx->pc = 0x489880u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 7));
    // 0x489884: 0x8f230000  lw          $v1, 0x0($t9)
    ctx->pc = 0x489884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x489888: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x489888u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x48988c: 0xa4620e00  sh          $v0, 0xE00($v1)
    ctx->pc = 0x48988cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 3584), (uint16_t)GPR_U32(ctx, 2));
    // 0x489890: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x489890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x489894: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x489894u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x489898: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x489898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48989c: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x48989cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4898a0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4898a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4898a4: 0xa4620a00  sh          $v0, 0xA00($v1)
    ctx->pc = 0x4898a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2560), (uint16_t)GPR_U32(ctx, 2));
    // 0x4898a8: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x4898a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4898ac: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x4898acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x4898b0: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x4898b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4898b4: 0x8f230000  lw          $v1, 0x0($t9)
    ctx->pc = 0x4898b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x4898b8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4898b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4898bc: 0xa4620a00  sh          $v0, 0xA00($v1)
    ctx->pc = 0x4898bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2560), (uint16_t)GPR_U32(ctx, 2));
    // 0x4898c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4898c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4898c4: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x4898c4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x4898c8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4898c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4898cc: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x4898ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4898d0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4898d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4898d4: 0xa4620600  sh          $v0, 0x600($v1)
    ctx->pc = 0x4898d4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1536), (uint16_t)GPR_U32(ctx, 2));
    // 0x4898d8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x4898d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x4898dc: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x4898dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x4898e0: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x4898e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x4898e4: 0x8f230000  lw          $v1, 0x0($t9)
    ctx->pc = 0x4898e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x4898e8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4898e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4898ec: 0xa4620600  sh          $v0, 0x600($v1)
    ctx->pc = 0x4898ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1536), (uint16_t)GPR_U32(ctx, 2));
    // 0x4898f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x4898f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4898f4: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x4898f4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x4898f8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x4898f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4898fc: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x4898fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x489900: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x489900u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x489904: 0xa4620200  sh          $v0, 0x200($v1)
    ctx->pc = 0x489904u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 512), (uint16_t)GPR_U32(ctx, 2));
    // 0x489908: 0xafc80000  sw          $t0, 0x0($fp)
    ctx->pc = 0x489908u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 8));
    // 0x48990c: 0x8f230000  lw          $v1, 0x0($t9)
    ctx->pc = 0x48990cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x489910: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x489910u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x489914: 0xa4620200  sh          $v0, 0x200($v1)
    ctx->pc = 0x489914u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 512), (uint16_t)GPR_U32(ctx, 2));
    // 0x489918: 0x3c03007c  lui         $v1, 0x7C
    ctx->pc = 0x489918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)124 << 16));
    // 0x48991c: 0xafc50000  sw          $a1, 0x0($fp)
    ctx->pc = 0x48991cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 5));
    // 0x489920: 0x24635b08  addiu       $v1, $v1, 0x5B08
    ctx->pc = 0x489920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23304));
    // 0x489924: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x489924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489928: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x489928u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x7C5B08u));
    // 0x48992c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x48992cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7C5B08u));
    // 0x489930: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x489930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x489934: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x489934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x489938: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x489938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x48993c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x48993cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x489940: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x489940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x489944: 0x3c02007c  lui         $v0, 0x7C
    ctx->pc = 0x489944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)124 << 16));
    // 0x489948: 0x24425b08  addiu       $v0, $v0, 0x5B08
    ctx->pc = 0x489948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23304));
    // 0x48994c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x48994cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7C5B08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7C5B08u, _value); } while (0);
    // 0x489950: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x489950u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489954: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x489954u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x7C5B08u));
    // 0x489958: 0x443ff1f  bgezl       $v0, . + 4 + (-0xE1 << 2)
    ctx->pc = 0x489958u;
    {
        const bool branch_taken_0x489958 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x489958) {
            ctx->pc = 0x48995Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x489958u;
            // 0x48995c: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4895D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4895d8;
        }
    }
    ctx->pc = 0x489960u;
label_489960:
    // 0x489960: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x489960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x489964: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x489964u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x489968: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x489968u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48996c: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x48996cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x489970: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x489970u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x489974: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x489974u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x489978: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x489978u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x48997c: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x48997cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x489980: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x489980u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x489984: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x489984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x489988: 0x3e00008  jr          $ra
    ctx->pc = 0x489988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48998Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489988u;
        // 0x48998c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x489988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x489990u;
}
