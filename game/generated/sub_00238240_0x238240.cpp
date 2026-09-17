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

// Function: sub_00238240
// Address: 0x238240 - 0x2383a4
void sub_00238240_0x238240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238240_0x238240");
#endif

    switch (ctx->pc) {
        case 0x23825cu: goto label_23825c;
        case 0x238264u: goto label_238264;
        case 0x23826cu: goto label_23826c;
        case 0x238298u: goto label_238298;
        default: break;
    }

    ctx->pc = 0x238240u;

    // 0x238240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x238240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x238244: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x238248: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x238248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23824c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23824cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x238250: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x238250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x238254: 0xc07daf0  jal         func_1F6BC0
    ctx->pc = 0x238254u;
    SET_GPR_U32(ctx, 31, 0x23825Cu);
    ctx->pc = 0x238258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238254u;
    // 0x238258: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6BC0u, 0x238254u, 0x23825Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23825Cu;
label_23825c:
    // 0x23825c: 0xc08cbf6  jal         func_232FD8
    ctx->pc = 0x23825Cu;
    SET_GPR_U32(ctx, 31, 0x238264u);
    ctx->pc = 0x238260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23825Cu;
    // 0x238260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232FD8u, 0x23825Cu, 0x238264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238264u;
label_238264:
    // 0x238264: 0xc08c686  jal         func_231A18
    ctx->pc = 0x238264u;
    SET_GPR_U32(ctx, 31, 0x23826Cu);
    ctx->pc = 0x231A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A18u, 0x238264u, 0x23826Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23826Cu;
label_23826c:
    // 0x23826c: 0x2e220025  sltiu       $v0, $s1, 0x25
    ctx->pc = 0x23826cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
    // 0x238270: 0x5040004d  beql        $v0, $zero, . + 4 + (0x4D << 2)
    ctx->pc = 0x238270u;
    {
        const bool branch_taken_0x238270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238270) {
            ctx->pc = 0x238274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238270u;
            // 0x238274: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2383A8u;
            return;
        }
    }
    ctx->pc = 0x238278u;
    // 0x238278: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x238278u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x23827c: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x23827cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x238280: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x238280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x238284: 0x8c639c00  lw          $v1, -0x6400($v1)
    ctx->pc = 0x238284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941696)));
    // 0x238288: 0x600008  jr          $v1
    ctx->pc = 0x238288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238290u: goto label_238290;
            case 0x2382BCu: goto label_2382bc;
            case 0x238328u: goto label_238328;
            case 0x238338u: goto label_238338;
            case 0x238348u: goto label_238348;
            case 0x238358u: goto label_238358;
            case 0x238370u: goto label_238370;
            case 0x238380u: goto label_238380;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238288u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x238290u;
label_238290:
    // 0x238290: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x238290u;
    SET_GPR_U32(ctx, 31, 0x238298u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x238290u, 0x238298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238298u;
label_238298:
    // 0x238298: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x238298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x23829c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23829cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2382a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2382a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2382a4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2382a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2382a8: 0xc78286e0  lwc1        $f2, -0x7920($gp)
    ctx->pc = 0x2382a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2382ac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2382acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2382b0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2382b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2382b4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2382b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2382b8: 0xe780a5a8  swc1        $f0, -0x5A58($gp)
    ctx->pc = 0x2382b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294944168), bits); }
label_2382bc:
    // 0x2382bc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2382bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2382c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2382c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2382c4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2382c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2382c8: 0x8f84a5a8  lw          $a0, -0x5A58($gp)
    ctx->pc = 0x2382c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944168)));
    // 0x2382cc: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2382CCu;
    {
        const bool branch_taken_0x2382cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2382D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2382CCu;
        // 0x2382d0: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2382cc) {
            ctx->pc = 0x238308u;
            goto label_238308;
        }
    }
    ctx->pc = 0x2382D4u;
    // 0x2382d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2382D4u;
    {
        const bool branch_taken_0x2382d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2382D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2382D4u;
        // 0x2382d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2382d4) {
            ctx->pc = 0x2382F0u;
            goto label_2382f0;
        }
    }
    ctx->pc = 0x2382DCu;
    // 0x2382dc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2382DCu;
    {
        const bool branch_taken_0x2382dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2382E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2382DCu;
        // 0x2382e0: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2382dc) {
            ctx->pc = 0x238300u;
            goto label_238300;
        }
    }
    ctx->pc = 0x2382E4u;
    // 0x2382e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2382E4u;
    {
        const bool branch_taken_0x2382e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2382E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2382E4u;
        // 0x2382e8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2382e4) {
            ctx->pc = 0x238318u;
            goto label_238318;
        }
    }
    ctx->pc = 0x2382ECu;
    // 0x2382ec: 0x0  nop
    ctx->pc = 0x2382ecu;
    // NOP
label_2382f0:
    // 0x2382f0: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2382F0u;
    {
        const bool branch_taken_0x2382f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2382F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2382F0u;
        // 0x2382f4: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2382f0) {
            ctx->pc = 0x238308u;
            goto label_238308;
        }
    }
    ctx->pc = 0x2382F8u;
    // 0x2382f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2382F8u;
    {
        const bool branch_taken_0x2382f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2382FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2382F8u;
        // 0x2382fc: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2382f8) {
            ctx->pc = 0x238318u;
            goto label_238318;
        }
    }
    ctx->pc = 0x238300u;
label_238300:
    // 0x238300: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x238300u;
    {
        const bool branch_taken_0x238300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238300u;
        // 0x238304: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238300) {
            ctx->pc = 0x23830Cu;
            goto label_23830c;
        }
    }
    ctx->pc = 0x238308u;
label_238308:
    // 0x238308: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x238308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
label_23830c:
    // 0x23830c: 0x8f84a5a8  lw          $a0, -0x5A58($gp)
    ctx->pc = 0x23830cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944168)));
    // 0x238310: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x238310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x238314: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x238314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_238318:
    // 0x238318: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x238318u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x23831c: 0x2010  mfhi        $a0
    ctx->pc = 0x23831cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x238320: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x238320u;
    {
        const bool branch_taken_0x238320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238320u;
        // 0x238324: 0xaf84a5a8  sw          $a0, -0x5A58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294944168), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238320) {
            ctx->pc = 0x2383A4u;
            return;
        }
    }
    ctx->pc = 0x238328u;
label_238328:
    // 0x238328: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x238328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23832c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x23832Cu;
    {
        const bool branch_taken_0x23832c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23832Cu;
        // 0x238330: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23832c) {
            ctx->pc = 0x238360u;
            goto label_238360;
        }
    }
    ctx->pc = 0x238334u;
    // 0x238334: 0x0  nop
    ctx->pc = 0x238334u;
    // NOP
label_238338:
    // 0x238338: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x238338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23833c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23833Cu;
    {
        const bool branch_taken_0x23833c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23833Cu;
        // 0x238340: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23833c) {
            ctx->pc = 0x238360u;
            goto label_238360;
        }
    }
    ctx->pc = 0x238344u;
    // 0x238344: 0x0  nop
    ctx->pc = 0x238344u;
    // NOP
label_238348:
    // 0x238348: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x238348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23834c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23834Cu;
    {
        const bool branch_taken_0x23834c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23834Cu;
        // 0x238350: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23834c) {
            ctx->pc = 0x238360u;
            goto label_238360;
        }
    }
    ctx->pc = 0x238354u;
    // 0x238354: 0x0  nop
    ctx->pc = 0x238354u;
    // NOP
label_238358:
    // 0x238358: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x238358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23835c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x23835cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_238360:
    // 0x238360: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x238360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x238364: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x238364u;
    {
        const bool branch_taken_0x238364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238364u;
        // 0x238368: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238364) {
            ctx->pc = 0x2383A4u;
            return;
        }
    }
    ctx->pc = 0x23836Cu;
    // 0x23836c: 0x0  nop
    ctx->pc = 0x23836cu;
    // NOP
label_238370:
    // 0x238370: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x238370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x238374: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x238374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x238378: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x238378u;
    {
        const bool branch_taken_0x238378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238378u;
        // 0x23837c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238378) {
            ctx->pc = 0x2383A4u;
            return;
        }
    }
    ctx->pc = 0x238380u;
label_238380:
    // 0x238380: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x238380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x238384: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x238384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x238388: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x238388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x23838c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23838cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238390: 0x908283ed  lbu         $v0, -0x7C13($a0)
    ctx->pc = 0x238390u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3A83EDu));
    // 0x238394: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x238394u;
    {
        const bool branch_taken_0x238394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x238398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238394u;
        // 0x238398: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238394) {
            ctx->pc = 0x2383A0u;
            goto label_2383a0;
        }
    }
    ctx->pc = 0x23839Cu;
    // 0x23839c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x23839cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2383a0:
    // 0x2383a0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2383a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x2383a4u;
}
