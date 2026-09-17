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

// Function: sub_002450E0
// Address: 0x2450e0 - 0x245238
void sub_002450E0_0x2450e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002450E0_0x2450e0");
#endif

    switch (ctx->pc) {
        case 0x24510cu: goto label_24510c;
        case 0x245130u: goto label_245130;
        case 0x245144u: goto label_245144;
        case 0x245170u: goto label_245170;
        default: break;
    }

    ctx->pc = 0x2450e0u;

    // 0x2450e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2450e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2450e4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2450e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2450e8: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2450e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2450ec: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2450ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2450f0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2450f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2450f4: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2450f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x2450f8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2450f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2450fc: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x2450fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x245100: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x245100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x245104: 0xc090d76  jal         func_2435D8
    ctx->pc = 0x245104u;
    SET_GPR_U32(ctx, 31, 0x24510Cu);
    ctx->pc = 0x245108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245104u;
    // 0x245108: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2435D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2435D8u, 0x245104u, 0x24510Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24510Cu;
label_24510c:
    // 0x24510c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24510cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245110: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x245110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x245114: 0x24426690  addiu       $v0, $v0, 0x6690
    ctx->pc = 0x245114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26256));
    // 0x245118: 0x8c430120  lw          $v1, 0x120($v0)
    ctx->pc = 0x245118u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1667B0u));
    // 0x24511c: 0x1860003d  blez        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x24511Cu;
    {
        const bool branch_taken_0x24511c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x245120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24511Cu;
        // 0x245120: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24511c) {
            ctx->pc = 0x245214u;
            goto label_245214;
        }
    }
    ctx->pc = 0x245124u;
    // 0x245124: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x245124u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245128: 0x27b4000c  addiu       $s4, $sp, 0xC
    ctx->pc = 0x245128u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x24512c: 0x27b30008  addiu       $s3, $sp, 0x8
    ctx->pc = 0x24512cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_245130:
    // 0x245130: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x245130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245134: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x245134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245138: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x245138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24513c: 0xc091220  jal         func_244880
    ctx->pc = 0x24513Cu;
    SET_GPR_U32(ctx, 31, 0x245144u);
    ctx->pc = 0x245140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24513Cu;
    // 0x245140: 0x26300090  addiu       $s0, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244880u, 0x24513Cu, 0x245144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245144u;
label_245144:
    // 0x245144: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x245144u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245148: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x245148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x24514c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x24514cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245150: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x245150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245154: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x245154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245158: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x245158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24515c: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x24515cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x245160: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x245160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x245164: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x245164u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x245168: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x245168u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x24516c: 0xe6030008  swc1        $f3, 0x8($s0)
    ctx->pc = 0x24516cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_245170:
    // 0x245170: 0xa2880  sll         $a1, $t2, 2
    ctx->pc = 0x245170u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x245174: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x245174u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x245178: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x245178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x24517c: 0x25260010  addiu       $a2, $t1, 0x10
    ctx->pc = 0x24517cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x245180: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x245180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x245184: 0xb31021  addu        $v0, $a1, $s3
    ctx->pc = 0x245184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x245188: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x245188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x24518c: 0x25270020  addiu       $a3, $t1, 0x20
    ctx->pc = 0x24518cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x245190: 0xc483000c  lwc1        $f3, 0xC($a0)
    ctx->pc = 0x245190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x245194: 0x3a54021  addu        $t0, $sp, $a1
    ctx->pc = 0x245194u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x245198: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x245198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24519c: 0x29450003  slti        $a1, $t2, 0x3
    ctx->pc = 0x24519cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2451a0: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2451a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2451a4: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2451a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2451a8: 0xe4c3000c  swc1        $f3, 0xC($a2)
    ctx->pc = 0x2451a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x2451ac: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x2451acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2451b0: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x2451b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x2451b4: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x2451b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x2451b8: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2451b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2451bc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2451bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2451c0: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2451c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2451c4: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x2451c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2451c8: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x2451c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x2451cc: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x2451ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x2451d0: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x2451d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x2451d4: 0xe4e30008  swc1        $f3, 0x8($a3)
    ctx->pc = 0x2451d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x2451d8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2451d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2451dc: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x2451dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2451e0: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x2451e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2451e4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2451e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2451e8: 0xb1230007  sdl         $v1, 0x7($t1)
    ctx->pc = 0x2451e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2451ec: 0xb5230000  sdr         $v1, 0x0($t1)
    ctx->pc = 0x2451ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2451f0: 0xad240008  sw          $a0, 0x8($t1)
    ctx->pc = 0x2451f0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 4));
    // 0x2451f4: 0x14a0ffde  bnez        $a1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2451F4u;
    {
        const bool branch_taken_0x2451f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2451F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2451F4u;
        // 0x2451f8: 0x25290030  addiu       $t1, $t1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2451f4) {
            ctx->pc = 0x245170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_245170;
        }
    }
    ctx->pc = 0x2451FCu;
    // 0x2451fc: 0x8ea20120  lw          $v0, 0x120($s5)
    ctx->pc = 0x2451fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 288)));
    // 0x245200: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x245200u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x245204: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x245204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x245208: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x245208u;
    {
        const bool branch_taken_0x245208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245208u;
        // 0x24520c: 0x263100a0  addiu       $s1, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245208) {
            ctx->pc = 0x245130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_245130;
        }
    }
    ctx->pc = 0x245210u;
    // 0x245210: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x245210u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_245214:
    // 0x245214: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x245214u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245218: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x245218u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24521c: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x24521cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x245220: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x245220u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x245224: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x245224u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x245228: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x245228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24522c: 0x3e00008  jr          $ra
    ctx->pc = 0x24522Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24522Cu;
        // 0x245230: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24522Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245234u;
    // 0x245234: 0x0  nop
    ctx->pc = 0x245234u;
    // NOP
    ctx->pc = 0x245238u;
}
