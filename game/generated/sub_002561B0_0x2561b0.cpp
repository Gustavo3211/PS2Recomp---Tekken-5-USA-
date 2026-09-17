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

// Function: sub_002561B0
// Address: 0x2561b0 - 0x2562f0
void sub_002561B0_0x2561b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002561B0_0x2561b0");
#endif

    switch (ctx->pc) {
        case 0x256210u: goto label_256210;
        case 0x256278u: goto label_256278;
        case 0x2562d4u: goto label_2562d4;
        default: break;
    }

    ctx->pc = 0x2561b0u;

    // 0x2561b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2561b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2561b4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2561b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2561b8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2561b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2561bc: 0x2785ca00  addiu       $a1, $gp, -0x3600
    ctx->pc = 0x2561bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953472));
    // 0x2561c0: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2561c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2561c4: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2561c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2561c8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2561c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2561cc: 0x94c4003c  lhu         $a0, 0x3C($a2)
    ctx->pc = 0x2561ccu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x2561d0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2561d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2561d4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2561d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2561d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2561d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2561dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2561dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2561e0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2561e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2561e4: 0x94c3003c  lhu         $v1, 0x3C($a2)
    ctx->pc = 0x2561e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x2561e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2561e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2561ec: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2561ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2561f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2561f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2561f4: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x2561f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x2561f8: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2561F8u;
    {
        const bool branch_taken_0x2561f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2561FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2561F8u;
        // 0x2561fc: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2561f8) {
            ctx->pc = 0x2562D8u;
            goto label_2562d8;
        }
    }
    ctx->pc = 0x256200u;
    // 0x256200: 0x8cc20894  lw          $v0, 0x894($a2)
    ctx->pc = 0x256200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2196)));
    // 0x256204: 0x2410000d  addiu       $s0, $zero, 0xD
    ctx->pc = 0x256204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x256208: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x256208u;
    SET_GPR_U32(ctx, 31, 0x256210u);
    ctx->pc = 0x25620Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256208u;
    // 0x25620c: 0x8c52001c  lw          $s2, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x256208u, 0x256210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256210u;
label_256210:
    // 0x256210: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x256210u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x256214: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x256214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x256218: 0x2451fda0  addiu       $s1, $v0, -0x260
    ctx->pc = 0x256218u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966688));
    // 0x25621c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25621cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256220: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x256220u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256224: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x256224u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x256228: 0x1810  mfhi        $v1
    ctx->pc = 0x256228u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x25622c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x25622cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x256230: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x256230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x256234: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x256234u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x256238: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x256238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x25623c: 0x2112821  addu        $a1, $s0, $s1
    ctx->pc = 0x25623cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x256240: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x256240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x256244: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x256244u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256248: 0x4610009  bgez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x256248u;
    {
        const bool branch_taken_0x256248 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x25624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256248u;
        // 0x25624c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256248) {
            ctx->pc = 0x256270u;
            goto label_256270;
        }
    }
    ctx->pc = 0x256250u;
    // 0x256250: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x256250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x256254: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x256254u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x256258: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x256258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25625c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x25625cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x256260: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x256260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x256264: 0x78620070  lq          $v0, 0x70($v1)
    ctx->pc = 0x256264u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x256268: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x256268u;
    {
        const bool branch_taken_0x256268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256268u;
        // 0x25626c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256268) {
            ctx->pc = 0x256290u;
            goto label_256290;
        }
    }
    ctx->pc = 0x256270u;
label_256270:
    // 0x256270: 0xc095824  jal         func_256090
    ctx->pc = 0x256270u;
    SET_GPR_U32(ctx, 31, 0x256278u);
    ctx->pc = 0x256274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256270u;
    // 0x256274: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256090u, 0x256270u, 0x256278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256278u;
label_256278:
    // 0x256278: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x256278u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25627c: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x25627cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x256280: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x256280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256284: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x256284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256288: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x256288u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25628c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x25628cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_256290:
    // 0x256290: 0x11200010  beqz        $t1, . + 4 + (0x10 << 2)
    ctx->pc = 0x256290u;
    {
        const bool branch_taken_0x256290 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x256294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256290u;
        // 0x256294: 0xc7a30000  lwc1        $f3, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x256290) {
            ctx->pc = 0x2562D4u;
            goto label_2562d4;
        }
    }
    ctx->pc = 0x256298u;
    // 0x256298: 0x2404005d  addiu       $a0, $zero, 0x5D
    ctx->pc = 0x256298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x25629c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x25629cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2562a0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2562a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2562a4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2562a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2562a8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2562a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2562ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2562acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2562b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2562b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2562b4: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2562b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x2562b8: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x2562b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x2562bc: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2562bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x2562c0: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x2562c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2562c4: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2562c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2562c8: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2562c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2562cc: 0xc094e68  jal         func_2539A0
    ctx->pc = 0x2562CCu;
    SET_GPR_U32(ctx, 31, 0x2562D4u);
    ctx->pc = 0x2562D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2562CCu;
    // 0x2562d0: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2539A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539A0u, 0x2562CCu, 0x2562D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2562D4u;
label_2562d4:
    // 0x2562d4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2562d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2562d8:
    // 0x2562d8: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2562d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2562dc: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2562dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2562e0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2562e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2562e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2562E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2562E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2562E4u;
        // 0x2562e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2562E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2562ECu;
    // 0x2562ec: 0x0  nop
    ctx->pc = 0x2562ecu;
    // NOP
    ctx->pc = 0x2562f0u;
}
