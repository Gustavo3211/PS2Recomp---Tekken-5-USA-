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

// Function: sub_00489110
// Address: 0x489110 - 0x489550
void sub_00489110_0x489110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00489110_0x489110");
#endif

    switch (ctx->pc) {
        case 0x489198u: goto label_489198;
        case 0x4891d4u: goto label_4891d4;
        default: break;
    }

    ctx->pc = 0x489110u;

    // 0x489110: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x489110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x489114: 0x3c02007c  lui         $v0, 0x7C
    ctx->pc = 0x489114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)124 << 16));
    // 0x489118: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x489118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x48911c: 0x24475b14  addiu       $a3, $v0, 0x5B14
    ctx->pc = 0x48911cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 23316));
    // 0x489120: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x489120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x489124: 0x3c03007c  lui         $v1, 0x7C
    ctx->pc = 0x489124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)124 << 16));
    // 0x489128: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x489128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x48912c: 0x24665b08  addiu       $a2, $v1, 0x5B08
    ctx->pc = 0x48912cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 23304));
    // 0x489130: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x489130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x489134: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x489134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x489138: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x489138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x48913c: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x48913cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x489140: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x489140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x489144: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x489144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x489148: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x489148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x48914c: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x48914cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x489150: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x489150u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7C5B14u));
    // 0x489154: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x489154u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7C5B08u));
    // 0x489158: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x489158u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48915c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x48915cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x489160: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x489160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x489164: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x489164u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7C5B14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7C5B14u, _value); } while (0);
    // 0x489168: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x489168u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x48916c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x48916cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x489170: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x489170u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x489174: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x489174u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x489178: 0x44000e9  bltz        $v0, . + 4 + (0xE9 << 2)
    ctx->pc = 0x489178u;
    {
        const bool branch_taken_0x489178 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x48917Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489178u;
        // 0x48917c: 0x3c03007c  lui         $v1, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)124 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489178) {
            ctx->pc = 0x489520u;
            goto label_489520;
        }
    }
    ctx->pc = 0x489180u;
    // 0x489180: 0x3c04007c  lui         $a0, 0x7C
    ctx->pc = 0x489180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)124 << 16));
    // 0x489184: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x489184u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489188: 0x24775b18  addiu       $s7, $v1, 0x5B18
    ctx->pc = 0x489188u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 23320));
    // 0x48918c: 0x24995b1c  addiu       $t9, $a0, 0x5B1C
    ctx->pc = 0x48918cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 4), 23324));
    // 0x489190: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x489190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x489194: 0x0  nop
    ctx->pc = 0x489194u;
    // NOP
label_489198:
    // 0x489198: 0x3c04007c  lui         $a0, 0x7C
    ctx->pc = 0x489198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)124 << 16));
    // 0x48919c: 0x24845b00  addiu       $a0, $a0, 0x5B00
    ctx->pc = 0x48919cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23296));
    // 0x4891a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4891a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7C5B00u));
    // 0x4891a4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x4891a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4891a8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4891a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4891ac: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x4891acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x4891b0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4891b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4891b4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4891b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x4891b8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4891b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4891bc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4891bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4891c0: 0x3c04007c  lui         $a0, 0x7C
    ctx->pc = 0x4891c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)124 << 16));
    // 0x4891c4: 0x24845b00  addiu       $a0, $a0, 0x5B00
    ctx->pc = 0x4891c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23296));
    // 0x4891c8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4891c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7C5B00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7C5B00u, _value); } while (0);
    // 0x4891cc: 0xc13e654  jal         func_4F9950
    ctx->pc = 0x4891CCu;
    SET_GPR_U32(ctx, 31, 0x4891D4u);
    ctx->pc = 0x4891D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4891CCu;
    // 0x4891d0: 0x7fb90020  sq          $t9, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9950u, 0x4891CCu, 0x4891D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4891D4u;
label_4891d4:
    // 0x4891d4: 0x3c04007c  lui         $a0, 0x7C
    ctx->pc = 0x4891d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)124 << 16));
    // 0x4891d8: 0x24845b00  addiu       $a0, $a0, 0x5B00
    ctx->pc = 0x4891d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23296));
    // 0x4891dc: 0x24424000  addiu       $v0, $v0, 0x4000
    ctx->pc = 0x4891dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16384));
    // 0x4891e0: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x4891e0u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x7C5B00u));
    // 0x4891e4: 0x7bb90020  lq          $t9, 0x20($sp)
    ctx->pc = 0x4891e4u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4891e8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4891e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4891ec: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x4891ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4891f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4891f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4891f4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x4891f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x4891f8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4891f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4891fc: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x4891fcu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x489200: 0xaf240000  sw          $a0, 0x0($t9)
    ctx->pc = 0x489200u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 4));
    // 0x489204: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x489204u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x489208: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x489208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x48920c: 0x24a40002  addiu       $a0, $a1, 0x2
    ctx->pc = 0x48920cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x489210: 0x24a60004  addiu       $a2, $a1, 0x4
    ctx->pc = 0x489210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x489214: 0xa4433c00  sh          $v1, 0x3C00($v0)
    ctx->pc = 0x489214u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 15360), (uint16_t)GPR_U32(ctx, 3));
    // 0x489218: 0x24a70006  addiu       $a3, $a1, 0x6
    ctx->pc = 0x489218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x48921c: 0xafc50000  sw          $a1, 0x0($fp)
    ctx->pc = 0x48921cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 5));
    // 0x489220: 0x24a80008  addiu       $t0, $a1, 0x8
    ctx->pc = 0x489220u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x489224: 0x24a9000a  addiu       $t1, $a1, 0xA
    ctx->pc = 0x489224u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
    // 0x489228: 0x24aa000c  addiu       $t2, $a1, 0xC
    ctx->pc = 0x489228u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x48922c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x48922cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x489230: 0x24ab000e  addiu       $t3, $a1, 0xE
    ctx->pc = 0x489230u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 14));
    // 0x489234: 0x8f230000  lw          $v1, 0x0($t9)
    ctx->pc = 0x489234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x489238: 0x24ac0010  addiu       $t4, $a1, 0x10
    ctx->pc = 0x489238u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x48923c: 0x24ad0012  addiu       $t5, $a1, 0x12
    ctx->pc = 0x48923cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 18));
    // 0x489240: 0x24ae0014  addiu       $t6, $a1, 0x14
    ctx->pc = 0x489240u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x489244: 0xa4623c00  sh          $v0, 0x3C00($v1)
    ctx->pc = 0x489244u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 15360), (uint16_t)GPR_U32(ctx, 2));
    // 0x489248: 0x24af0016  addiu       $t7, $a1, 0x16
    ctx->pc = 0x489248u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), 22));
    // 0x48924c: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x48924cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x489250: 0x24b00018  addiu       $s0, $a1, 0x18
    ctx->pc = 0x489250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x489254: 0x24b1001c  addiu       $s1, $a1, 0x1C
    ctx->pc = 0x489254u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
    // 0x489258: 0x24b2001e  addiu       $s2, $a1, 0x1E
    ctx->pc = 0x489258u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 30));
    // 0x48925c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x48925cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x489260: 0x24a4001a  addiu       $a0, $a1, 0x1A
    ctx->pc = 0x489260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 26));
    // 0x489264: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x489264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x489268: 0x24b30020  addiu       $s3, $a1, 0x20
    ctx->pc = 0x489268u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x48926c: 0x24b40022  addiu       $s4, $a1, 0x22
    ctx->pc = 0x48926cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 34));
    // 0x489270: 0x24b50024  addiu       $s5, $a1, 0x24
    ctx->pc = 0x489270u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
    // 0x489274: 0xa4623800  sh          $v0, 0x3800($v1)
    ctx->pc = 0x489274u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14336), (uint16_t)GPR_U32(ctx, 2));
    // 0x489278: 0x24b60028  addiu       $s6, $a1, 0x28
    ctx->pc = 0x489278u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
    // 0x48927c: 0xafc60000  sw          $a2, 0x0($fp)
    ctx->pc = 0x48927cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 6));
    // 0x489280: 0x24b8002a  addiu       $t8, $a1, 0x2A
    ctx->pc = 0x489280u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 5), 42));
    // 0x489284: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x489284u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x489288: 0x24a60026  addiu       $a2, $a1, 0x26
    ctx->pc = 0x489288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 38));
    // 0x48928c: 0x8f230000  lw          $v1, 0x0($t9)
    ctx->pc = 0x48928cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x489290: 0xa4623800  sh          $v0, 0x3800($v1)
    ctx->pc = 0x489290u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14336), (uint16_t)GPR_U32(ctx, 2));
    // 0x489294: 0x24a2002c  addiu       $v0, $a1, 0x2C
    ctx->pc = 0x489294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 44));
    // 0x489298: 0xafc70000  sw          $a3, 0x0($fp)
    ctx->pc = 0x489298u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 7));
    // 0x48929c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x48929cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4892a0: 0x24a2002e  addiu       $v0, $a1, 0x2E
    ctx->pc = 0x4892a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 46));
    // 0x4892a4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4892a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x4892a8: 0x24a20032  addiu       $v0, $a1, 0x32
    ctx->pc = 0x4892a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 50));
    // 0x4892ac: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x4892acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4892b0: 0x94e70000  lhu         $a3, 0x0($a3)
    ctx->pc = 0x4892b0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4892b4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x4892b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x4892b8: 0x24a20034  addiu       $v0, $a1, 0x34
    ctx->pc = 0x4892b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 52));
    // 0x4892bc: 0xa7a70030  sh          $a3, 0x30($sp)
    ctx->pc = 0x4892bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 7));
    // 0x4892c0: 0x24a70030  addiu       $a3, $a1, 0x30
    ctx->pc = 0x4892c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x4892c4: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x4892c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x4892c8: 0x97a20030  lhu         $v0, 0x30($sp)
    ctx->pc = 0x4892c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4892cc: 0xa4623400  sh          $v0, 0x3400($v1)
    ctx->pc = 0x4892ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 13312), (uint16_t)GPR_U32(ctx, 2));
    // 0x4892d0: 0x24a30036  addiu       $v1, $a1, 0x36
    ctx->pc = 0x4892d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 54));
    // 0x4892d4: 0x24a20038  addiu       $v0, $a1, 0x38
    ctx->pc = 0x4892d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 56));
    // 0x4892d8: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x4892d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x4892dc: 0xafc80000  sw          $t0, 0x0($fp)
    ctx->pc = 0x4892dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 8));
    // 0x4892e0: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x4892e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x4892e4: 0x24a2003a  addiu       $v0, $a1, 0x3A
    ctx->pc = 0x4892e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 58));
    // 0x4892e8: 0x8f230000  lw          $v1, 0x0($t9)
    ctx->pc = 0x4892e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x4892ec: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x4892ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x4892f0: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4892f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4892f4: 0x24a8003c  addiu       $t0, $a1, 0x3C
    ctx->pc = 0x4892f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x4892f8: 0x24a5003e  addiu       $a1, $a1, 0x3E
    ctx->pc = 0x4892f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 62));
    // 0x4892fc: 0xa4623400  sh          $v0, 0x3400($v1)
    ctx->pc = 0x4892fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 13312), (uint16_t)GPR_U32(ctx, 2));
    // 0x489300: 0xafc90000  sw          $t1, 0x0($fp)
    ctx->pc = 0x489300u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 9));
    // 0x489304: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x489304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x489308: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x489308u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x48930c: 0xa4623000  sh          $v0, 0x3000($v1)
    ctx->pc = 0x48930cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12288), (uint16_t)GPR_U32(ctx, 2));
    // 0x489310: 0xafca0000  sw          $t2, 0x0($fp)
    ctx->pc = 0x489310u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 10));
    // 0x489314: 0x8f230000  lw          $v1, 0x0($t9)
    ctx->pc = 0x489314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x489318: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x489318u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x48931c: 0xa4623000  sh          $v0, 0x3000($v1)
    ctx->pc = 0x48931cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12288), (uint16_t)GPR_U32(ctx, 2));
    // 0x489320: 0xafcb0000  sw          $t3, 0x0($fp)
    ctx->pc = 0x489320u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 11));
    // 0x489324: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x489324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x489328: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x489328u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x48932c: 0xa4622c00  sh          $v0, 0x2C00($v1)
    ctx->pc = 0x48932cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 11264), (uint16_t)GPR_U32(ctx, 2));
    // 0x489330: 0xafcc0000  sw          $t4, 0x0($fp)
    ctx->pc = 0x489330u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 12));
    // 0x489334: 0x8f230000  lw          $v1, 0x0($t9)
    ctx->pc = 0x489334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x489338: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x489338u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x48933c: 0xa4622c00  sh          $v0, 0x2C00($v1)
    ctx->pc = 0x48933cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 11264), (uint16_t)GPR_U32(ctx, 2));
    // 0x489340: 0xafcd0000  sw          $t5, 0x0($fp)
    ctx->pc = 0x489340u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 13));
    // 0x489344: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x489344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x489348: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x489348u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x48934c: 0xa4622800  sh          $v0, 0x2800($v1)
    ctx->pc = 0x48934cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10240), (uint16_t)GPR_U32(ctx, 2));
    // 0x489350: 0xafce0000  sw          $t6, 0x0($fp)
    ctx->pc = 0x489350u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 14));
    // 0x489354: 0x8f230000  lw          $v1, 0x0($t9)
    ctx->pc = 0x489354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x489358: 0x95c20000  lhu         $v0, 0x0($t6)
    ctx->pc = 0x489358u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x48935c: 0xa4622800  sh          $v0, 0x2800($v1)
    ctx->pc = 0x48935cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10240), (uint16_t)GPR_U32(ctx, 2));
    // 0x489360: 0xafcf0000  sw          $t7, 0x0($fp)
    ctx->pc = 0x489360u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 15));
    // 0x489364: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x489364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x489368: 0x95e20000  lhu         $v0, 0x0($t7)
    ctx->pc = 0x489368u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x48936c: 0xa4622400  sh          $v0, 0x2400($v1)
    ctx->pc = 0x48936cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 9216), (uint16_t)GPR_U32(ctx, 2));
    // 0x489370: 0xafd00000  sw          $s0, 0x0($fp)
    ctx->pc = 0x489370u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 16));
    // 0x489374: 0x8f230000  lw          $v1, 0x0($t9)
    ctx->pc = 0x489374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x489378: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x489378u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x48937c: 0xa4622400  sh          $v0, 0x2400($v1)
    ctx->pc = 0x48937cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 9216), (uint16_t)GPR_U32(ctx, 2));
    // 0x489380: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x489380u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x489384: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x489384u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x489388: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x489388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x48938c: 0xa4622000  sh          $v0, 0x2000($v1)
    ctx->pc = 0x48938cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8192), (uint16_t)GPR_U32(ctx, 2));
    // 0x489390: 0xafd10000  sw          $s1, 0x0($fp)
    ctx->pc = 0x489390u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 17));
    // 0x489394: 0x8f230000  lw          $v1, 0x0($t9)
    ctx->pc = 0x489394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x489398: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x489398u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x48939c: 0xa4622000  sh          $v0, 0x2000($v1)
    ctx->pc = 0x48939cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8192), (uint16_t)GPR_U32(ctx, 2));
    // 0x4893a0: 0xafd20000  sw          $s2, 0x0($fp)
    ctx->pc = 0x4893a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 18));
    // 0x4893a4: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x4893a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4893a8: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4893a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4893ac: 0xa4621c00  sh          $v0, 0x1C00($v1)
    ctx->pc = 0x4893acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 7168), (uint16_t)GPR_U32(ctx, 2));
    // 0x4893b0: 0xafd30000  sw          $s3, 0x0($fp)
    ctx->pc = 0x4893b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 19));
    // 0x4893b4: 0x8f230000  lw          $v1, 0x0($t9)
    ctx->pc = 0x4893b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x4893b8: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4893b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4893bc: 0xa4621c00  sh          $v0, 0x1C00($v1)
    ctx->pc = 0x4893bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 7168), (uint16_t)GPR_U32(ctx, 2));
    // 0x4893c0: 0xafd40000  sw          $s4, 0x0($fp)
    ctx->pc = 0x4893c0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 20));
    // 0x4893c4: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x4893c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4893c8: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4893c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4893cc: 0xa4621800  sh          $v0, 0x1800($v1)
    ctx->pc = 0x4893ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6144), (uint16_t)GPR_U32(ctx, 2));
    // 0x4893d0: 0xafd50000  sw          $s5, 0x0($fp)
    ctx->pc = 0x4893d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 21));
    // 0x4893d4: 0x8f230000  lw          $v1, 0x0($t9)
    ctx->pc = 0x4893d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x4893d8: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x4893d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4893dc: 0xa4621800  sh          $v0, 0x1800($v1)
    ctx->pc = 0x4893dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6144), (uint16_t)GPR_U32(ctx, 2));
    // 0x4893e0: 0xafc60000  sw          $a2, 0x0($fp)
    ctx->pc = 0x4893e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 6));
    // 0x4893e4: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x4893e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4893e8: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4893e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4893ec: 0xa4621400  sh          $v0, 0x1400($v1)
    ctx->pc = 0x4893ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5120), (uint16_t)GPR_U32(ctx, 2));
    // 0x4893f0: 0xafd60000  sw          $s6, 0x0($fp)
    ctx->pc = 0x4893f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 22));
    // 0x4893f4: 0x8f230000  lw          $v1, 0x0($t9)
    ctx->pc = 0x4893f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x4893f8: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x4893f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4893fc: 0xa4621400  sh          $v0, 0x1400($v1)
    ctx->pc = 0x4893fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5120), (uint16_t)GPR_U32(ctx, 2));
    // 0x489400: 0xafd80000  sw          $t8, 0x0($fp)
    ctx->pc = 0x489400u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 24));
    // 0x489404: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x489404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x489408: 0x97020000  lhu         $v0, 0x0($t8)
    ctx->pc = 0x489408u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x48940c: 0xa4621000  sh          $v0, 0x1000($v1)
    ctx->pc = 0x48940cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4096), (uint16_t)GPR_U32(ctx, 2));
    // 0x489410: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x489410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x489414: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x489414u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x489418: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x489418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48941c: 0x8f230000  lw          $v1, 0x0($t9)
    ctx->pc = 0x48941cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x489420: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x489420u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x489424: 0xa4621000  sh          $v0, 0x1000($v1)
    ctx->pc = 0x489424u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4096), (uint16_t)GPR_U32(ctx, 2));
    // 0x489428: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x489428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x48942c: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x48942cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x489430: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x489430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x489434: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x489434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x489438: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x489438u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x48943c: 0xa4620c00  sh          $v0, 0xC00($v1)
    ctx->pc = 0x48943cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 3072), (uint16_t)GPR_U32(ctx, 2));
    // 0x489440: 0xafc70000  sw          $a3, 0x0($fp)
    ctx->pc = 0x489440u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 7));
    // 0x489444: 0x8f230000  lw          $v1, 0x0($t9)
    ctx->pc = 0x489444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x489448: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x489448u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x48944c: 0xa4620c00  sh          $v0, 0xC00($v1)
    ctx->pc = 0x48944cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 3072), (uint16_t)GPR_U32(ctx, 2));
    // 0x489450: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x489450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x489454: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x489454u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x489458: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x489458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48945c: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x48945cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x489460: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x489460u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x489464: 0xa4620800  sh          $v0, 0x800($v1)
    ctx->pc = 0x489464u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2048), (uint16_t)GPR_U32(ctx, 2));
    // 0x489468: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x489468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x48946c: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x48946cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x489470: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x489470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x489474: 0x8f230000  lw          $v1, 0x0($t9)
    ctx->pc = 0x489474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x489478: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x489478u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x48947c: 0xa4620800  sh          $v0, 0x800($v1)
    ctx->pc = 0x48947cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2048), (uint16_t)GPR_U32(ctx, 2));
    // 0x489480: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x489480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x489484: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x489484u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x489488: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x489488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48948c: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x48948cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x489490: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x489490u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x489494: 0xa4620400  sh          $v0, 0x400($v1)
    ctx->pc = 0x489494u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1024), (uint16_t)GPR_U32(ctx, 2));
    // 0x489498: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x489498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x48949c: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x48949cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x4894a0: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x4894a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x4894a4: 0x8f230000  lw          $v1, 0x0($t9)
    ctx->pc = 0x4894a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x4894a8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4894a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4894ac: 0xa4620400  sh          $v0, 0x400($v1)
    ctx->pc = 0x4894acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1024), (uint16_t)GPR_U32(ctx, 2));
    // 0x4894b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x4894b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4894b4: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x4894b4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x4894b8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x4894b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4894bc: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x4894bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4894c0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4894c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4894c4: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4894c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4894c8: 0xafc80000  sw          $t0, 0x0($fp)
    ctx->pc = 0x4894c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 8));
    // 0x4894cc: 0x8f230000  lw          $v1, 0x0($t9)
    ctx->pc = 0x4894ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x4894d0: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4894d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4894d4: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4894d4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4894d8: 0x3c03007c  lui         $v1, 0x7C
    ctx->pc = 0x4894d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)124 << 16));
    // 0x4894dc: 0xafc50000  sw          $a1, 0x0($fp)
    ctx->pc = 0x4894dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 5));
    // 0x4894e0: 0x24635b08  addiu       $v1, $v1, 0x5B08
    ctx->pc = 0x4894e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23304));
    // 0x4894e4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4894e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4894e8: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x4894e8u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x7C5B08u));
    // 0x4894ec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4894ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7C5B08u));
    // 0x4894f0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4894f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4894f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4894f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4894f8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4894f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4894fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4894fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x489500: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x489500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x489504: 0x3c02007c  lui         $v0, 0x7C
    ctx->pc = 0x489504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)124 << 16));
    // 0x489508: 0x24425b08  addiu       $v0, $v0, 0x5B08
    ctx->pc = 0x489508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23304));
    // 0x48950c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x48950cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7C5B08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7C5B08u, _value); } while (0);
    // 0x489510: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x489510u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489514: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x489514u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x7C5B08u));
    // 0x489518: 0x443ff1f  bgezl       $v0, . + 4 + (-0xE1 << 2)
    ctx->pc = 0x489518u;
    {
        const bool branch_taken_0x489518 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x489518) {
            ctx->pc = 0x48951Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x489518u;
            // 0x48951c: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x489198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_489198;
        }
    }
    ctx->pc = 0x489520u;
label_489520:
    // 0x489520: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x489520u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x489524: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x489524u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x489528: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x489528u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48952c: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x48952cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x489530: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x489530u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x489534: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x489534u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x489538: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x489538u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x48953c: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x48953cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x489540: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x489540u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x489544: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x489544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x489548: 0x3e00008  jr          $ra
    ctx->pc = 0x489548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489548u;
        // 0x48954c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x489548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x489550u;
}
