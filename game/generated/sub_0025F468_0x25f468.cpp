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

// Function: sub_0025F468
// Address: 0x25f468 - 0x25f990
void sub_0025F468_0x25f468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F468_0x25f468");
#endif

    switch (ctx->pc) {
        case 0x25f4ccu: goto label_25f4cc;
        case 0x25f4e0u: goto label_25f4e0;
        case 0x25f5f0u: goto label_25f5f0;
        case 0x25f618u: goto label_25f618;
        case 0x25f654u: goto label_25f654;
        case 0x25f708u: goto label_25f708;
        case 0x25f7acu: goto label_25f7ac;
        case 0x25f88cu: goto label_25f88c;
        case 0x25f89cu: goto label_25f89c;
        case 0x25f8acu: goto label_25f8ac;
        case 0x25f8bcu: goto label_25f8bc;
        case 0x25f914u: goto label_25f914;
        case 0x25f924u: goto label_25f924;
        case 0x25f934u: goto label_25f934;
        case 0x25f944u: goto label_25f944;
        default: break;
    }

    ctx->pc = 0x25f468u;

    // 0x25f468: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x25f468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x25f46c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x25f46cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f470: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x25f470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x25f474: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x25f474u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f478: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x25f478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
    // 0x25f47c: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x25f47cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25f480: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x25f480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x25f484: 0x24450720  addiu       $a1, $v0, 0x720
    ctx->pc = 0x25f484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1824));
    // 0x25f488: 0xffb500c8  sd          $s5, 0xC8($sp)
    ctx->pc = 0x25f488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 21));
    // 0x25f48c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x25f48cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f490: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x25f490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x25f494: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x25f494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x25f498: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x25f498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x25f49c: 0xe7b600e8  swc1        $f22, 0xE8($sp)
    ctx->pc = 0x25f49cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x25f4a0: 0xe7b500e0  swc1        $f21, 0xE0($sp)
    ctx->pc = 0x25f4a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x25f4a4: 0xe7b400d8  swc1        $f20, 0xD8($sp)
    ctx->pc = 0x25f4a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x25f4a8: 0x8c830898  lw          $v1, 0x898($a0)
    ctx->pc = 0x25f4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2200)));
    // 0x25f4ac: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x25f4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x25f4b0: 0x8c700048  lw          $s0, 0x48($v1)
    ctx->pc = 0x25f4b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x25f4b4: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x25f4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x25f4b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25f4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f4bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x25f4bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f4c0: 0x8c510898  lw          $s1, 0x898($v0)
    ctx->pc = 0x25f4c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2200)));
    // 0x25f4c4: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x25F4C4u;
    SET_GPR_U32(ctx, 31, 0x25F4CCu);
    ctx->pc = 0x25F4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F4C4u;
    // 0x25f4c8: 0x3a742  srl         $s4, $v1, 29 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 3), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x25F4C4u, 0x25F4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F4CCu;
label_25f4cc:
    // 0x25f4cc: 0x32940001  andi        $s4, $s4, 0x1
    ctx->pc = 0x25f4ccu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x25f4d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25f4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f4d4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25f4d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f4d8: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x25F4D8u;
    SET_GPR_U32(ctx, 31, 0x25F4E0u);
    ctx->pc = 0x25F4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F4D8u;
    // 0x25f4dc: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x25F4D8u, 0x25F4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F4E0u;
label_25f4e0:
    // 0x25f4e0: 0x12800039  beqz        $s4, . + 4 + (0x39 << 2)
    ctx->pc = 0x25F4E0u;
    {
        const bool branch_taken_0x25f4e0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F4E0u;
        // 0x25f4e4: 0x3c06003b  lui         $a2, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f4e0) {
            ctx->pc = 0x25F5C8u;
            goto label_25f5c8;
        }
    }
    ctx->pc = 0x25F4E8u;
    // 0x25f4e8: 0x24c288d0  addiu       $v0, $a2, -0x7730
    ctx->pc = 0x25f4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936784));
    // 0x25f4ec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x25f4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25f4f0: 0x908501bb  lbu         $a1, 0x1BB($a0)
    ctx->pc = 0x25f4f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 443)));
    // 0x25f4f4: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25F4F4u;
    {
        const bool branch_taken_0x25f4f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f4f4) {
            ctx->pc = 0x25F50Cu;
            goto label_25f50c;
        }
    }
    ctx->pc = 0x25F4FCu;
    // 0x25f4fc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x25f4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25f500: 0x904301bb  lbu         $v1, 0x1BB($v0)
    ctx->pc = 0x25f500u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 443)));
    // 0x25f504: 0x50600031  beql        $v1, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x25F504u;
    {
        const bool branch_taken_0x25f504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f504) {
            ctx->pc = 0x25F508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F504u;
            // 0x25f508: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F5CCu;
            goto label_25f5cc;
        }
    }
    ctx->pc = 0x25F50Cu;
label_25f50c:
    // 0x25f50c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x25F50Cu;
    {
        const bool branch_taken_0x25f50c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f50c) {
            ctx->pc = 0x25F520u;
            goto label_25f520;
        }
    }
    ctx->pc = 0x25F514u;
    // 0x25f514: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x25F514u;
    {
        const bool branch_taken_0x25f514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F514u;
        // 0x25f518: 0x7a420000  lq          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f514) {
            ctx->pc = 0x25F5ACu;
            goto label_25f5ac;
        }
    }
    ctx->pc = 0x25F51Cu;
    // 0x25f51c: 0x0  nop
    ctx->pc = 0x25f51cu;
    // NOP
label_25f520:
    // 0x25f520: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x25F520u;
    {
        const bool branch_taken_0x25f520 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F520u;
        // 0x25f524: 0x24840750  addiu       $a0, $a0, 0x750 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f520) {
            ctx->pc = 0x25F550u;
            goto label_25f550;
        }
    }
    ctx->pc = 0x25F528u;
    // 0x25f528: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x25f528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25f52c: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x25f52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25f530: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x25f530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f534: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x25f534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25f538: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x25f538u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x25f53c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x25f53cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x25f540: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x25f540u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x25f544: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x25f544u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x25f548: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25F548u;
    {
        const bool branch_taken_0x25f548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F548u;
        // 0x25f54c: 0x46000900  add.s       $f4, $f1, $f0 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f548) {
            ctx->pc = 0x25F558u;
            goto label_25f558;
        }
    }
    ctx->pc = 0x25F550u;
label_25f550:
    // 0x25f550: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x25f550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x25f554: 0xc44432ac  lwc1        $f4, 0x32AC($v0)
    ctx->pc = 0x25f554u;
    { uint32_t bits = FAST_READ32(0x1532ACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_25f558:
    // 0x25f558: 0x24c288d0  addiu       $v0, $a2, -0x7730
    ctx->pc = 0x25f558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936784));
    // 0x25f55c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x25f55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25f560: 0x904301bb  lbu         $v1, 0x1BB($v0)
    ctx->pc = 0x25f560u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 443)));
    // 0x25f564: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x25F564u;
    {
        const bool branch_taken_0x25f564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F564u;
        // 0x25f568: 0x24420750  addiu       $v0, $v0, 0x750 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f564) {
            ctx->pc = 0x25F5A8u;
            goto label_25f5a8;
        }
    }
    ctx->pc = 0x25F56Cu;
    // 0x25f56c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x25f56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f570: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x25f570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25f574: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x25f574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25f578: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x25f578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25f57c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x25f57cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x25f580: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x25f580u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x25f584: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x25f584u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x25f588: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x25f588u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x25f58c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25f58cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25f590: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x25f590u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25f594: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x25F594u;
    {
        const bool branch_taken_0x25f594 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25f594) {
            ctx->pc = 0x25F598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F594u;
            // 0x25f598: 0x78820000  lq          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F5ACu;
            goto label_25f5ac;
        }
    }
    ctx->pc = 0x25F59Cu;
    // 0x25f59c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25F59Cu;
    {
        const bool branch_taken_0x25f59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F59Cu;
        // 0x25f5a0: 0x78420000  lq          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f59c) {
            ctx->pc = 0x25F5ACu;
            goto label_25f5ac;
        }
    }
    ctx->pc = 0x25F5A4u;
    // 0x25f5a4: 0x0  nop
    ctx->pc = 0x25f5a4u;
    // NOP
label_25f5a8:
    // 0x25f5a8: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x25f5a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_25f5ac:
    // 0x25f5ac: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x25f5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x25f5b0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25f5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25f5b4: 0x261200c0  addiu       $s2, $s0, 0xC0
    ctx->pc = 0x25f5b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x25f5b8: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x25f5b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x25f5bc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25f5bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25f5c0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x25F5C0u;
    {
        const bool branch_taken_0x25f5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F5C0u;
        // 0x25f5c4: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f5c0) {
            ctx->pc = 0x25F654u;
            goto label_25f654;
        }
    }
    ctx->pc = 0x25F5C8u;
label_25f5c8:
    // 0x25f5c8: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x25f5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_25f5cc:
    // 0x25f5cc: 0x1c400014  bgtz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x25F5CCu;
    {
        const bool branch_taken_0x25f5cc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x25F5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F5CCu;
        // 0x25f5d0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f5cc) {
            ctx->pc = 0x25F620u;
            goto label_25f620;
        }
    }
    ctx->pc = 0x25F5D4u;
    // 0x25f5d4: 0x7a0200c0  lq          $v0, 0xC0($s0)
    ctx->pc = 0x25f5d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x25f5d8: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x25f5d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25f5dc: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x25f5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x25f5e0: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x25f5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x25f5e4: 0xc7ac0058  lwc1        $f12, 0x58($sp)
    ctx->pc = 0x25f5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25f5e8: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x25F5E8u;
    SET_GPR_U32(ctx, 31, 0x25F5F0u);
    ctx->pc = 0x25F5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F5E8u;
    // 0x25f5ec: 0xc7ad0054  lwc1        $f13, 0x54($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x25F5E8u, 0x25F5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F5F0u;
label_25f5f0:
    // 0x25f5f0: 0xe620005c  swc1        $f0, 0x5C($s1)
    ctx->pc = 0x25f5f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
    // 0x25f5f4: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x25f5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f5f8: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x25f5f8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x25f5fc: 0xc60d0008  lwc1        $f13, 0x8($s0)
    ctx->pc = 0x25f5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x25f600: 0x460d6b5c  madd.s      $f13, $f13, $f13
    ctx->pc = 0x25f600u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[13], ctx->f[13]));
    // 0x25f604: 0x460d0344  c1          0xD0344
    ctx->pc = 0x25f604u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x25f608: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x25f608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x25f60c: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x25f60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25f610: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x25F610u;
    SET_GPR_U32(ctx, 31, 0x25F618u);
    ctx->pc = 0x25F614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F610u;
    // 0x25f614: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x25F610u, 0x25F618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F618u;
label_25f618:
    // 0x25f618: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x25F618u;
    {
        const bool branch_taken_0x25f618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F618u;
        // 0x25f61c: 0xe6200060  swc1        $f0, 0x60($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f618) {
            ctx->pc = 0x25F95Cu;
            goto label_25f95c;
        }
    }
    ctx->pc = 0x25F620u;
label_25f620:
    // 0x25f620: 0x261200c0  addiu       $s2, $s0, 0xC0
    ctx->pc = 0x25f620u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x25f624: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x25f624u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    // 0x25f628: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25f628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f62c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25f62cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25f630: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25f630u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25f634: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25f634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f638: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x25f638u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25f63c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x25f63cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f640: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x25f640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x25f644: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25f644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25f648: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x25f648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x25f64c: 0xc08491e  jal         func_212478
    ctx->pc = 0x25F64Cu;
    SET_GPR_U32(ctx, 31, 0x25F654u);
    ctx->pc = 0x25F650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F64Cu;
    // 0x25f650: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x25F64Cu, 0x25F654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F654u;
label_25f654:
    // 0x25f654: 0x56a000aa  bnel        $s5, $zero, . + 4 + (0xAA << 2)
    ctx->pc = 0x25F654u;
    {
        const bool branch_taken_0x25f654 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f654) {
            ctx->pc = 0x25F658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F654u;
            // 0x25f658: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F900u;
            goto label_25f900;
        }
    }
    ctx->pc = 0x25F65Cu;
    // 0x25f65c: 0x27b50050  addiu       $s5, $sp, 0x50
    ctx->pc = 0x25f65cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25f660: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x25f660u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f664: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x25f664u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x25f668: 0x7a660000  lq          $a2, 0x0($s3)
    ctx->pc = 0x25f668u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x25f66c: 0x7ba40020  lq          $a0, 0x20($sp)
    ctx->pc = 0x25f66cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f670: 0x7ba70030  lq          $a3, 0x30($sp)
    ctx->pc = 0x25f670u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25f674: 0x48230000  qmfc2.ni    $v1, $vf0
    ctx->pc = 0x25f674u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x25f678: 0x70862c88  pextlw      $a1, $a0, $a2
    ctx->pc = 0x25f678u;
    SET_GPR_VEC(ctx, 5, PS2_PEXTLW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x25f67c: 0x708624a8  pextuw      $a0, $a0, $a2
    ctx->pc = 0x25f67cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTUW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x25f680: 0x70671488  pextlw      $v0, $v1, $a3
    ctx->pc = 0x25f680u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
    // 0x25f684: 0x70671ca8  pextuw      $v1, $v1, $a3
    ctx->pc = 0x25f684u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
    // 0x25f688: 0x70453389  pcpyld      $a2, $v0, $a1
    ctx->pc = 0x25f688u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x25f68c: 0x70a22ba9  pcpyud      $a1, $a1, $v0
    ctx->pc = 0x25f68cu;
    SET_GPR_VEC(ctx, 5, _mm_unpackhi_epi64(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x25f690: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x25f690u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x25f694: 0xda670030  lqc2        $vf7, 0x30($s3)
    ctx->pc = 0x25f694u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x25f698: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x25f698u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x25f69c: 0x48a52800  qmtc2.ni    $a1, $vf5
    ctx->pc = 0x25f69cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x25f6a0: 0x48a33000  qmtc2.ni    $v1, $vf6
    ctx->pc = 0x25f6a0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x25f6a4: 0x4bc002bc  vadda.xyz   $ACC, $vf0, $vf0
    ctx->pc = 0x25f6a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x25f6a8: 0x4bc720fc  vmsubax.xyz $ACC, $vf4, $vf7x
    ctx->pc = 0x25f6a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x25f6ac: 0x4bc728fd  vmsubay.xyz $ACC, $vf5, $vf7y
    ctx->pc = 0x25f6acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x25f6b0: 0x4bc731ce  vmsubz.xyz  $vf7, $vf6, $vf7z
    ctx->pc = 0x25f6b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x25f6b4: 0x7d060000  sq          $a2, 0x0($t0)
    ctx->pc = 0x25f6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 6));
    // 0x25f6b8: 0x7d050010  sq          $a1, 0x10($t0)
    ctx->pc = 0x25f6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 5));
    // 0x25f6bc: 0x7d030020  sq          $v1, 0x20($t0)
    ctx->pc = 0x25f6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 3));
    // 0x25f6c0: 0xf9070030  sqc2        $vf7, 0x30($t0)
    ctx->pc = 0x25f6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x25f6c4: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x25f6c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f6c8: 0x27b30060  addiu       $s3, $sp, 0x60
    ctx->pc = 0x25f6c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x25f6cc: 0xd9300000  lqc2        $vf16, 0x0($t1)
    ctx->pc = 0x25f6ccu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x25f6d0: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x25f6d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x25f6d4: 0xda650010  lqc2        $vf5, 0x10($s3)
    ctx->pc = 0x25f6d4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x25f6d8: 0xda660020  lqc2        $vf6, 0x20($s3)
    ctx->pc = 0x25f6d8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x25f6dc: 0xda670030  lqc2        $vf7, 0x30($s3)
    ctx->pc = 0x25f6dcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x25f6e0: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x25f6e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25f6e4: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x25f6e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25f6e8: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x25f6e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25f6ec: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x25f6ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x25f6f0: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x25f6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x25f6f4: 0xc7ac0058  lwc1        $f12, 0x58($sp)
    ctx->pc = 0x25f6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25f6f8: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x25f6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x25f6fc: 0xc7ad0054  lwc1        $f13, 0x54($sp)
    ctx->pc = 0x25f6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x25f700: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x25F700u;
    SET_GPR_U32(ctx, 31, 0x25F708u);
    ctx->pc = 0x25F704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F700u;
    // 0x25f704: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x25F700u, 0x25F708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F708u;
label_25f708:
    // 0x25f708: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x25f708u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x25f70c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25f70cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25f710: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x25f710u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25f714: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x25F714u;
    {
        const bool branch_taken_0x25f714 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25f714) {
            ctx->pc = 0x25F718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F714u;
            // 0x25f718: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F71Cu;
            goto label_25f71c;
        }
    }
    ctx->pc = 0x25F71Cu;
label_25f71c:
    // 0x25f71c: 0xc7808bbc  lwc1        $f0, -0x7444($gp)
    ctx->pc = 0x25f71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f720: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x25f720u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25f724: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x25F724u;
    {
        const bool branch_taken_0x25f724 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25f724) {
            ctx->pc = 0x25F738u;
            goto label_25f738;
        }
    }
    ctx->pc = 0x25F72Cu;
    // 0x25f72c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25F72Cu;
    {
        const bool branch_taken_0x25f72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F72Cu;
        // 0x25f730: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f72c) {
            ctx->pc = 0x25F748u;
            goto label_25f748;
        }
    }
    ctx->pc = 0x25F734u;
    // 0x25f734: 0x0  nop
    ctx->pc = 0x25f734u;
    // NOP
label_25f738:
    // 0x25f738: 0xc7808bc0  lwc1        $f0, -0x7440($gp)
    ctx->pc = 0x25f738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f73c: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x25f73cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25f740: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x25F740u;
    {
        const bool branch_taken_0x25f740 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25f740) {
            ctx->pc = 0x25F744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F740u;
            // 0x25f744: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F748u;
            goto label_25f748;
        }
    }
    ctx->pc = 0x25F748u;
label_25f748:
    // 0x25f748: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x25f748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25f74c: 0x16040004  bne         $s0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25F74Cu;
    {
        const bool branch_taken_0x25f74c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x25F750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F74Cu;
        // 0x25f750: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f74c) {
            ctx->pc = 0x25F760u;
            goto label_25f760;
        }
    }
    ctx->pc = 0x25F754u;
    // 0x25f754: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x25f754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x25f758: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25F758u;
    {
        const bool branch_taken_0x25f758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25f758) {
            ctx->pc = 0x25F75Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F758u;
            // 0x25f75c: 0xc636005c  lwc1        $f22, 0x5C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F778u;
            goto label_25f778;
        }
    }
    ctx->pc = 0x25F760u;
label_25f760:
    // 0x25f760: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25F760u;
    {
        const bool branch_taken_0x25f760 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x25F764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F760u;
        // 0x25f764: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f760) {
            ctx->pc = 0x25F788u;
            goto label_25f788;
        }
    }
    ctx->pc = 0x25F768u;
    // 0x25f768: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x25f768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x25f76c: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25F76Cu;
    {
        const bool branch_taken_0x25f76c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x25F770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F76Cu;
        // 0x25f770: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f76c) {
            ctx->pc = 0x25F788u;
            goto label_25f788;
        }
    }
    ctx->pc = 0x25F774u;
    // 0x25f774: 0xc636005c  lwc1        $f22, 0x5C($s1)
    ctx->pc = 0x25f774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_25f778:
    // 0x25f778: 0xc6350060  lwc1        $f21, 0x60($s1)
    ctx->pc = 0x25f778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25f77c: 0x4600b086  mov.s       $f2, $f22
    ctx->pc = 0x25f77cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[22]);
    // 0x25f780: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x25F780u;
    {
        const bool branch_taken_0x25f780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F780u;
        // 0x25f784: 0x4600a8c6  mov.s       $f3, $f21 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f780) {
            ctx->pc = 0x25F7B8u;
            goto label_25f7b8;
        }
    }
    ctx->pc = 0x25F788u;
label_25f788:
    // 0x25f788: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x25f788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f78c: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x25f78cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x25f790: 0xc44d0008  lwc1        $f13, 0x8($v0)
    ctx->pc = 0x25f790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x25f794: 0x460d6b5c  madd.s      $f13, $f13, $f13
    ctx->pc = 0x25f794u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[13], ctx->f[13]));
    // 0x25f798: 0x460d0344  c1          0xD0344
    ctx->pc = 0x25f798u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x25f79c: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x25f79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x25f7a0: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x25f7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25f7a4: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x25F7A4u;
    SET_GPR_U32(ctx, 31, 0x25F7ACu);
    ctx->pc = 0x25F7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F7A4u;
    // 0x25f7a8: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x25F7A4u, 0x25F7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F7ACu;
label_25f7ac:
    // 0x25f7ac: 0xc622005c  lwc1        $f2, 0x5C($s1)
    ctx->pc = 0x25f7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25f7b0: 0xc6230060  lwc1        $f3, 0x60($s1)
    ctx->pc = 0x25f7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25f7b4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x25f7b4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_25f7b8:
    // 0x25f7b8: 0x2602fffd  addiu       $v0, $s0, -0x3
    ctx->pc = 0x25f7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
    // 0x25f7bc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x25f7bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x25f7c0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25F7C0u;
    {
        const bool branch_taken_0x25f7c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F7C0u;
        // 0x25f7c4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f7c0) {
            ctx->pc = 0x25F7CCu;
            goto label_25f7cc;
        }
    }
    ctx->pc = 0x25F7C8u;
    // 0x25f7c8: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x25f7c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_25f7cc:
    // 0x25f7cc: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25F7CCu;
    {
        const bool branch_taken_0x25f7cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x25F7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F7CCu;
        // 0x25f7d0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f7cc) {
            ctx->pc = 0x25F7F0u;
            goto label_25f7f0;
        }
    }
    ctx->pc = 0x25F7D4u;
    // 0x25f7d4: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x25f7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x25f7d8: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25F7D8u;
    {
        const bool branch_taken_0x25f7d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x25F7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F7D8u;
        // 0x25f7dc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f7d8) {
            ctx->pc = 0x25F7F0u;
            goto label_25f7f0;
        }
    }
    ctx->pc = 0x25F7E0u;
    // 0x25f7e0: 0xc7968bc4  lwc1        $f22, -0x743C($gp)
    ctx->pc = 0x25f7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x25f7e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25F7E4u;
    {
        const bool branch_taken_0x25f7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f7e4) {
            ctx->pc = 0x25F808u;
            goto label_25f808;
        }
    }
    ctx->pc = 0x25F7ECu;
    // 0x25f7ec: 0x0  nop
    ctx->pc = 0x25f7ecu;
    // NOP
label_25f7f0:
    // 0x25f7f0: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25F7F0u;
    {
        const bool branch_taken_0x25f7f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x25f7f0) {
            ctx->pc = 0x25F808u;
            goto label_25f808;
        }
    }
    ctx->pc = 0x25F7F8u;
    // 0x25f7f8: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x25f7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x25f7fc: 0x14500002  bne         $v0, $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25F7FCu;
    {
        const bool branch_taken_0x25f7fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x25f7fc) {
            ctx->pc = 0x25F808u;
            goto label_25f808;
        }
    }
    ctx->pc = 0x25F804u;
    // 0x25f804: 0xc7968bc8  lwc1        $f22, -0x7438($gp)
    ctx->pc = 0x25f804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_25f808:
    // 0x25f808: 0xc7808bcc  lwc1        $f0, -0x7434($gp)
    ctx->pc = 0x25f808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f80c: 0x4600b5a8  max.s       $f22, $f22, $f0
    ctx->pc = 0x25f80cu;
    ctx->f[22] = std::max(ctx->f[22], ctx->f[0]);
    // 0x25f810: 0xc7818bd0  lwc1        $f1, -0x7430($gp)
    ctx->pc = 0x25f810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25f814: 0x4601b5a9  min.s       $f22, $f22, $f1
    ctx->pc = 0x25f814u;
    ctx->f[22] = std::min(ctx->f[22], ctx->f[1]);
    // 0x25f818: 0x4602b001  sub.s       $f0, $f22, $f2
    ctx->pc = 0x25f818u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[2]);
    // 0x25f81c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25f81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25f820: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x25f820u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x25f824: 0x1682000e  bne         $s4, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x25F824u;
    {
        const bool branch_taken_0x25f824 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x25F828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F824u;
        // 0x25f828: 0x46001580  add.s       $f22, $f2, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f824) {
            ctx->pc = 0x25F860u;
            goto label_25f860;
        }
    }
    ctx->pc = 0x25F82Cu;
    // 0x25f82c: 0x4602b001  sub.s       $f0, $f22, $f2
    ctx->pc = 0x25f82cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[2]);
    // 0x25f830: 0xc7818bd4  lwc1        $f1, -0x742C($gp)
    ctx->pc = 0x25f830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25f834: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x25f834u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x25f838: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25f838u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25f83c: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
    ctx->pc = 0x25F83Cu;
    {
        const bool branch_taken_0x25f83c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25f83c) {
            ctx->pc = 0x25F840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F83Cu;
            // 0x25f840: 0x46001d46  mov.s       $f21, $f3 (Delay Slot)
            ctx->f[21] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F87Cu;
            goto label_25f87c;
        }
    }
    ctx->pc = 0x25F844u;
    // 0x25f844: 0x4603a801  sub.s       $f0, $f21, $f3
    ctx->pc = 0x25f844u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[3]);
    // 0x25f848: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x25f848u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x25f84c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x25f84cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25f850: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x25F850u;
    {
        const bool branch_taken_0x25f850 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25f850) {
            ctx->pc = 0x25F860u;
            goto label_25f860;
        }
    }
    ctx->pc = 0x25F858u;
    // 0x25f858: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25F858u;
    {
        const bool branch_taken_0x25f858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F858u;
        // 0x25f85c: 0x46001d46  mov.s       $f21, $f3 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f858) {
            ctx->pc = 0x25F87Cu;
            goto label_25f87c;
        }
    }
    ctx->pc = 0x25F860u;
label_25f860:
    // 0x25f860: 0xc7808bd8  lwc1        $f0, -0x7428($gp)
    ctx->pc = 0x25f860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f864: 0x4600ad68  max.s       $f21, $f21, $f0
    ctx->pc = 0x25f864u;
    ctx->f[21] = std::max(ctx->f[21], ctx->f[0]);
    // 0x25f868: 0xc7818bdc  lwc1        $f1, -0x7424($gp)
    ctx->pc = 0x25f868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25f86c: 0x4601ad69  min.s       $f21, $f21, $f1
    ctx->pc = 0x25f86cu;
    ctx->f[21] = std::min(ctx->f[21], ctx->f[1]);
    // 0x25f870: 0x4603a801  sub.s       $f0, $f21, $f3
    ctx->pc = 0x25f870u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[3]);
    // 0x25f874: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x25f874u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x25f878: 0x46001d40  add.s       $f21, $f3, $f0
    ctx->pc = 0x25f878u;
    ctx->f[21] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_25f87c:
    // 0x25f87c: 0xc7948be0  lwc1        $f20, -0x7420($gp)
    ctx->pc = 0x25f87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25f880: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25f880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f884: 0xc084cb0  jal         func_2132C0
    ctx->pc = 0x25F884u;
    SET_GPR_U32(ctx, 31, 0x25F88Cu);
    ctx->pc = 0x25F888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F884u;
    // 0x25f888: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2132C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2132C0u, 0x25F884u, 0x25F88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F88Cu;
label_25f88c:
    // 0x25f88c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25f88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f890: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25f890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f894: 0xc084a7e  jal         func_2129F8
    ctx->pc = 0x25F894u;
    SET_GPR_U32(ctx, 31, 0x25F89Cu);
    ctx->pc = 0x25F898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F894u;
    // 0x25f898: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2129F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2129F8u, 0x25F894u, 0x25F89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F89Cu;
label_25f89c:
    // 0x25f89c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25f89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f8a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25f8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f8a4: 0xc084a7e  jal         func_2129F8
    ctx->pc = 0x25F8A4u;
    SET_GPR_U32(ctx, 31, 0x25F8ACu);
    ctx->pc = 0x25F8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F8A4u;
    // 0x25f8a8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2129F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2129F8u, 0x25F8A4u, 0x25F8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F8ACu;
label_25f8ac:
    // 0x25f8ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25f8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f8b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25f8b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f8b4: 0xc084a62  jal         func_212988
    ctx->pc = 0x25F8B4u;
    SET_GPR_U32(ctx, 31, 0x25F8BCu);
    ctx->pc = 0x25F8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F8B4u;
    // 0x25f8b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x212988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212988u, 0x25F8B4u, 0x25F8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F8BCu;
label_25f8bc:
    // 0x25f8bc: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x25f8bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x25f8c0: 0x2a040003  slti        $a0, $s0, 0x3
    ctx->pc = 0x25f8c0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x25f8c4: 0x7e430000  sq          $v1, 0x0($s2)
    ctx->pc = 0x25f8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 3));
    // 0x25f8c8: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x25f8c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25f8cc: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x25f8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
    // 0x25f8d0: 0x7ba30080  lq          $v1, 0x80($sp)
    ctx->pc = 0x25f8d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25f8d4: 0x7e430020  sq          $v1, 0x20($s2)
    ctx->pc = 0x25f8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 3));
    // 0x25f8d8: 0xe636005c  swc1        $f22, 0x5C($s1)
    ctx->pc = 0x25f8d8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
    // 0x25f8dc: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25F8DCu;
    {
        const bool branch_taken_0x25f8dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F8DCu;
        // 0x25f8e0: 0xe6350060  swc1        $f21, 0x60($s1) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f8dc) {
            ctx->pc = 0x25F8F4u;
            goto label_25f8f4;
        }
    }
    ctx->pc = 0x25F8E4u;
    // 0x25f8e4: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x25f8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x25f8e8: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x25f8e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x25f8ec: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x25F8ECu;
    {
        const bool branch_taken_0x25f8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f8ec) {
            ctx->pc = 0x25F8F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F8ECu;
            // 0x25f8f0: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F960u;
            goto label_25f960;
        }
    }
    ctx->pc = 0x25F8F4u;
label_25f8f4:
    // 0x25f8f4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x25F8F4u;
    {
        const bool branch_taken_0x25f8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F8F4u;
        // 0x25f8f8: 0xae300058  sw          $s0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f8f4) {
            ctx->pc = 0x25F95Cu;
            goto label_25f95c;
        }
    }
    ctx->pc = 0x25F8FCu;
    // 0x25f8fc: 0x0  nop
    ctx->pc = 0x25f8fcu;
    // NOP
label_25f900:
    // 0x25f900: 0xc62c0060  lwc1        $f12, 0x60($s1)
    ctx->pc = 0x25f900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25f904: 0xc634005c  lwc1        $f20, 0x5C($s1)
    ctx->pc = 0x25f904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25f908: 0xc7958be4  lwc1        $f21, -0x741C($gp)
    ctx->pc = 0x25f908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25f90c: 0xc084cb0  jal         func_2132C0
    ctx->pc = 0x25F90Cu;
    SET_GPR_U32(ctx, 31, 0x25F914u);
    ctx->pc = 0x25F910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F90Cu;
    // 0x25f910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2132C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2132C0u, 0x25F90Cu, 0x25F914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F914u;
label_25f914:
    // 0x25f914: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25f914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f918: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25f918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f91c: 0xc084a7e  jal         func_2129F8
    ctx->pc = 0x25F91Cu;
    SET_GPR_U32(ctx, 31, 0x25F924u);
    ctx->pc = 0x25F920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F91Cu;
    // 0x25f920: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2129F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2129F8u, 0x25F91Cu, 0x25F924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F924u;
label_25f924:
    // 0x25f924: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25f924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f928: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25f928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f92c: 0xc084a7e  jal         func_2129F8
    ctx->pc = 0x25F92Cu;
    SET_GPR_U32(ctx, 31, 0x25F934u);
    ctx->pc = 0x25F930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F92Cu;
    // 0x25f930: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2129F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2129F8u, 0x25F92Cu, 0x25F934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F934u;
label_25f934:
    // 0x25f934: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25f934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f938: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25f938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f93c: 0xc084a62  jal         func_212988
    ctx->pc = 0x25F93Cu;
    SET_GPR_U32(ctx, 31, 0x25F944u);
    ctx->pc = 0x25F940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F93Cu;
    // 0x25f940: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x212988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212988u, 0x25F93Cu, 0x25F944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F944u;
label_25f944:
    // 0x25f944: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x25f944u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25f948: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x25f948u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x25f94c: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x25f94cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25f950: 0x7e430010  sq          $v1, 0x10($s2)
    ctx->pc = 0x25f950u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 3));
    // 0x25f954: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x25f954u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25f958: 0x7e420020  sq          $v0, 0x20($s2)
    ctx->pc = 0x25f958u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 2));
label_25f95c:
    // 0x25f95c: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x25f95cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_25f960:
    // 0x25f960: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x25f960u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f964: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x25f964u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x25f968: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x25f968u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x25f96c: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x25f96cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x25f970: 0xdfb500c8  ld          $s5, 0xC8($sp)
    ctx->pc = 0x25f970u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x25f974: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x25f974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x25f978: 0xc7b600e8  lwc1        $f22, 0xE8($sp)
    ctx->pc = 0x25f978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x25f97c: 0xc7b500e0  lwc1        $f21, 0xE0($sp)
    ctx->pc = 0x25f97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25f980: 0xc7b400d8  lwc1        $f20, 0xD8($sp)
    ctx->pc = 0x25f980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25f984: 0x3e00008  jr          $ra
    ctx->pc = 0x25F984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F984u;
        // 0x25f988: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F98Cu;
    // 0x25f98c: 0x0  nop
    ctx->pc = 0x25f98cu;
    // NOP
    ctx->pc = 0x25f990u;
}
