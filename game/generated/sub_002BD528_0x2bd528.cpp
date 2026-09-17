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

// Function: sub_002BD528
// Address: 0x2bd528 - 0x2bd7d8
void sub_002BD528_0x2bd528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD528_0x2bd528");
#endif

    switch (ctx->pc) {
        case 0x2bd57cu: goto label_2bd57c;
        case 0x2bd584u: goto label_2bd584;
        case 0x2bd58cu: goto label_2bd58c;
        case 0x2bd5b0u: goto label_2bd5b0;
        case 0x2bd5b8u: goto label_2bd5b8;
        case 0x2bd5e4u: goto label_2bd5e4;
        case 0x2bd5f4u: goto label_2bd5f4;
        case 0x2bd610u: goto label_2bd610;
        case 0x2bd620u: goto label_2bd620;
        case 0x2bd630u: goto label_2bd630;
        case 0x2bd640u: goto label_2bd640;
        case 0x2bd650u: goto label_2bd650;
        case 0x2bd664u: goto label_2bd664;
        case 0x2bd678u: goto label_2bd678;
        case 0x2bd698u: goto label_2bd698;
        case 0x2bd6acu: goto label_2bd6ac;
        case 0x2bd6e4u: goto label_2bd6e4;
        case 0x2bd6ecu: goto label_2bd6ec;
        case 0x2bd700u: goto label_2bd700;
        case 0x2bd73cu: goto label_2bd73c;
        case 0x2bd74cu: goto label_2bd74c;
        case 0x2bd754u: goto label_2bd754;
        case 0x2bd764u: goto label_2bd764;
        case 0x2bd784u: goto label_2bd784;
        case 0x2bd79cu: goto label_2bd79c;
        case 0x2bd7a4u: goto label_2bd7a4;
        default: break;
    }

    ctx->pc = 0x2bd528u;

    // 0x2bd528: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2bd528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2bd52c: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x2bd52cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x2bd530: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2bd530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2bd534: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2bd534u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd538: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2bd538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2bd53c: 0x24a579f0  addiu       $a1, $a1, 0x79F0
    ctx->pc = 0x2bd53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31216));
    // 0x2bd540: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x2bd540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x2bd544: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2bd544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2bd548: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x2bd548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x2bd54c: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x2bd54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x2bd550: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x2bd550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x2bd554: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x2bd554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x2bd558: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x2bd558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x2bd55c: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x2bd55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x2bd560: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x2bd560u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2bd564: 0x8e820894  lw          $v0, 0x894($s4)
    ctx->pc = 0x2bd564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2196)));
    // 0x2bd568: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x2bd568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x2bd56c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2bd56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2bd570: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2bd570u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd574: 0xc0af232  jal         func_2BC8C8
    ctx->pc = 0x2BD574u;
    SET_GPR_U32(ctx, 31, 0x2BD57Cu);
    ctx->pc = 0x2BD578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD574u;
    // 0x2bd578: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC8C8u, 0x2BD574u, 0x2BD57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD57Cu;
label_2bd57c:
    // 0x2bd57c: 0xc097868  jal         func_25E1A0
    ctx->pc = 0x2BD57Cu;
    SET_GPR_U32(ctx, 31, 0x2BD584u);
    ctx->pc = 0x2BD580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD57Cu;
    // 0x2bd580: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E1A0u, 0x2BD57Cu, 0x2BD584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD584u;
label_2bd584:
    // 0x2bd584: 0xc097a52  jal         func_25E948
    ctx->pc = 0x2BD584u;
    SET_GPR_U32(ctx, 31, 0x2BD58Cu);
    ctx->pc = 0x2BD588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD584u;
    // 0x2bd588: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E948u, 0x2BD584u, 0x2BD58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD58Cu;
label_2bd58c:
    // 0x2bd58c: 0x8e8207c8  lw          $v0, 0x7C8($s4)
    ctx->pc = 0x2bd58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1992)));
    // 0x2bd590: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2BD590u;
    {
        const bool branch_taken_0x2bd590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD590u;
        // 0x2bd594: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd590) {
            ctx->pc = 0x2BD670u;
            goto label_2bd670;
        }
    }
    ctx->pc = 0x2BD598u;
    // 0x2bd598: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2bd598u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bd59c: 0xc69407f0  lwc1        $f20, 0x7F0($s4)
    ctx->pc = 0x2bd59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bd5a0: 0x27be0010  addiu       $fp, $sp, 0x10
    ctx->pc = 0x2bd5a0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bd5a4: 0x24530090  addiu       $s3, $v0, 0x90
    ctx->pc = 0x2bd5a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x2bd5a8: 0x27b60040  addiu       $s6, $sp, 0x40
    ctx->pc = 0x2bd5a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2bd5ac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2bd5acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bd5b0:
    // 0x2bd5b0: 0x17a880  sll         $s5, $s7, 2
    ctx->pc = 0x2bd5b0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x2bd5b4: 0x0  nop
    ctx->pc = 0x2bd5b4u;
    // NOP
label_2bd5b8:
    // 0x2bd5b8: 0x8e820894  lw          $v0, 0x894($s4)
    ctx->pc = 0x2bd5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2196)));
    // 0x2bd5bc: 0x128900  sll         $s1, $s2, 4
    ctx->pc = 0x2bd5bcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2bd5c0: 0x2b22821  addu        $a1, $s5, $s2
    ctx->pc = 0x2bd5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x2bd5c4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2bd5c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2bd5c8: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x2bd5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2bd5cc: 0x3b18021  addu        $s0, $sp, $s1
    ctx->pc = 0x2bd5ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 17)));
    // 0x2bd5d0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2bd5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2bd5d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bd5d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2bd5d8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2bd5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2bd5dc: 0xc0847ac  jal         func_211EB0
    ctx->pc = 0x2BD5DCu;
    SET_GPR_U32(ctx, 31, 0x2BD5E4u);
    ctx->pc = 0x2BD5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD5DCu;
    // 0x2bd5e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211EB0u, 0x2BD5DCu, 0x2BD5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD5E4u;
label_2bd5e4:
    // 0x2bd5e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bd5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd5e8: 0x2713021  addu        $a2, $s3, $s1
    ctx->pc = 0x2bd5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x2bd5ec: 0xc084774  jal         func_211DD0
    ctx->pc = 0x2BD5ECu;
    SET_GPR_U32(ctx, 31, 0x2BD5F4u);
    ctx->pc = 0x2BD5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD5ECu;
    // 0x2bd5f0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DD0u, 0x2BD5ECu, 0x2BD5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD5F4u;
label_2bd5f4:
    // 0x2bd5f4: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x2bd5f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2bd5f8: 0x23d8821  addu        $s1, $s1, $sp
    ctx->pc = 0x2bd5f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x2bd5fc: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2BD5FCu;
    {
        const bool branch_taken_0x2bd5fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD5FCu;
        // 0x2bd600: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd5fc) {
            ctx->pc = 0x2BD5B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bd5b8;
        }
    }
    ctx->pc = 0x2BD604u;
    // 0x2bd604: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bd604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd608: 0xc0847da  jal         func_211F68
    ctx->pc = 0x2BD608u;
    SET_GPR_U32(ctx, 31, 0x2BD610u);
    ctx->pc = 0x2BD60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD608u;
    // 0x2bd60c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211F68u, 0x2BD608u, 0x2BD610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD610u;
label_2bd610:
    // 0x2bd610: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2bd610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd614: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2bd614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd618: 0xc084814  jal         func_212050
    ctx->pc = 0x2BD618u;
    SET_GPR_U32(ctx, 31, 0x2BD620u);
    ctx->pc = 0x2BD61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD618u;
    // 0x2bd61c: 0x26700010  addiu       $s0, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x2BD618u, 0x2BD620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD620u;
label_2bd620:
    // 0x2bd620: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2bd620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd624: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2bd624u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2bd628: 0xc0847a4  jal         func_211E90
    ctx->pc = 0x2BD628u;
    SET_GPR_U32(ctx, 31, 0x2BD630u);
    ctx->pc = 0x2BD62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD628u;
    // 0x2bd62c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E90u, 0x2BD628u, 0x2BD630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD630u;
label_2bd630:
    // 0x2bd630: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2bd630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd634: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2bd634u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd638: 0xc084784  jal         func_211E10
    ctx->pc = 0x2BD638u;
    SET_GPR_U32(ctx, 31, 0x2BD640u);
    ctx->pc = 0x2BD63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD638u;
    // 0x2bd63c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x2BD638u, 0x2BD640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD640u;
label_2bd640:
    // 0x2bd640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bd640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd644: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2bd644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd648: 0xc0847da  jal         func_211F68
    ctx->pc = 0x2BD648u;
    SET_GPR_U32(ctx, 31, 0x2BD650u);
    ctx->pc = 0x2BD64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD648u;
    // 0x2bd64c: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211F68u, 0x2BD648u, 0x2BD650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD650u;
label_2bd650:
    // 0x2bd650: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x2bd650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x2bd654: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2bd654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd658: 0x26730090  addiu       $s3, $s3, 0x90
    ctx->pc = 0x2bd658u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x2bd65c: 0xc08480c  jal         func_212030
    ctx->pc = 0x2BD65Cu;
    SET_GPR_U32(ctx, 31, 0x2BD664u);
    ctx->pc = 0x2BD660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD65Cu;
    // 0x2bd660: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212030u, 0x2BD65Cu, 0x2BD664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD664u;
label_2bd664:
    // 0x2bd664: 0x2ae20016  slti        $v0, $s7, 0x16
    ctx->pc = 0x2bd664u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x2bd668: 0x5440ffd1  bnel        $v0, $zero, . + 4 + (-0x2F << 2)
    ctx->pc = 0x2BD668u;
    {
        const bool branch_taken_0x2bd668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd668) {
            ctx->pc = 0x2BD66Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD668u;
            // 0x2bd66c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD5B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bd5b0;
        }
    }
    ctx->pc = 0x2BD670u;
label_2bd670:
    // 0x2bd670: 0xc07e232  jal         func_1F88C8
    ctx->pc = 0x2BD670u;
    SET_GPR_U32(ctx, 31, 0x2BD678u);
    ctx->pc = 0x1F88C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F88C8u, 0x2BD670u, 0x2BD678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD678u;
label_2bd678:
    // 0x2bd678: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2BD678u;
    {
        const bool branch_taken_0x2bd678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd678) {
            ctx->pc = 0x2BD67Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD678u;
            // 0x2bd67c: 0x8e8307c8  lw          $v1, 0x7C8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1992)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD6B8u;
            goto label_2bd6b8;
        }
    }
    ctx->pc = 0x2BD680u;
    // 0x2bd680: 0x8e820894  lw          $v0, 0x894($s4)
    ctx->pc = 0x2bd680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2196)));
    // 0x2bd684: 0x24120016  addiu       $s2, $zero, 0x16
    ctx->pc = 0x2bd684u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2bd688: 0x8fb10054  lw          $s1, 0x54($sp)
    ctx->pc = 0x2bd688u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2bd68c: 0x8c500038  lw          $s0, 0x38($v0)
    ctx->pc = 0x2bd68cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x2bd690: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bd690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd694: 0x0  nop
    ctx->pc = 0x2bd694u;
    // NOP
label_2bd698:
    // 0x2bd698: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x2bd698u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2bd69c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bd69cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd6a0: 0x26310090  addiu       $s1, $s1, 0x90
    ctx->pc = 0x2bd6a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x2bd6a4: 0xc0849ae  jal         func_2126B8
    ctx->pc = 0x2BD6A4u;
    SET_GPR_U32(ctx, 31, 0x2BD6ACu);
    ctx->pc = 0x2BD6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD6A4u;
    // 0x2bd6a8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2126B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2126B8u, 0x2BD6A4u, 0x2BD6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD6ACu;
label_2bd6ac:
    // 0x2bd6ac: 0x1e40fffa  bgtz        $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BD6ACu;
    {
        const bool branch_taken_0x2bd6ac = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x2BD6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD6ACu;
        // 0x2bd6b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd6ac) {
            ctx->pc = 0x2BD698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bd698;
        }
    }
    ctx->pc = 0x2BD6B4u;
    // 0x2bd6b4: 0x8e8307c8  lw          $v1, 0x7C8($s4)
    ctx->pc = 0x2bd6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1992)));
label_2bd6b8:
    // 0x2bd6b8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2bd6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2bd6bc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BD6BCu;
    {
        const bool branch_taken_0x2bd6bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BD6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD6BCu;
        // 0x2bd6c0: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd6bc) {
            ctx->pc = 0x2BD6CCu;
            goto label_2bd6cc;
        }
    }
    ctx->pc = 0x2BD6C4u;
    // 0x2bd6c4: 0xc68007f0  lwc1        $f0, 0x7F0($s4)
    ctx->pc = 0x2bd6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd6c8: 0xe68007f4  swc1        $f0, 0x7F4($s4)
    ctx->pc = 0x2bd6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 2036), bits); }
label_2bd6cc:
    // 0x2bd6cc: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x2bd6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935488)));
    // 0x2bd6d0: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x2bd6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
    // 0x2bd6d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BD6D4u;
    {
        const bool branch_taken_0x2bd6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd6d4) {
            ctx->pc = 0x2BD6E4u;
            goto label_2bd6e4;
        }
    }
    ctx->pc = 0x2BD6DCu;
    // 0x2bd6dc: 0xc09fde2  jal         func_27F788
    ctx->pc = 0x2BD6DCu;
    SET_GPR_U32(ctx, 31, 0x2BD6E4u);
    ctx->pc = 0x2BD6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD6DCu;
    // 0x2bd6e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F788u, 0x2BD6DCu, 0x2BD6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD6E4u;
label_2bd6e4:
    // 0x2bd6e4: 0xc0b2a94  jal         func_2CAA50
    ctx->pc = 0x2BD6E4u;
    SET_GPR_U32(ctx, 31, 0x2BD6ECu);
    ctx->pc = 0x2BD6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD6E4u;
    // 0x2bd6e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAA50u, 0x2BD6E4u, 0x2BD6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD6ECu;
label_2bd6ec:
    // 0x2bd6ec: 0x8e820894  lw          $v0, 0x894($s4)
    ctx->pc = 0x2bd6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2196)));
    // 0x2bd6f0: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x2bd6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2bd6f4: 0x8c45001c  lw          $a1, 0x1C($v0)
    ctx->pc = 0x2bd6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2bd6f8: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x2bd6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2bd6fc: 0x0  nop
    ctx->pc = 0x2bd6fcu;
    // NOP
label_2bd700:
    // 0x2bd700: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x2bd700u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bd704: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2bd704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2bd708: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x2bd708u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x2bd70c: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x2bd70cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2bd710: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x2bd710u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x2bd714: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x2bd714u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2bd718: 0x24a50090  addiu       $a1, $a1, 0x90
    ctx->pc = 0x2bd718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
    // 0x2bd71c: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x2bd71cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x2bd720: 0x1cc0fff7  bgtz        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2BD720u;
    {
        const bool branch_taken_0x2bd720 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x2BD724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD720u;
        // 0x2bd724: 0x24840090  addiu       $a0, $a0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd720) {
            ctx->pc = 0x2BD700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bd700;
        }
    }
    ctx->pc = 0x2BD728u;
    // 0x2bd728: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2bd728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bd72c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2bd72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bd730: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bd730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd734: 0xc0b0058  jal         func_2C0160
    ctx->pc = 0x2BD734u;
    SET_GPR_U32(ctx, 31, 0x2BD73Cu);
    ctx->pc = 0x2BD738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD734u;
    // 0x2bd738: 0x8c460020  lw          $a2, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0160u, 0x2BD734u, 0x2BD73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD73Cu;
label_2bd73c:
    // 0x2bd73c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bd73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd740: 0x8fa60054  lw          $a2, 0x54($sp)
    ctx->pc = 0x2bd740u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2bd744: 0xc0b0058  jal         func_2C0160
    ctx->pc = 0x2BD744u;
    SET_GPR_U32(ctx, 31, 0x2BD74Cu);
    ctx->pc = 0x2BD748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD744u;
    // 0x2bd748: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0160u, 0x2BD744u, 0x2BD74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD74Cu;
label_2bd74c:
    // 0x2bd74c: 0xc07e232  jal         func_1F88C8
    ctx->pc = 0x2BD74Cu;
    SET_GPR_U32(ctx, 31, 0x2BD754u);
    ctx->pc = 0x1F88C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F88C8u, 0x2BD74Cu, 0x2BD754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD754u;
label_2bd754:
    // 0x2bd754: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BD754u;
    {
        const bool branch_taken_0x2bd754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd754) {
            ctx->pc = 0x2BD758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD754u;
            // 0x2bd758: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD768u;
            goto label_2bd768;
        }
    }
    ctx->pc = 0x2BD75Cu;
    // 0x2bd75c: 0xc081cb6  jal         func_2072D8
    ctx->pc = 0x2BD75Cu;
    SET_GPR_U32(ctx, 31, 0x2BD764u);
    ctx->pc = 0x2BD760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD75Cu;
    // 0x2bd760: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2072D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2072D8u, 0x2BD75Cu, 0x2BD764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD764u;
label_2bd764:
    // 0x2bd764: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2bd764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2bd768:
    // 0x2bd768: 0x244223b0  addiu       $v0, $v0, 0x23B0
    ctx->pc = 0x2bd768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9136));
    // 0x2bd76c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2bd76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2bd770: 0x24420058  addiu       $v0, $v0, 0x58
    ctx->pc = 0x2bd770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x2bd774: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BD774u;
    {
        const bool branch_taken_0x2bd774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bd774) {
            ctx->pc = 0x2BD778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD774u;
            // 0x2bd778: 0x86830040  lh          $v1, 0x40($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD788u;
            goto label_2bd788;
        }
    }
    ctx->pc = 0x2BD77Cu;
    // 0x2bd77c: 0xc09883a  jal         func_2620E8
    ctx->pc = 0x2BD77Cu;
    SET_GPR_U32(ctx, 31, 0x2BD784u);
    ctx->pc = 0x2BD780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD77Cu;
    // 0x2bd780: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2620E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2620E8u, 0x2BD77Cu, 0x2BD784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD784u;
label_2bd784:
    // 0x2bd784: 0x86830040  lh          $v1, 0x40($s4)
    ctx->pc = 0x2bd784u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 64)));
label_2bd788:
    // 0x2bd788: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x2bd788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2bd78c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BD78Cu;
    {
        const bool branch_taken_0x2bd78c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bd78c) {
            ctx->pc = 0x2BD79Cu;
            goto label_2bd79c;
        }
    }
    ctx->pc = 0x2BD794u;
    // 0x2bd794: 0xc0af46c  jal         func_2BD1B0
    ctx->pc = 0x2BD794u;
    SET_GPR_U32(ctx, 31, 0x2BD79Cu);
    ctx->pc = 0x2BD798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD794u;
    // 0x2bd798: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BD1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD1B0u, 0x2BD794u, 0x2BD79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD79Cu;
label_2bd79c:
    // 0x2bd79c: 0xc0af4e2  jal         func_2BD388
    ctx->pc = 0x2BD79Cu;
    SET_GPR_U32(ctx, 31, 0x2BD7A4u);
    ctx->pc = 0x2BD7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD79Cu;
    // 0x2bd7a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BD388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD388u, 0x2BD79Cu, 0x2BD7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD7A4u;
label_2bd7a4:
    // 0x2bd7a4: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2bd7a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bd7a8: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x2bd7a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2bd7ac: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2bd7acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bd7b0: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x2bd7b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2bd7b4: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x2bd7b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2bd7b8: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x2bd7b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2bd7bc: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x2bd7bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2bd7c0: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x2bd7c0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2bd7c4: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x2bd7c4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2bd7c8: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x2bd7c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2bd7cc: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2bd7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bd7d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD7D0u;
        // 0x2bd7d4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD7D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD7D8u;
}
