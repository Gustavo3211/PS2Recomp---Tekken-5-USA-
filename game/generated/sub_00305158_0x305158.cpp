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

// Function: sub_00305158
// Address: 0x305158 - 0x305320
void sub_00305158_0x305158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305158_0x305158");
#endif

    switch (ctx->pc) {
        case 0x305158u: goto label_305158;
        case 0x30515cu: goto label_30515c;
        case 0x305160u: goto label_305160;
        case 0x305164u: goto label_305164;
        case 0x305168u: goto label_305168;
        case 0x30516cu: goto label_30516c;
        case 0x305170u: goto label_305170;
        case 0x305174u: goto label_305174;
        case 0x305178u: goto label_305178;
        case 0x30517cu: goto label_30517c;
        case 0x305180u: goto label_305180;
        case 0x305184u: goto label_305184;
        case 0x305188u: goto label_305188;
        case 0x30518cu: goto label_30518c;
        case 0x305190u: goto label_305190;
        case 0x305194u: goto label_305194;
        case 0x305198u: goto label_305198;
        case 0x30519cu: goto label_30519c;
        case 0x3051a0u: goto label_3051a0;
        case 0x3051a4u: goto label_3051a4;
        case 0x3051a8u: goto label_3051a8;
        case 0x3051acu: goto label_3051ac;
        case 0x3051b0u: goto label_3051b0;
        case 0x3051b4u: goto label_3051b4;
        case 0x3051b8u: goto label_3051b8;
        case 0x3051bcu: goto label_3051bc;
        case 0x3051c0u: goto label_3051c0;
        case 0x3051c4u: goto label_3051c4;
        case 0x3051c8u: goto label_3051c8;
        case 0x3051ccu: goto label_3051cc;
        case 0x3051d0u: goto label_3051d0;
        case 0x3051d4u: goto label_3051d4;
        case 0x3051d8u: goto label_3051d8;
        case 0x3051dcu: goto label_3051dc;
        case 0x3051e0u: goto label_3051e0;
        case 0x3051e4u: goto label_3051e4;
        case 0x3051e8u: goto label_3051e8;
        case 0x3051ecu: goto label_3051ec;
        case 0x3051f0u: goto label_3051f0;
        case 0x3051f4u: goto label_3051f4;
        case 0x3051f8u: goto label_3051f8;
        case 0x3051fcu: goto label_3051fc;
        case 0x305200u: goto label_305200;
        case 0x305204u: goto label_305204;
        case 0x305208u: goto label_305208;
        case 0x30520cu: goto label_30520c;
        case 0x305210u: goto label_305210;
        case 0x305214u: goto label_305214;
        case 0x305218u: goto label_305218;
        case 0x30521cu: goto label_30521c;
        case 0x305220u: goto label_305220;
        case 0x305224u: goto label_305224;
        case 0x305228u: goto label_305228;
        case 0x30522cu: goto label_30522c;
        case 0x305230u: goto label_305230;
        case 0x305234u: goto label_305234;
        case 0x305238u: goto label_305238;
        case 0x30523cu: goto label_30523c;
        case 0x305240u: goto label_305240;
        case 0x305244u: goto label_305244;
        case 0x305248u: goto label_305248;
        case 0x30524cu: goto label_30524c;
        case 0x305250u: goto label_305250;
        case 0x305254u: goto label_305254;
        case 0x305258u: goto label_305258;
        case 0x30525cu: goto label_30525c;
        case 0x305260u: goto label_305260;
        case 0x305264u: goto label_305264;
        case 0x305268u: goto label_305268;
        case 0x30526cu: goto label_30526c;
        case 0x305270u: goto label_305270;
        case 0x305274u: goto label_305274;
        case 0x305278u: goto label_305278;
        case 0x30527cu: goto label_30527c;
        case 0x305280u: goto label_305280;
        case 0x305284u: goto label_305284;
        case 0x305288u: goto label_305288;
        case 0x30528cu: goto label_30528c;
        case 0x305290u: goto label_305290;
        case 0x305294u: goto label_305294;
        case 0x305298u: goto label_305298;
        case 0x30529cu: goto label_30529c;
        case 0x3052a0u: goto label_3052a0;
        case 0x3052a4u: goto label_3052a4;
        case 0x3052a8u: goto label_3052a8;
        case 0x3052acu: goto label_3052ac;
        case 0x3052b0u: goto label_3052b0;
        case 0x3052b4u: goto label_3052b4;
        case 0x3052b8u: goto label_3052b8;
        case 0x3052bcu: goto label_3052bc;
        case 0x3052c0u: goto label_3052c0;
        case 0x3052c4u: goto label_3052c4;
        case 0x3052c8u: goto label_3052c8;
        case 0x3052ccu: goto label_3052cc;
        case 0x3052d0u: goto label_3052d0;
        case 0x3052d4u: goto label_3052d4;
        case 0x3052d8u: goto label_3052d8;
        case 0x3052dcu: goto label_3052dc;
        case 0x3052e0u: goto label_3052e0;
        case 0x3052e4u: goto label_3052e4;
        case 0x3052e8u: goto label_3052e8;
        case 0x3052ecu: goto label_3052ec;
        case 0x3052f0u: goto label_3052f0;
        case 0x3052f4u: goto label_3052f4;
        case 0x3052f8u: goto label_3052f8;
        case 0x3052fcu: goto label_3052fc;
        case 0x305300u: goto label_305300;
        case 0x305304u: goto label_305304;
        case 0x305308u: goto label_305308;
        case 0x30530cu: goto label_30530c;
        case 0x305310u: goto label_305310;
        case 0x305314u: goto label_305314;
        case 0x305318u: goto label_305318;
        case 0x30531cu: goto label_30531c;
        default: break;
    }

    ctx->pc = 0x305158u;

label_305158:
    // 0x305158: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x305158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_30515c:
    // 0x30515c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x30515cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_305160:
    // 0x305160: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x305160u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_305164:
    // 0x305164: 0x3c0410bf  lui         $a0, 0x10BF
    ctx->pc = 0x305164u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4287 << 16));
label_305168:
    // 0x305168: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x305168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_30516c:
    // 0x30516c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x30516cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_305170:
    // 0x305170: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x305170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_305174:
    // 0x305174: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x305174u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_305178:
    // 0x305178: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x305178u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_30517c:
    // 0x30517c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x30517cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_305180:
    // 0x305180: 0xc0cb314  jal         func_32CC50
label_305184:
    if (ctx->pc == 0x305184u) {
        ctx->pc = 0x305184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305180u;
        // 0x305184: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305188u;
        goto label_305188;
    }
    ctx->pc = 0x305180u;
    SET_GPR_U32(ctx, 31, 0x305188u);
    ctx->pc = 0x305184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305180u;
    // 0x305184: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CC50u, 0x305180u, 0x305188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305188u;
label_305188:
    // 0x305188: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x305188u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_30518c:
    // 0x30518c: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x30518cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
label_305190:
    // 0x305190: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x305190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_305194:
    // 0x305194: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x305194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_305198:
    // 0x305198: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x305198u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_30519c:
    // 0x30519c: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x30519cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
label_3051a0:
    // 0x3051a0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3051a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3051a4:
    // 0x3051a4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3051a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3051a8:
    // 0x3051a8: 0x4600ac46  mov.s       $f17, $f21
    ctx->pc = 0x3051a8u;
    ctx->f[17] = FPU_MOV_S(ctx->f[21]);
label_3051ac:
    // 0x3051ac: 0xc0c689c  jal         func_31A270
label_3051b0:
    if (ctx->pc == 0x3051B0u) {
        ctx->pc = 0x3051B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3051ACu;
        // 0x3051b0: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3051B4u;
        goto label_3051b4;
    }
    ctx->pc = 0x3051ACu;
    SET_GPR_U32(ctx, 31, 0x3051B4u);
    ctx->pc = 0x3051B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3051ACu;
    // 0x3051b0: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A270u, 0x3051ACu, 0x3051B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3051B4u;
label_3051b4:
    // 0x3051b4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3051b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3051b8:
    // 0x3051b8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3051b8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3051bc:
    // 0x3051bc: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x3051bcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_3051c0:
    // 0x3051c0: 0xc0c6856  jal         func_31A158
label_3051c4:
    if (ctx->pc == 0x3051C4u) {
        ctx->pc = 0x3051C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3051C0u;
        // 0x3051c4: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3051C8u;
        goto label_3051c8;
    }
    ctx->pc = 0x3051C0u;
    SET_GPR_U32(ctx, 31, 0x3051C8u);
    ctx->pc = 0x3051C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3051C0u;
    // 0x3051c4: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A158u, 0x3051C0u, 0x3051C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3051C8u;
label_3051c8:
    // 0x3051c8: 0xc0c685e  jal         func_31A178
label_3051cc:
    if (ctx->pc == 0x3051CCu) {
        ctx->pc = 0x3051CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3051C8u;
        // 0x3051cc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3051D0u;
        goto label_3051d0;
    }
    ctx->pc = 0x3051C8u;
    SET_GPR_U32(ctx, 31, 0x3051D0u);
    ctx->pc = 0x3051CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3051C8u;
    // 0x3051cc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A178u, 0x3051C8u, 0x3051D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3051D0u;
label_3051d0:
    // 0x3051d0: 0xc0c6866  jal         func_31A198
label_3051d4:
    if (ctx->pc == 0x3051D4u) {
        ctx->pc = 0x3051D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3051D0u;
        // 0x3051d4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3051D8u;
        goto label_3051d8;
    }
    ctx->pc = 0x3051D0u;
    SET_GPR_U32(ctx, 31, 0x3051D8u);
    ctx->pc = 0x3051D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3051D0u;
    // 0x3051d4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A198u, 0x3051D0u, 0x3051D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3051D8u;
label_3051d8:
    // 0x3051d8: 0xc62d00d0  lwc1        $f13, 0xD0($s1)
    ctx->pc = 0x3051d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3051dc:
    // 0x3051dc: 0xc62f00d4  lwc1        $f15, 0xD4($s1)
    ctx->pc = 0x3051dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_3051e0:
    // 0x3051e0: 0x46006b07  neg.s       $f12, $f13
    ctx->pc = 0x3051e0u;
    ctx->f[12] = FPU_NEG_S(ctx->f[13]);
label_3051e4:
    // 0x3051e4: 0xc63000d8  lwc1        $f16, 0xD8($s1)
    ctx->pc = 0x3051e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_3051e8:
    // 0x3051e8: 0x46007b87  neg.s       $f14, $f15
    ctx->pc = 0x3051e8u;
    ctx->f[14] = FPU_NEG_S(ctx->f[15]);
label_3051ec:
    // 0x3051ec: 0xc08c638  jal         func_2318E0
label_3051f0:
    if (ctx->pc == 0x3051F0u) {
        ctx->pc = 0x3051F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3051ECu;
        // 0x3051f0: 0xc63100dc  lwc1        $f17, 0xDC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3051F4u;
        goto label_3051f4;
    }
    ctx->pc = 0x3051ECu;
    SET_GPR_U32(ctx, 31, 0x3051F4u);
    ctx->pc = 0x3051F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3051ECu;
    // 0x3051f0: 0xc63100dc  lwc1        $f17, 0xDC($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2318E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2318E0u, 0x3051ECu, 0x3051F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3051F4u;
label_3051f4:
    // 0x3051f4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3051f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_3051f8:
    // 0x3051f8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x3051f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3051fc:
    // 0x3051fc: 0x244624e0  addiu       $a2, $v0, 0x24E0
    ctx->pc = 0x3051fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 9440));
label_305200:
    // 0x305200: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x305200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_305204:
    // 0x305204: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x305204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_305208:
    // 0x305208: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x305208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_30520c:
    // 0x30520c: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x30520cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_305210:
    // 0x305210: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x305210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_305214:
    // 0x305214: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x305214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_305218:
    // 0x305218: 0xc0903e2  jal         func_240F88
label_30521c:
    if (ctx->pc == 0x30521Cu) {
        ctx->pc = 0x30521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305218u;
        // 0x30521c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305220u;
        goto label_305220;
    }
    ctx->pc = 0x305218u;
    SET_GPR_U32(ctx, 31, 0x305220u);
    ctx->pc = 0x30521Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305218u;
    // 0x30521c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240F88u, 0x305218u, 0x305220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305220u;
label_305220:
    // 0x305220: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x305220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_305224:
    // 0x305224: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x305224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_305228:
    // 0x305228: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x305228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30522c:
    // 0x30522c: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x30522cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_305230:
    // 0x305230: 0x4602101e  madda.s     $f2, $f2
    ctx->pc = 0x305230u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2])));
label_305234:
    // 0x305234: 0x4600005c  madd.s      $f1, $f0, $f0
    ctx->pc = 0x305234u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_305238:
    // 0x305238: 0x4601ad56  rsqrt.s     $f21, $f21, $f1
    ctx->pc = 0x305238u;
    ctx->f[21] = 1.0f / sqrtf(ctx->f[21]);
label_30523c:
    // 0x30523c: 0xda100000  lqc2        $vf16, 0x0($s0)
    ctx->pc = 0x30523cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_305240:
    // 0x305240: 0x4a20042c  vsub.w      $vf16, $vf0, $vf0
    ctx->pc = 0x305240u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
label_305244:
    // 0x305244: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x305244u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_305248:
    // 0x305248: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x305248u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_30524c:
    // 0x30524c: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x30524cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
label_305250:
    // 0x305250: 0xfa100000  sqc2        $vf16, 0x0($s0)
    ctx->pc = 0x305250u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[16]));
label_305254:
    // 0x305254: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x305254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_305258:
    // 0x305258: 0xc780959c  lwc1        $f0, -0x6A64($gp)
    ctx->pc = 0x305258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30525c:
    // 0x30525c: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x30525cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_305260:
    // 0x305260: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x305260u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_305264:
    // 0x305264: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x305264u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_305268:
    // 0x305268: 0x4be18418  vmulx.xyzw  $vf16, $vf16, $vf1x
    ctx->pc = 0x305268u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
label_30526c:
    // 0x30526c: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x30526cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
label_305270:
    // 0x305270: 0xc6410750  lwc1        $f1, 0x750($s2)
    ctx->pc = 0x305270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_305274:
    // 0x305274: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x305274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_305278:
    // 0x305278: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x305278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_30527c:
    // 0x30527c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x30527cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_305280:
    // 0x305280: 0x262500c4  addiu       $a1, $s1, 0xC4
    ctx->pc = 0x305280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
label_305284:
    // 0x305284: 0xe62100c4  swc1        $f1, 0xC4($s1)
    ctx->pc = 0x305284u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 196), bits); }
label_305288:
    // 0x305288: 0x262400b8  addiu       $a0, $s1, 0xB8
    ctx->pc = 0x305288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
label_30528c:
    // 0x30528c: 0xc6400754  lwc1        $f0, 0x754($s2)
    ctx->pc = 0x30528cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_305290:
    // 0x305290: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x305290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_305294:
    // 0x305294: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x305294u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_305298:
    // 0x305298: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x305298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_30529c:
    // 0x30529c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x30529cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_3052a0:
    // 0x3052a0: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x3052a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3052a4:
    // 0x3052a4: 0xe62000c8  swc1        $f0, 0xC8($s1)
    ctx->pc = 0x3052a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 200), bits); }
label_3052a8:
    // 0x3052a8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x3052a8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_3052ac:
    // 0x3052ac: 0xc6440758  lwc1        $f4, 0x758($s2)
    ctx->pc = 0x3052acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3052b0:
    // 0x3052b0: 0xe62200b8  swc1        $f2, 0xB8($s1)
    ctx->pc = 0x3052b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 184), bits); }
label_3052b4:
    // 0x3052b4: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x3052b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_3052b8:
    // 0x3052b8: 0xe62300bc  swc1        $f3, 0xBC($s1)
    ctx->pc = 0x3052b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 188), bits); }
label_3052bc:
    // 0x3052bc: 0xe62400cc  swc1        $f4, 0xCC($s1)
    ctx->pc = 0x3052bcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 204), bits); }
label_3052c0:
    // 0x3052c0: 0xc0cae76  jal         func_32B9D8
label_3052c4:
    if (ctx->pc == 0x3052C4u) {
        ctx->pc = 0x3052C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3052C0u;
        // 0x3052c4: 0xe62100c0  swc1        $f1, 0xC0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3052C8u;
        goto label_3052c8;
    }
    ctx->pc = 0x3052C0u;
    SET_GPR_U32(ctx, 31, 0x3052C8u);
    ctx->pc = 0x3052C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3052C0u;
    // 0x3052c4: 0xe62100c0  swc1        $f1, 0xC0($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B9D8u, 0x3052C0u, 0x3052C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3052C8u;
label_3052c8:
    // 0x3052c8: 0xc090f0e  jal         func_243C38
label_3052cc:
    if (ctx->pc == 0x3052CCu) {
        ctx->pc = 0x3052CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3052C8u;
        // 0x3052cc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3052D0u;
        goto label_3052d0;
    }
    ctx->pc = 0x3052C8u;
    SET_GPR_U32(ctx, 31, 0x3052D0u);
    ctx->pc = 0x3052CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3052C8u;
    // 0x3052cc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243C38u, 0x3052C8u, 0x3052D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3052D0u;
label_3052d0:
    // 0x3052d0: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x3052d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_3052d4:
    // 0x3052d4: 0x24630038  addiu       $v1, $v1, 0x38
    ctx->pc = 0x3052d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
label_3052d8:
    // 0x3052d8: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x3052d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3052dc:
    // 0x3052dc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3052dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3052e0:
    // 0x3052e0: 0x40f809  jalr        $v0
label_3052e4:
    if (ctx->pc == 0x3052E4u) {
        ctx->pc = 0x3052E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3052E0u;
        // 0x3052e4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3052E8u;
        goto label_3052e8;
    }
    ctx->pc = 0x3052E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3052E8u);
        ctx->pc = 0x3052E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3052E0u;
        // 0x3052e4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3052E0u, 0x3052E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3052E8u;
label_3052e8:
    // 0x3052e8: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x3052e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3052ec:
    // 0x3052ec: 0xc0bf09c  jal         func_2FC270
label_3052f0:
    if (ctx->pc == 0x3052F0u) {
        ctx->pc = 0x3052F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3052ECu;
        // 0x3052f0: 0x8c450048  lw          $a1, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3052F4u;
        goto label_3052f4;
    }
    ctx->pc = 0x3052ECu;
    SET_GPR_U32(ctx, 31, 0x3052F4u);
    ctx->pc = 0x3052F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3052ECu;
    // 0x3052f0: 0x8c450048  lw          $a1, 0x48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC270u, 0x3052ECu, 0x3052F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3052F4u;
label_3052f4:
    // 0x3052f4: 0xc0cb31c  jal         func_32CC70
label_3052f8:
    if (ctx->pc == 0x3052F8u) {
        ctx->pc = 0x3052FCu;
        goto label_3052fc;
    }
    ctx->pc = 0x3052F4u;
    SET_GPR_U32(ctx, 31, 0x3052FCu);
    ctx->pc = 0x32CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CC70u, 0x3052F4u, 0x3052FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3052FCu;
label_3052fc:
    // 0x3052fc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3052fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_305300:
    // 0x305300: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x305300u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_305304:
    // 0x305304: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x305304u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_305308:
    // 0x305308: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x305308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_30530c:
    // 0x30530c: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x30530cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_305310:
    // 0x305310: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x305310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_305314:
    // 0x305314: 0x3e00008  jr          $ra
label_305318:
    if (ctx->pc == 0x305318u) {
        ctx->pc = 0x305318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305314u;
        // 0x305318: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30531Cu;
        goto label_30531c;
    }
    ctx->pc = 0x305314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305314u;
        // 0x305318: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30531Cu;
label_30531c:
    // 0x30531c: 0x0  nop
    ctx->pc = 0x30531cu;
    // NOP
    ctx->pc = 0x305320u;
}
