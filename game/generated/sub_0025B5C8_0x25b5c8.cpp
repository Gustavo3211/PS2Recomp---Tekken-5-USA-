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

// Function: sub_0025B5C8
// Address: 0x25b5c8 - 0x25b7d0
void sub_0025B5C8_0x25b5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B5C8_0x25b5c8");
#endif

    switch (ctx->pc) {
        case 0x25b634u: goto label_25b634;
        case 0x25b660u: goto label_25b660;
        case 0x25b688u: goto label_25b688;
        case 0x25b6f8u: goto label_25b6f8;
        case 0x25b754u: goto label_25b754;
        case 0x25b778u: goto label_25b778;
        default: break;
    }

    ctx->pc = 0x25b5c8u;

    // 0x25b5c8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x25b5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x25b5cc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x25b5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x25b5d0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x25b5d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b5d4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x25b5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x25b5d8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x25b5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x25b5dc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25b5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25b5e0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x25b5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x25b5e4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x25b5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x25b5e8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x25b5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x25b5ec: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x25b5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x25b5f0: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x25b5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x25b5f4: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x25b5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x25b5f8: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x25b5f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x25b5fc: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x25b5fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x25b600: 0x12a00057  beqz        $s5, . + 4 + (0x57 << 2)
    ctx->pc = 0x25B600u;
    {
        const bool branch_taken_0x25b600 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B600u;
        // 0x25b604: 0xaf95aa30  sw          $s5, -0x55D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945328), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b600) {
            ctx->pc = 0x25B760u;
            goto label_25b760;
        }
    }
    ctx->pc = 0x25B608u;
    // 0x25b608: 0x240508d0  addiu       $a1, $zero, 0x8D0
    ctx->pc = 0x25b608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2256));
    // 0x25b60c: 0x3c100015  lui         $s0, 0x15
    ctx->pc = 0x25b60cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)21 << 16));
    // 0x25b610: 0x2a50018  mult        $zero, $s5, $a1
    ctx->pc = 0x25b610u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x25b614: 0x261032a8  addiu       $s0, $s0, 0x32A8
    ctx->pc = 0x25b614u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12968));
    // 0x25b618: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x25b618u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x25b61c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x25b61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25b620: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x25b620u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x25b624: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x25b624u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b628: 0x2812  mflo        $a1
    ctx->pc = 0x25b628u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x25b62c: 0xc089248  jal         func_224920
    ctx->pc = 0x25B62Cu;
    SET_GPR_U32(ctx, 31, 0x25B634u);
    ctx->pc = 0x25B630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B62Cu;
    // 0x25b630: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224920u, 0x25B62Cu, 0x25B634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B634u;
label_25b634:
    // 0x25b634: 0x152900  sll         $a1, $s5, 4
    ctx->pc = 0x25b634u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x25b638: 0xb52821  addu        $a1, $a1, $s5
    ctx->pc = 0x25b638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x25b63c: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x25b63cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x25b640: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x25b640u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x25b644: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x25b644u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b648: 0xb52821  addu        $a1, $a1, $s5
    ctx->pc = 0x25b648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x25b64c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x25b64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25b650: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x25b650u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x25b654: 0x34c60002  ori         $a2, $a2, 0x2
    ctx->pc = 0x25b654u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
    // 0x25b658: 0xc089248  jal         func_224920
    ctx->pc = 0x25B658u;
    SET_GPR_U32(ctx, 31, 0x25B660u);
    ctx->pc = 0x25B65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B658u;
    // 0x25b65c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224920u, 0x25B658u, 0x25B660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B660u;
label_25b660:
    // 0x25b660: 0x12a0003f  beqz        $s5, . + 4 + (0x3F << 2)
    ctx->pc = 0x25B660u;
    {
        const bool branch_taken_0x25b660 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B660u;
        // 0x25b664: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b660) {
            ctx->pc = 0x25B760u;
            goto label_25b760;
        }
    }
    ctx->pc = 0x25B668u;
    // 0x25b668: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x25b668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x25b66c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x25b66cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25b670: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25b670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25b674: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x25b674u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x25b678: 0x245788d8  addiu       $s7, $v0, -0x7728
    ctx->pc = 0x25b678u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936792));
    // 0x25b67c: 0x241607d0  addiu       $s6, $zero, 0x7D0
    ctx->pc = 0x25b67cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x25b680: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25b680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b684: 0x0  nop
    ctx->pc = 0x25b684u;
    // NOP
label_25b688:
    // 0x25b688: 0x148100  sll         $s0, $s4, 4
    ctx->pc = 0x25b688u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x25b68c: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x25b68cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x25b690: 0x149080  sll         $s2, $s4, 2
    ctx->pc = 0x25b690u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x25b694: 0x600013  mtlo        $v1
    ctx->pc = 0x25b694u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x25b698: 0x240308d0  addiu       $v1, $zero, 0x8D0
    ctx->pc = 0x25b698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2256));
    // 0x25b69c: 0x72831000  madd        $v0, $s4, $v1
    ctx->pc = 0x25b69cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25b6a0: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x25b6a0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x25b6a4: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x25b6a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x25b6a8: 0x2579821  addu        $s3, $s2, $s7
    ctx->pc = 0x25b6a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
    // 0x25b6ac: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x25b6acu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x25b6b0: 0x3d08021  addu        $s0, $fp, $s0
    ctx->pc = 0x25b6b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
    // 0x25b6b4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x25b6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x25b6b8: 0xac50089c  sw          $s0, 0x89C($v0)
    ctx->pc = 0x25b6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2204), GPR_U32(ctx, 16));
    // 0x25b6bc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x25b6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x25b6c0: 0x8c71089c  lw          $s1, 0x89C($v1)
    ctx->pc = 0x25b6c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2204)));
    // 0x25b6c4: 0x26220840  addiu       $v0, $s1, 0x840
    ctx->pc = 0x25b6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2112));
    // 0x25b6c8: 0x26310830  addiu       $s1, $s1, 0x830
    ctx->pc = 0x25b6c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2096));
    // 0x25b6cc: 0xae230048  sw          $v1, 0x48($s1)
    ctx->pc = 0x25b6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
    // 0x25b6d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25b6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25b6d4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x25b6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x25b6d8: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x25b6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
    // 0x25b6dc: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x25b6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
    // 0x25b6e0: 0xe455000c  swc1        $f21, 0xC($v0)
    ctx->pc = 0x25b6e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x25b6e4: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x25b6e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25b6e8: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x25b6e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x25b6ec: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x25b6ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x25b6f0: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x25B6F0u;
    SET_GPR_U32(ctx, 31, 0x25B6F8u);
    ctx->pc = 0x25B6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B6F0u;
    // 0x25b6f4: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x25B6F0u, 0x25B6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B6F8u;
label_25b6f8:
    // 0x25b6f8: 0x260507a0  addiu       $a1, $s0, 0x7A0
    ctx->pc = 0x25b6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1952));
    // 0x25b6fc: 0x56001a  div         $zero, $v0, $s6
    ctx->pc = 0x25b6fcu;
    { int32_t divisor = GPR_S32(ctx, 22);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x25b700: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x25b700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x25b704: 0x244288d0  addiu       $v0, $v0, -0x7730
    ctx->pc = 0x25b704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x25b708: 0x26060630  addiu       $a2, $s0, 0x630
    ctx->pc = 0x25b708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1584));
    // 0x25b70c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x25b70cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x25b710: 0x260704c0  addiu       $a3, $s0, 0x4C0
    ctx->pc = 0x25b710u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1216));
    // 0x25b714: 0x26840002  addiu       $a0, $s4, 0x2
    ctx->pc = 0x25b714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x25b718: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x25b718u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x25b71c: 0x1810  mfhi        $v1
    ctx->pc = 0x25b71cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x25b720: 0x246303e8  addiu       $v1, $v1, 0x3E8
    ctx->pc = 0x25b720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1000));
    // 0x25b724: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25b724u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b728: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25b728u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25b72c: 0xe6200054  swc1        $f0, 0x54($s1)
    ctx->pc = 0x25b72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x25b730: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x25b730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x25b734: 0xac450898  sw          $a1, 0x898($v0)
    ctx->pc = 0x25b734u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2200), GPR_U32(ctx, 5));
    // 0x25b738: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x25b738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x25b73c: 0x8c620898  lw          $v0, 0x898($v1)
    ctx->pc = 0x25b73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2200)));
    // 0x25b740: 0xac460044  sw          $a2, 0x44($v0)
    ctx->pc = 0x25b740u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 6));
    // 0x25b744: 0xac470040  sw          $a3, 0x40($v0)
    ctx->pc = 0x25b744u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 7));
    // 0x25b748: 0xa440006c  sh          $zero, 0x6C($v0)
    ctx->pc = 0x25b748u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 108), (uint16_t)GPR_U32(ctx, 0));
    // 0x25b74c: 0xc096d62  jal         func_25B588
    ctx->pc = 0x25B74Cu;
    SET_GPR_U32(ctx, 31, 0x25B754u);
    ctx->pc = 0x25B750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B74Cu;
    // 0x25b750: 0xac500048  sw          $s0, 0x48($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B588u, 0x25B74Cu, 0x25B754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B754u;
label_25b754:
    // 0x25b754: 0x295102b  sltu        $v0, $s4, $s5
    ctx->pc = 0x25b754u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x25b758: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x25B758u;
    {
        const bool branch_taken_0x25b758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B758u;
        // 0x25b75c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b758) {
            ctx->pc = 0x25B688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25b688;
        }
    }
    ctx->pc = 0x25B760u;
label_25b760:
    // 0x25b760: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x25b760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b764: 0x2c82007e  sltiu       $v0, $a0, 0x7E
    ctx->pc = 0x25b764u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)126) ? 1 : 0);
    // 0x25b768: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x25B768u;
    {
        const bool branch_taken_0x25b768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b768) {
            ctx->pc = 0x25B76Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B768u;
            // 0x25b76c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B798u;
            goto label_25b798;
        }
    }
    ctx->pc = 0x25B770u;
    // 0x25b770: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x25b770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x25b774: 0x244588d0  addiu       $a1, $v0, -0x7730
    ctx->pc = 0x25b774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
label_25b778:
    // 0x25b778: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x25b778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25b77c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x25b77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x25b780: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x25b780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x25b784: 0x2c83007e  sltiu       $v1, $a0, 0x7E
    ctx->pc = 0x25b784u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)126) ? 1 : 0);
    // 0x25b788: 0x0  nop
    ctx->pc = 0x25b788u;
    // NOP
    // 0x25b78c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x25B78Cu;
    {
        const bool branch_taken_0x25b78c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B78Cu;
        // 0x25b790: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b78c) {
            ctx->pc = 0x25B778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25b778;
        }
    }
    ctx->pc = 0x25B794u;
    // 0x25b794: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x25b794u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25b798:
    // 0x25b798: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x25b798u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25b79c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25b79cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b7a0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x25b7a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25b7a4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x25b7a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25b7a8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x25b7a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x25b7ac: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x25b7acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25b7b0: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x25b7b0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x25b7b4: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x25b7b4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25b7b8: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x25b7b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x25b7bc: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x25b7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25b7c0: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x25b7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25b7c4: 0x3e00008  jr          $ra
    ctx->pc = 0x25B7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B7C4u;
        // 0x25b7c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B7C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B7CCu;
    // 0x25b7cc: 0x0  nop
    ctx->pc = 0x25b7ccu;
    // NOP
    ctx->pc = 0x25b7d0u;
}
