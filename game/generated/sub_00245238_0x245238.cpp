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

// Function: sub_00245238
// Address: 0x245238 - 0x2453b8
void sub_00245238_0x245238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245238_0x245238");
#endif

    switch (ctx->pc) {
        case 0x245294u: goto label_245294;
        case 0x2452a0u: goto label_2452a0;
        case 0x2452bcu: goto label_2452bc;
        case 0x245300u: goto label_245300;
        default: break;
    }

    ctx->pc = 0x245238u;

    // 0x245238: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x245238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24523c: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x24523cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x245240: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x245240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x245244: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x245244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245248: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x245248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24524c: 0x24426690  addiu       $v0, $v0, 0x6690
    ctx->pc = 0x24524cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26256));
    // 0x245250: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x245250u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x245254: 0x245201ac  addiu       $s2, $v0, 0x1AC
    ctx->pc = 0x245254u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 428));
    // 0x245258: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x245258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24525c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x24525cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x245260: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x245260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x245264: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x245264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x245268: 0x8c51011c  lw          $s1, 0x11C($v0)
    ctx->pc = 0x245268u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x1667ACu));
    // 0x24526c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24526cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x245270: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x245270u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x245274: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x245274u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245278: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x245278u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24527c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x24527cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x245280: 0x0  nop
    ctx->pc = 0x245280u;
    // NOP
    // 0x245284: 0x0  nop
    ctx->pc = 0x245284u;
    // NOP
    // 0x245288: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x245288u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
    // 0x24528c: 0xc09125c  jal         func_244970
    ctx->pc = 0x24528Cu;
    SET_GPR_U32(ctx, 31, 0x245294u);
    ctx->pc = 0x245290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24528Cu;
    // 0x245290: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244970u, 0x24528Cu, 0x245294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245294u;
label_245294:
    // 0x245294: 0x5a20000d  blezl       $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x245294u;
    {
        const bool branch_taken_0x245294 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x245294) {
            ctx->pc = 0x245298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245294u;
            // 0x245298: 0xc6420084  lwc1        $f2, 0x84($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2452CCu;
            goto label_2452cc;
        }
    }
    ctx->pc = 0x24529Cu;
    // 0x24529c: 0x0  nop
    ctx->pc = 0x24529cu;
    // NOP
label_2452a0:
    // 0x2452a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2452a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2452a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2452a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2452a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2452a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2452ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2452acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2452b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2452b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2452b4: 0xc091282  jal         func_244A08
    ctx->pc = 0x2452B4u;
    SET_GPR_U32(ctx, 31, 0x2452BCu);
    ctx->pc = 0x2452B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2452B4u;
    // 0x2452b8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A08u, 0x2452B4u, 0x2452BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2452BCu;
label_2452bc:
    // 0x2452bc: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2452bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2452c0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2452C0u;
    {
        const bool branch_taken_0x2452c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2452c0) {
            ctx->pc = 0x2452A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2452a0;
        }
    }
    ctx->pc = 0x2452C8u;
    // 0x2452c8: 0xc6420084  lwc1        $f2, 0x84($s2)
    ctx->pc = 0x2452c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2452cc:
    // 0x2452cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2452ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2452d0: 0xc6410088  lwc1        $f1, 0x88($s2)
    ctx->pc = 0x2452d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2452d4: 0x264a0004  addiu       $t2, $s2, 0x4
    ctx->pc = 0x2452d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2452d8: 0xc640008c  lwc1        $f0, 0x8C($s2)
    ctx->pc = 0x2452d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2452dc: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x2452dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2452e0: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2452e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2452e4: 0x26490008  addiu       $t1, $s2, 0x8
    ctx->pc = 0x2452e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2452e8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2452e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2452ec: 0x264b000c  addiu       $t3, $s2, 0xC
    ctx->pc = 0x2452ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x2452f0: 0xe6420084  swc1        $f2, 0x84($s2)
    ctx->pc = 0x2452f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 132), bits); }
    // 0x2452f4: 0xe6410088  swc1        $f1, 0x88($s2)
    ctx->pc = 0x2452f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 136), bits); }
    // 0x2452f8: 0xe640008c  swc1        $f0, 0x8C($s2)
    ctx->pc = 0x2452f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 140), bits); }
    // 0x2452fc: 0x0  nop
    ctx->pc = 0x2452fcu;
    // NOP
label_245300:
    // 0x245300: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x245300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x245304: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x245304u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x245308: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x245308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x24530c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x24530cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x245310: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x245310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x245314: 0x24850020  addiu       $a1, $a0, 0x20
    ctx->pc = 0x245314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x245318: 0x1223021  addu        $a2, $t1, $v0
    ctx->pc = 0x245318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x24531c: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x24531cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x245320: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x245320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x245324: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x245324u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x245328: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x245328u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x24532c: 0x1251021  addu        $v0, $t1, $a1
    ctx->pc = 0x24532cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x245330: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x245330u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x245334: 0x1451821  addu        $v1, $t2, $a1
    ctx->pc = 0x245334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x245338: 0x1652821  addu        $a1, $t3, $a1
    ctx->pc = 0x245338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x24533c: 0x24840050  addiu       $a0, $a0, 0x50
    ctx->pc = 0x24533cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x245340: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x245340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245344: 0x1443021  addu        $a2, $t2, $a0
    ctx->pc = 0x245344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x245348: 0x1243821  addu        $a3, $t1, $a0
    ctx->pc = 0x245348u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x24534c: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x24534cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x245350: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x245350u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x245354: 0x2a080003  slti        $t0, $s0, 0x3
    ctx->pc = 0x245354u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x245358: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x245358u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x24535c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x24535cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245360: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x245360u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x245364: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x245364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x245368: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x245368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24536c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x24536cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x245370: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x245370u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x245374: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x245374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245378: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x245378u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x24537c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x24537cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x245380: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x245380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245384: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x245384u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x245388: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x245388u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x24538c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x24538cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245390: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x245390u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x245394: 0x1500ffda  bnez        $t0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x245394u;
    {
        const bool branch_taken_0x245394 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x245398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245394u;
        // 0x245398: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x245394) {
            ctx->pc = 0x245300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_245300;
        }
    }
    ctx->pc = 0x24539Cu;
    // 0x24539c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24539cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2453a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2453a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2453a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2453a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2453a8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2453a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2453ac: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2453acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2453b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2453B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2453B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2453B0u;
        // 0x2453b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2453B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2453B8u;
}
