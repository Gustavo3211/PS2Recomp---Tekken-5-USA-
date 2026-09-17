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

// Function: sub_0031D210
// Address: 0x31d210 - 0x31d3a0
void sub_0031D210_0x31d210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D210_0x31d210");
#endif

    switch (ctx->pc) {
        case 0x31d2ccu: goto label_31d2cc;
        case 0x31d2e4u: goto label_31d2e4;
        case 0x31d310u: goto label_31d310;
        case 0x31d328u: goto label_31d328;
        case 0x31d348u: goto label_31d348;
        case 0x31d360u: goto label_31d360;
        default: break;
    }

    ctx->pc = 0x31d210u;

    // 0x31d210: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31d210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31d214: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x31d214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x31d218: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x31d218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31d21c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31d21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x31d220: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31d220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d224: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x31d224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x31d228: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x31d228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x31d22c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x31d22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x31d230: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x31d230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x31d234: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31d234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31d238: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x31d238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x31d23c: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x31d23cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x31d240: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x31d240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31d244: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x31d244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31d248: 0x94e30006  lhu         $v1, 0x6($a3)
    ctx->pc = 0x31d248u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x31d24c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31d24cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31d250: 0x94c20008  lhu         $v0, 0x8($a2)
    ctx->pc = 0x31d250u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x31d254: 0x39182  srl         $s2, $v1, 6
    ctx->pc = 0x31d254u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x31d258: 0x94e40008  lhu         $a0, 0x8($a3)
    ctx->pc = 0x31d258u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x31d25c: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x31d25cu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31d260: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x31d260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x31d264: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x31d264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x31d268: 0x4a100  sll         $s4, $a0, 4
    ctx->pc = 0x31d268u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x31d26c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x31d26cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31d270: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x31d270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x31d274: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x31d274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x31d278: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31d278u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31d27c: 0x44130800  mfc1        $s3, $f1
    ctx->pc = 0x31d27cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x31d280: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x31D280u;
    {
        const bool branch_taken_0x31d280 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31D284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D280u;
        // 0x31d284: 0x22102  srl         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d280) {
            ctx->pc = 0x31D29Cu;
            goto label_31d29c;
        }
    }
    ctx->pc = 0x31D288u;
    // 0x31d288: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x31d288u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x31d28c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x31d28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x31d290: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31d290u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31d294: 0x44130800  mfc1        $s3, $f1
    ctx->pc = 0x31d294u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x31d298: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x31d298u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_31d29c:
    // 0x31d29c: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x31d29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x31d2a0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x31d2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x31d2a4: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x31d2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x31d2a8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x31d2a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x31d2ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31d2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31d2b0: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x31d2b0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x31d2b4: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x31d2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x31d2b8: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x31d2b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x31d2bc: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x31d2bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d2c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31d2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d2c4: 0xc0c74e8  jal         func_31D3A0
    ctx->pc = 0x31D2C4u;
    SET_GPR_U32(ctx, 31, 0x31D2CCu);
    ctx->pc = 0x31D2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D2C4u;
    // 0x31d2c8: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D3A0u, 0x31D2C4u, 0x31D2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D2CCu;
label_31d2cc:
    // 0x31d2cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31d2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d2d0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x31d2d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d2d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31d2d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d2d8: 0x24070116  addiu       $a3, $zero, 0x116
    ctx->pc = 0x31d2d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x31d2dc: 0xc0c7508  jal         func_31D420
    ctx->pc = 0x31D2DCu;
    SET_GPR_U32(ctx, 31, 0x31D2E4u);
    ctx->pc = 0x31D2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D2DCu;
    // 0x31d2e0: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D420u, 0x31D2DCu, 0x31D2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D2E4u;
label_31d2e4:
    // 0x31d2e4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x31d2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x31d2e8: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x31d2e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d2ec: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x31d2ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d2f0: 0x3800b  movn        $s0, $zero, $v1
    ctx->pc = 0x31d2f0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x31d2f4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x31d2f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d2f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x31d2f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d2fc: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x31d2fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x31d300: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31d300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d304: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31d304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d308: 0xc0c737a  jal         func_31CDE8
    ctx->pc = 0x31D308u;
    SET_GPR_U32(ctx, 31, 0x31D310u);
    ctx->pc = 0x31D30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D308u;
    // 0x31d30c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CDE8u, 0x31D308u, 0x31D310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D310u;
label_31d310:
    // 0x31d310: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31d310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d314: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x31d314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d318: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31d318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d31c: 0x24070156  addiu       $a3, $zero, 0x156
    ctx->pc = 0x31d31cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    // 0x31d320: 0xc0c7508  jal         func_31D420
    ctx->pc = 0x31D320u;
    SET_GPR_U32(ctx, 31, 0x31D328u);
    ctx->pc = 0x31D324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D320u;
    // 0x31d324: 0x24080055  addiu       $t0, $zero, 0x55 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D420u, 0x31D320u, 0x31D328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D328u;
label_31d328:
    // 0x31d328: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31d328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d32c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x31d32cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d330: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x31d330u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d334: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x31d334u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d338: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x31d338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d33c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31d33cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d340: 0xc0c737a  jal         func_31CDE8
    ctx->pc = 0x31D340u;
    SET_GPR_U32(ctx, 31, 0x31D348u);
    ctx->pc = 0x31D344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D340u;
    // 0x31d344: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CDE8u, 0x31D340u, 0x31D348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D348u;
label_31d348:
    // 0x31d348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31d348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d34c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x31d34cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d350: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31d350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d354: 0x24070156  addiu       $a3, $zero, 0x156
    ctx->pc = 0x31d354u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    // 0x31d358: 0xc0c7508  jal         func_31D420
    ctx->pc = 0x31D358u;
    SET_GPR_U32(ctx, 31, 0x31D360u);
    ctx->pc = 0x31D35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D358u;
    // 0x31d35c: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D420u, 0x31D358u, 0x31D360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D360u;
label_31d360:
    // 0x31d360: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31d360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d364: 0x2133021  addu        $a2, $s0, $s3
    ctx->pc = 0x31d364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x31d368: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31d368u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31d36c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x31d36cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d370: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x31d370u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31d374: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x31d374u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d378: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x31d378u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31d37c: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x31d37cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d380: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x31d380u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31d384: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31d384u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31d388: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31d388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d38c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x31d38cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31d390: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31d390u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d394: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x31d394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31d398: 0x80c737a  j           func_31CDE8
    ctx->pc = 0x31D398u;
    ctx->pc = 0x31D39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D398u;
    // 0x31d39c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CDE8u;
    sub_0031CDE8_0x31cde8(rdram, ctx, runtime); return;
    ctx->pc = 0x31D3A0u;
}
