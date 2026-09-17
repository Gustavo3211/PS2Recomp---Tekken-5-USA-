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

// Function: sub_002C51C8
// Address: 0x2c51c8 - 0x2c55a8
void sub_002C51C8_0x2c51c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C51C8_0x2c51c8");
#endif

    switch (ctx->pc) {
        case 0x2c5260u: goto label_2c5260;
        case 0x2c53a4u: goto label_2c53a4;
        case 0x2c53bcu: goto label_2c53bc;
        case 0x2c53d0u: goto label_2c53d0;
        case 0x2c53e0u: goto label_2c53e0;
        case 0x2c54c0u: goto label_2c54c0;
        case 0x2c555cu: goto label_2c555c;
        case 0x2c5570u: goto label_2c5570;
        default: break;
    }

    ctx->pc = 0x2c51c8u;

    // 0x2c51c8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2c51c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2c51cc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2c51ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c51d0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2c51d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2c51d4: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2c51d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2c51d8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2c51d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2c51dc: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2c51dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x2c51e0: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2c51e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2c51e4: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x2c51e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x2c51e8: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2c51e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2c51ec: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x2c51ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x2c51f0: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2c51f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2c51f4: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x2c51f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x2c51f8: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2c51f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2c51fc: 0x8cc30898  lw          $v1, 0x898($a2)
    ctx->pc = 0x2c51fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2200)));
    // 0x2c5200: 0x9465006c  lhu         $a1, 0x6C($v1)
    ctx->pc = 0x2c5200u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x2c5204: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x2c5204u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2c5208: 0x104000d9  beqz        $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x2C5208u;
    {
        const bool branch_taken_0x2c5208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5208u;
        // 0x2c520c: 0x8f90cb08  lw          $s0, -0x34F8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953736)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5208) {
            ctx->pc = 0x2C5570u;
            goto label_2c5570;
        }
    }
    ctx->pc = 0x2C5210u;
    // 0x2c5210: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2c5210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2c5214: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2c5214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2c5218: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c5218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c521c: 0x8c63e220  lw          $v1, -0x1DE0($v1)
    ctx->pc = 0x2c521cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959648)));
    // 0x2c5220: 0x600008  jr          $v1
    ctx->pc = 0x2C5220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C5228u: goto label_2c5228;
            case 0x2C5230u: goto label_2c5230;
            case 0x2C5238u: goto label_2c5238;
            case 0x2C5240u: goto label_2c5240;
            case 0x2C5248u: goto label_2c5248;
            case 0x2C5570u: goto label_2c5570;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5220u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C5228u;
label_2c5228:
    // 0x2c5228: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C5228u;
    {
        const bool branch_taken_0x2c5228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C522Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5228u;
        // 0x2c522c: 0x24090016  addiu       $t1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5228) {
            ctx->pc = 0x2C524Cu;
            goto label_2c524c;
        }
    }
    ctx->pc = 0x2C5230u;
label_2c5230:
    // 0x2c5230: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C5230u;
    {
        const bool branch_taken_0x2c5230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5230u;
        // 0x2c5234: 0x24090011  addiu       $t1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5230) {
            ctx->pc = 0x2C524Cu;
            goto label_2c524c;
        }
    }
    ctx->pc = 0x2C5238u;
label_2c5238:
    // 0x2c5238: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5238u;
    {
        const bool branch_taken_0x2c5238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5238u;
        // 0x2c523c: 0x24090012  addiu       $t1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5238) {
            ctx->pc = 0x2C524Cu;
            goto label_2c524c;
        }
    }
    ctx->pc = 0x2C5240u;
label_2c5240:
    // 0x2c5240: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C5240u;
    {
        const bool branch_taken_0x2c5240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5240u;
        // 0x2c5244: 0x24090017  addiu       $t1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5240) {
            ctx->pc = 0x2C524Cu;
            goto label_2c524c;
        }
    }
    ctx->pc = 0x2C5248u;
label_2c5248:
    // 0x2c5248: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x2c5248u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c524c:
    // 0x2c524c: 0x8f82bb04  lw          $v0, -0x44FC($gp)
    ctx->pc = 0x2c524cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949636)));
    // 0x2c5250: 0x18400040  blez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x2C5250u;
    {
        const bool branch_taken_0x2c5250 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C5254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5250u;
        // 0x2c5254: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5250) {
            ctx->pc = 0x2C5354u;
            goto label_2c5354;
        }
    }
    ctx->pc = 0x2C5258u;
    // 0x2c5258: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2c5258u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c525c: 0x0  nop
    ctx->pc = 0x2c525cu;
    // NOP
label_2c5260:
    // 0x2c5260: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c5260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c5264: 0x14820038  bne         $a0, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2C5264u;
    {
        const bool branch_taken_0x2c5264 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C5268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5264u;
        // 0x2c5268: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5264) {
            ctx->pc = 0x2C5348u;
            goto label_2c5348;
        }
    }
    ctx->pc = 0x2C526Cu;
    // 0x2c526c: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c526cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2c5270: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2c5270u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2c5274: 0x8e1e0004  lw          $fp, 0x4($s0)
    ctx->pc = 0x2c5274u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c5278: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2c5278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2c527c: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x2c527cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x2c5280: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x2c5280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c5284: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2c5284u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c5288: 0xa2200a  movz        $a0, $a1, $v0
    ctx->pc = 0x2c5288u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x2c528c: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x2c528cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2c5290: 0x3200b  movn        $a0, $zero, $v1
    ctx->pc = 0x2c5290u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x2c5294: 0x41043  sra         $v0, $a0, 1
    ctx->pc = 0x2c5294u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
    // 0x2c5298: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x2c5298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2c529c: 0x491018  mult        $v0, $v0, $t1
    ctx->pc = 0x2c529cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c52a0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2c52a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2c52a4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C52A4u;
    {
        const bool branch_taken_0x2c52a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C52A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C52A4u;
        // 0x2c52a8: 0x3c2f021  addu        $fp, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c52a4) {
            ctx->pc = 0x2C52C4u;
            goto label_2c52c4;
        }
    }
    ctx->pc = 0x2C52ACu;
    // 0x2c52ac: 0x851026  xor         $v0, $a0, $a1
    ctx->pc = 0x2c52acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x2c52b0: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2c52b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2c52b4: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x2c52b4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x2c52b8: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2c52b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2c52bc: 0x5480004a  bnel        $a0, $zero, . + 4 + (0x4A << 2)
    ctx->pc = 0x2C52BCu;
    {
        const bool branch_taken_0x2c52bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c52bc) {
            ctx->pc = 0x2C52C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C52BCu;
            // 0x2c52c0: 0x87c20000  lh          $v0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C53E8u;
            goto label_2c53e8;
        }
    }
    ctx->pc = 0x2C52C4u;
label_2c52c4:
    // 0x2c52c4: 0x87c20000  lh          $v0, 0x0($fp)
    ctx->pc = 0x2c52c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2c52c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c52c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c52cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c52ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c52d0: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x2c52d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x2c52d4: 0x87c20002  lh          $v0, 0x2($fp)
    ctx->pc = 0x2c52d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
    // 0x2c52d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c52d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c52dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c52dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c52e0: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x2c52e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x2c52e4: 0x87c20004  lh          $v0, 0x4($fp)
    ctx->pc = 0x2c52e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2c52e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c52e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c52ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c52ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c52f0: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x2c52f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x2c52f4: 0x87c20006  lh          $v0, 0x6($fp)
    ctx->pc = 0x2c52f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 6)));
    // 0x2c52f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c52f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c52fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c52fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5300: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x2c5300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x2c5304: 0x87c20008  lh          $v0, 0x8($fp)
    ctx->pc = 0x2c5304u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2c5308: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c530c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c530cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5310: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x2c5310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x2c5314: 0x87c2000a  lh          $v0, 0xA($fp)
    ctx->pc = 0x2c5314u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2c5318: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c531c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c531cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5320: 0xe4e00014  swc1        $f0, 0x14($a3)
    ctx->pc = 0x2c5320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x2c5324: 0x87c2000c  lh          $v0, 0xC($fp)
    ctx->pc = 0x2c5324u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2c5328: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c532c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c532cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5330: 0xe4e00018  swc1        $f0, 0x18($a3)
    ctx->pc = 0x2c5330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
    // 0x2c5334: 0x87c2000e  lh          $v0, 0xE($fp)
    ctx->pc = 0x2c5334u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2c5338: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c533c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c533cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5340: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x2C5340u;
    {
        const bool branch_taken_0x2c5340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5340u;
        // 0x2c5344: 0xe4e0001c  swc1        $f0, 0x1C($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5340) {
            ctx->pc = 0x2C5570u;
            goto label_2c5570;
        }
    }
    ctx->pc = 0x2C5348u;
label_2c5348:
    // 0x2c5348: 0x68102a  slt         $v0, $v1, $t0
    ctx->pc = 0x2c5348u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2c534c: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x2C534Cu;
    {
        const bool branch_taken_0x2c534c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C534Cu;
        // 0x2c5350: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c534c) {
            ctx->pc = 0x2C5260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c5260;
        }
    }
    ctx->pc = 0x2C5354u;
label_2c5354:
    // 0x2c5354: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2c5354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c5358: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C5358u;
    {
        const bool branch_taken_0x2c5358 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C535Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5358u;
        // 0x2c535c: 0x28a20004  slti        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5358) {
            ctx->pc = 0x2C5398u;
            goto label_2c5398;
        }
    }
    ctx->pc = 0x2C5360u;
    // 0x2c5360: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C5360u;
    {
        const bool branch_taken_0x2c5360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5360u;
        // 0x2c5364: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5360) {
            ctx->pc = 0x2C5380u;
            goto label_2c5380;
        }
    }
    ctx->pc = 0x2C5368u;
    // 0x2c5368: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c5368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c536c: 0x50a20016  beql        $a1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C536Cu;
    {
        const bool branch_taken_0x2c536c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c536c) {
            ctx->pc = 0x2C5370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C536Cu;
            // 0x2c5370: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C53C8u;
            goto label_2c53c8;
        }
    }
    ctx->pc = 0x2C5374u;
    // 0x2c5374: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x2C5374u;
    {
        const bool branch_taken_0x2c5374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5374) {
            ctx->pc = 0x2C5568u;
            goto label_2c5568;
        }
    }
    ctx->pc = 0x2C537Cu;
    // 0x2c537c: 0x0  nop
    ctx->pc = 0x2c537cu;
    // NOP
label_2c5380:
    // 0x2c5380: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C5380u;
    {
        const bool branch_taken_0x2c5380 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C5384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5380u;
        // 0x2c5384: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5380) {
            ctx->pc = 0x2C53B0u;
            goto label_2c53b0;
        }
    }
    ctx->pc = 0x2C5388u;
    // 0x2c5388: 0x50a20013  beql        $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C5388u;
    {
        const bool branch_taken_0x2c5388 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c5388) {
            ctx->pc = 0x2C538Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5388u;
            // 0x2c538c: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C53D8u;
            goto label_2c53d8;
        }
    }
    ctx->pc = 0x2C5390u;
    // 0x2c5390: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x2C5390u;
    {
        const bool branch_taken_0x2c5390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5390) {
            ctx->pc = 0x2C5568u;
            goto label_2c5568;
        }
    }
    ctx->pc = 0x2C5398u;
label_2c5398:
    // 0x2c5398: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2c5398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c539c: 0xc0b1eaa  jal         func_2C7AA8
    ctx->pc = 0x2C539Cu;
    SET_GPR_U32(ctx, 31, 0x2C53A4u);
    ctx->pc = 0x2C53A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C539Cu;
    // 0x2c53a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7AA8u, 0x2C539Cu, 0x2C53A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C53A4u;
label_2c53a4:
    // 0x2c53a4: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x2C53A4u;
    {
        const bool branch_taken_0x2c53a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C53A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C53A4u;
        // 0x2c53a8: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c53a4) {
            ctx->pc = 0x2C5574u;
            goto label_2c5574;
        }
    }
    ctx->pc = 0x2C53ACu;
    // 0x2c53ac: 0x0  nop
    ctx->pc = 0x2c53acu;
    // NOP
label_2c53b0:
    // 0x2c53b0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2c53b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c53b4: 0xc0b1eaa  jal         func_2C7AA8
    ctx->pc = 0x2C53B4u;
    SET_GPR_U32(ctx, 31, 0x2C53BCu);
    ctx->pc = 0x2C53B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C53B4u;
    // 0x2c53b8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7AA8u, 0x2C53B4u, 0x2C53BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C53BCu;
label_2c53bc:
    // 0x2c53bc: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x2C53BCu;
    {
        const bool branch_taken_0x2c53bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C53C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C53BCu;
        // 0x2c53c0: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c53bc) {
            ctx->pc = 0x2C5574u;
            goto label_2c5574;
        }
    }
    ctx->pc = 0x2C53C4u;
    // 0x2c53c4: 0x0  nop
    ctx->pc = 0x2c53c4u;
    // NOP
label_2c53c8:
    // 0x2c53c8: 0xc0b1eaa  jal         func_2C7AA8
    ctx->pc = 0x2C53C8u;
    SET_GPR_U32(ctx, 31, 0x2C53D0u);
    ctx->pc = 0x2C53CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C53C8u;
    // 0x2c53cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7AA8u, 0x2C53C8u, 0x2C53D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C53D0u;
label_2c53d0:
    // 0x2c53d0: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x2C53D0u;
    {
        const bool branch_taken_0x2c53d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C53D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C53D0u;
        // 0x2c53d4: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c53d0) {
            ctx->pc = 0x2C5574u;
            goto label_2c5574;
        }
    }
    ctx->pc = 0x2C53D8u;
label_2c53d8:
    // 0x2c53d8: 0xc0b1eaa  jal         func_2C7AA8
    ctx->pc = 0x2C53D8u;
    SET_GPR_U32(ctx, 31, 0x2C53E0u);
    ctx->pc = 0x2C53DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C53D8u;
    // 0x2c53dc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7AA8u, 0x2C53D8u, 0x2C53E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C53E0u;
label_2c53e0:
    // 0x2c53e0: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x2C53E0u;
    {
        const bool branch_taken_0x2c53e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C53E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C53E0u;
        // 0x2c53e4: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c53e0) {
            ctx->pc = 0x2C5574u;
            goto label_2c5574;
        }
    }
    ctx->pc = 0x2C53E8u;
label_2c53e8:
    // 0x2c53e8: 0x27a30004  addiu       $v1, $sp, 0x4
    ctx->pc = 0x2c53e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2c53ec: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x2c53ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c53f0: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x2c53f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x2c53f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c53f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c53f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c53f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c53fc: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x2c53fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5400: 0x27a3000c  addiu       $v1, $sp, 0xC
    ctx->pc = 0x2c5400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x2c5404: 0x980c0  sll         $s0, $t1, 3
    ctx->pc = 0x2c5404u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x2c5408: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x2c5408u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c540c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2c540cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c5410: 0x3d08021  addu        $s0, $fp, $s0
    ctx->pc = 0x2c5410u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
    // 0x2c5414: 0x27b20018  addiu       $s2, $sp, 0x18
    ctx->pc = 0x2c5414u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x2c5418: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2c5418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c541c: 0x240b02d  daddu       $s6, $s2, $zero
    ctx->pc = 0x2c541cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5420: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c5420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c5424: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2c5424u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2c5428: 0x27b2001c  addiu       $s2, $sp, 0x1C
    ctx->pc = 0x2c5428u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2c542c: 0x87c20002  lh          $v0, 0x2($fp)
    ctx->pc = 0x2c542cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
    // 0x2c5430: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2c5430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5434: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2c5434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5438: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c5438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c543c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c543cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5440: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c5440u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5444: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c5444u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2c5448: 0x27d10008  addiu       $s1, $fp, 0x8
    ctx->pc = 0x2c5448u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x2c544c: 0x26170008  addiu       $s7, $s0, 0x8
    ctx->pc = 0x2c544cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2c5450: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2c5450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2c5454: 0x87c20004  lh          $v0, 0x4($fp)
    ctx->pc = 0x2c5454u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2c5458: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c545c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c545cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5460: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x2c5460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x2c5464: 0x87c20006  lh          $v0, 0x6($fp)
    ctx->pc = 0x2c5464u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 6)));
    // 0x2c5468: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5468u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c546c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c546cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5470: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x2c5470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x2c5474: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x2c5474u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c5478: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c547c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c547cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5480: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2c5480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2c5484: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x2c5484u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2c5488: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c548c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c548cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5490: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2c5490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2c5494: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x2c5494u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c5498: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c549c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c549cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c54a0: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x2c54a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x2c54a4: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x2c54a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2c54a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c54a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c54ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c54acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c54b0: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2c54b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2c54b4: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2c54b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x2c54b8: 0xc0847ec  jal         func_211FB0
    ctx->pc = 0x2C54B8u;
    SET_GPR_U32(ctx, 31, 0x2C54C0u);
    ctx->pc = 0x2C54BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C54B8u;
    // 0x2c54bc: 0x7fa70030  sq          $a3, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211FB0u, 0x2C54B8u, 0x2C54C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C54C0u;
label_2c54c0:
    // 0x2c54c0: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x2c54c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c54c4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c54c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c54c8: 0x7ba70030  lq          $a3, 0x30($sp)
    ctx->pc = 0x2c54c8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c54cc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c54ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2c54d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c54d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c54d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c54d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c54d8: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x2c54d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c54dc: 0x24e40010  addiu       $a0, $a3, 0x10
    ctx->pc = 0x2c54dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x2c54e0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2c54e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c54e4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2c54e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c54e8: 0x87c2000a  lh          $v0, 0xA($fp)
    ctx->pc = 0x2c54e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x2c54ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c54ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c54f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c54f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c54f4: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2c54f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2c54f8: 0x87c2000c  lh          $v0, 0xC($fp)
    ctx->pc = 0x2c54f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2c54fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c54fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5500: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c5500u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5504: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x2c5504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x2c5508: 0x87c2000e  lh          $v0, 0xE($fp)
    ctx->pc = 0x2c5508u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2c550c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c550cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5510: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c5510u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5514: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x2c5514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x2c5518: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x2c5518u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2c551c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c551cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5520: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c5520u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5524: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2c5524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2c5528: 0x8602000a  lh          $v0, 0xA($s0)
    ctx->pc = 0x2c5528u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x2c552c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c552cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5530: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c5530u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5534: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2c5534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2c5538: 0x8602000c  lh          $v0, 0xC($s0)
    ctx->pc = 0x2c5538u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2c553c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c553cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5540: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c5540u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5544: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x2c5544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x2c5548: 0x8602000e  lh          $v0, 0xE($s0)
    ctx->pc = 0x2c5548u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x2c554c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c554cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5550: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c5550u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5554: 0xc0847ec  jal         func_211FB0
    ctx->pc = 0x2C5554u;
    SET_GPR_U32(ctx, 31, 0x2C555Cu);
    ctx->pc = 0x2C5558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5554u;
    // 0x2c5558: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x211FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211FB0u, 0x2C5554u, 0x2C555Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C555Cu;
label_2c555c:
    // 0x2c555c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C555Cu;
    {
        const bool branch_taken_0x2c555c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C555Cu;
        // 0x2c5560: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c555c) {
            ctx->pc = 0x2C5574u;
            goto label_2c5574;
        }
    }
    ctx->pc = 0x2C5564u;
    // 0x2c5564: 0x0  nop
    ctx->pc = 0x2c5564u;
    // NOP
label_2c5568:
    // 0x2c5568: 0xc096b10  jal         func_25AC40
    ctx->pc = 0x2C5568u;
    SET_GPR_U32(ctx, 31, 0x2C5570u);
    ctx->pc = 0x2C556Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5568u;
    // 0x2c556c: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC40u, 0x2C5568u, 0x2C5570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5570u;
label_2c5570:
    // 0x2c5570: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2c5570u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c5574:
    // 0x2c5574: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2c5574u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c5578: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2c5578u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c557c: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2c557cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2c5580: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2c5580u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c5584: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x2c5584u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c5588: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2c5588u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c558c: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x2c558cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5590: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2c5590u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c5594: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x2c5594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c5598: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2c5598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c559c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C559Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C55A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C559Cu;
        // 0x2c55a0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C559Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C55A4u;
    // 0x2c55a4: 0x0  nop
    ctx->pc = 0x2c55a4u;
    // NOP
    ctx->pc = 0x2c55a8u;
}
